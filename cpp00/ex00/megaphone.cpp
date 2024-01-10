/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 18:46:33 by melsahha          #+#    #+#             */
/*   Updated: 2023/09/10 19:10:43 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int argc, char **argv) {
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int j = 0; argv[i][j] != '\0'; j++)
				argv[i][j] = std::toupper(argv[i][j]);
			std::cout << argv[i];
		}
		 std::cout << std::endl;
	}
	return (0);
}
