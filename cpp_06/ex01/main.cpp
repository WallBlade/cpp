/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 19:40:18 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/07 21:01:51 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
	Data data(42);
	std::cout << "raw		: " << &data << std::endl;

    uintptr_t serialized = Serializer::serialize(&data);

    Data* deserialized = Serializer::deserialize(serialized);

    if (deserialized == &data) {
		std::cout <<  "serialized	: " << serialized << std::endl;
		std::cout <<  "deserialized	: " << deserialized << std::endl;
		std::cout <<  "raw		: " << &data << std::endl;
        std::cout << "Deserialization successful!" << std::endl;
    } else {
        std::cout << "Deserialization failed!" << std::endl;
    }

	return (0);
}