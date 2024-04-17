/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melsahha <melsahha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:35:10 by melsahha          #+#    #+#             */
/*   Updated: 2024/04/17 17:55:44 by melsahha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data *data = new Data;

	data->name = "mariam";
	data->age = 23;

	std::cout << Serializer::serialize( data ) << std::endl;
	std::cout << "Name: " << Serializer::deserialize( Serializer::serialize( data ) )->name << std::endl;
	std::cout << "Age: " << Serializer::deserialize( Serializer::serialize( data ) )->age << std::endl;

	delete data;

	return EXIT_SUCCESS;
}
