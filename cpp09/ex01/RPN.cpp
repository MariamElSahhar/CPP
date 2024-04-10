/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:43:40 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/10 22:23:19 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(std::string inputStr) : _inputStr(inputStr)
{
	if (!RPN::validateInput())
	{
		std::cout << "Error" << std::endl;
		return;
	}

	if (!resolveRPN())
		std::cout << "Error" << std::endl;
	else
		std::cout << _numbers.top() << std::endl;
}

RPN::RPN(RPN const &b) {
	(void)b;
}

RPN &RPN::operator=(RPN const &b)
{
	if (this != &b)
	{
		_numbers = b._numbers;
		_inputStr = b._inputStr;
	}
	return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(char c)
{
	return (c == '+' || c == '-' || c == '/' || c == '*');
}

bool RPN::validateInput()
{
	size_t i = 0;
	int operands = 0;
	int operators = 0;

	while (i < _inputStr.length())
	{
		if (i % 2 == 0)
		{
			if (!std::isdigit(_inputStr[i]) && !isOperator(_inputStr[i]))
				return (false);
			if (std::isdigit(_inputStr[i]))
				operands++;
			else if (isOperator(_inputStr[i]))
				operators++;
			_RPNStr += _inputStr[i];
		}
		else if (_inputStr[i] != ' ')
			return (false);
		i++;
	}
	return (operands == operators + 1);
}

bool RPN::resolveRPN()
{
	size_t i = 0;
	int rhs;
	int lhs;

	while (i < _RPNStr.length())
	{
		if (std::isdigit(_RPNStr[i]))
			_numbers.push(std::stoi(_RPNStr.substr(i, 1)));
		else
		{
			if (_numbers.size() < 2)
				return (false);
			// Pop operands
			rhs = _numbers.top();
			_numbers.pop();
			lhs = _numbers.top();
			_numbers.pop();

			// Apply operator
			if (_RPNStr[i] == '+')
				_numbers.push(lhs + rhs);
			else if (_RPNStr[i] == '*')
				_numbers.push(lhs * rhs);
			else if (_RPNStr[i] == '-')
				_numbers.push(lhs - rhs);
			else if (_RPNStr[i] == '/')
			{
				if (rhs == 0)
					return (false);
				_numbers.push(lhs / rhs);
			}
		}
		i++;
	}
	return (_numbers.size() == 1);
}
