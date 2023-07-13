/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 21:05:39 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/13 17:58:16 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	try {
        Array<int> emptyArray;
        std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

        Array<int> intArray(5);
        std::cout << "Size of intArray: " << intArray.size() << std::endl;

        intArray[0] = 10;
        intArray[1] = 20;
        intArray[2] = 30;
        intArray[3] = 40;
        intArray[4] = 50;

        for (unsigned int i = 0; i < intArray.size(); i++) {
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
        }

        std::cout << "Accessing out of bounds element..." << std::endl;
        std::cout << intArray[5] << std::endl;  // Throws std::out_of_range exception
    } catch (const std::exception& e) {
        std::cout << "Exception occurred: " << e.what() << std::endl;
    }

    return 0;
}