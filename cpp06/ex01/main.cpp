/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcauchy <mcauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 19:12:58 by mcauchy           #+#    #+#             */
/*   Updated: 2023/01/14 19:21:22 by mcauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*		deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main(void)
{
	Data	*data = new Data(true);
	uintptr_t	serialized = serialize(data);
	Data	*deserialized = deserialize(serialized);

	std::cout << std::endl << "testing getAlive() from non-serialized data: " << data->getAlive() << std::endl;
	std::cout << "testing getAlive() from deserialized data: " << deserialized->getAlive() << std::endl << std::endl;
	std::cout << "data: " << data->getAlive() << std::endl;
	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "deserialized: " << deserialized->getAlive() << std::endl;

	delete data;

	return (0);
}