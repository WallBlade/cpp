/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:12:26 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/23 16:47:31 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; i++)
		_materias[i] = NULL;
}

void	MateriaSource::learnMateria(AMateria *m) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] == NULL) {
			_materias[i] = m;
			break ;
		}
	}
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < 4; i++) {
		if (_materias[i] != NULL && _materias[i]->getType() == type)
			return (_materias[i]->clone());
	}
	return (NULL);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < 4; i++) {
		delete (_materias[i]);
		_materias[i] = NULL;
	}
}
