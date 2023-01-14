/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:12:58 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 21:06:15 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

#include <stdint.h>

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}

int main( void )
{
	Data d(true);

	Data* ptr = &d;
	uintptr_t serialized = serialize(ptr);
	Data* deserialized = deserialize(serialized);

	if (ptr == deserialized) {
		std::cout << "Serialization and deserialization successful!" << std::endl;
	} else {
		std::cout << "Serialization and deserialization failed." << std::endl;
	}

	return 0;
}
