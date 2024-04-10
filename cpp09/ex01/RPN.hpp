/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 21:41:18 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/10 22:25:49 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>

class RPN
{
private:
	// Attributes
	std::stack<int> _numbers;
	std::string _inputStr;
	std::string _RPNStr;

	// Process
	bool validateInput();
	bool resolveRPN();

	// Utils
	bool isOperator(char c);

public:
	RPN(std::string inputStr);
	~RPN();
	RPN(RPN const &b);
	RPN &operator=(RPN const &a);
};

#endif
