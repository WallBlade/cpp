/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 23:14:29 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/19 17:47:00 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal	*array[10];
	int		arraySize = 4;
	for (int i = 0; i < arraySize; i++) {
		if (i < arraySize / 2)
			array[i] = new Dog();
		else
			array[i] = new Cat();
	}
	
	std::cout << std::endl;

	for (int j = 0; j < arraySize; j++) {
		delete (array[j]);
	}

	std::cout << std::endl;

	Dog	dog = Dog();
	dog.setBrainIdea("Deeznuts", 50);
	Dog	dog2 = dog;
	std::cout << dog2.getBrainIdea(50) << std::endl;
	
	return 0;
}