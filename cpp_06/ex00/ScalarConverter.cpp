/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:14:18 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/07 00:37:56 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter &cpy) {
	(void)cpy;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter	&ScalarConverter::operator=(const ScalarConverter &cpy) {
	(void)cpy;
	return *this;
}

void	ScalarConverter::convert(std::string litteral) {
	if (isChar(litteral)) {
		prChar(litteral);
	} else if (isInt(litteral)) {
		prInt(litteral);
	} else if (isFloat(litteral)) {
		prFloat(litteral);
	} else if (isDouble(litteral)) {
		prDouble(litteral);
	} else if (isExcep(litteral)) {
		prExcep(litteral);
	}
}

bool	ScalarConverter::isInt(std::string litteral) {
	std::istringstream iss(litteral);
	int	num;
	iss >> num;
	return !iss.fail() && iss.eof();
}

bool	ScalarConverter::isChar(std::string litteral) {
	char	charValue;
	if (litteral.length() != 1)
		return false;
	charValue = litteral[0];
	if ((charValue >= 32 && charValue < 48) || (charValue >= 58 && charValue < 127))
		return true;
	return  false;
}

bool	ScalarConverter::isFloat(std::string litteral) {
	std::istringstream iss(litteral);
	float	floatValue;
	char	remain;

	if (!(iss >> floatValue)) 
		return false;
	iss >> remain;
	if (remain != 'f')
		return false;
	return true;
}

bool	ScalarConverter::isDouble(std::string litteral) {
	std::istringstream iss(litteral);
	double	doubleValue;
	char	remain;

	if (!(iss >> doubleValue))
		return false;
	else if (iss >> remain)
		return false;
	return true;
}

bool	ScalarConverter::isExcep(std::string litteral) {
	return (litteral == "+inf" || litteral == "-inf" || litteral == "nan"
		|| litteral == "+inff" || litteral == "-inff" || litteral == "nanf");
}

int		ScalarConverter::toInt(std::string litteral) {
	std::istringstream iss(litteral);
	int	value;
	iss >> value;
	return (value);
}

char	ScalarConverter::toChar(std::string litteral) {
	return (litteral[0]);
}

float	ScalarConverter::toFloat(std::string litteral) {
	std::istringstream iss(litteral);
	float	value;
	iss >> value;
	return (value);
}

double	ScalarConverter::toDouble(std::string litteral) {
	std::istringstream iss(litteral);
	double	value;
	iss >> value;
	return (value);
}

void	ScalarConverter::prChar(std::string litteral) {
	char charValue;
	try {
		charValue = toChar(litteral);
		std::cout << "char		: " << charValue << std::endl;
		std::cout << "int		: " << static_cast<int>(charValue) << std::endl;
		std::cout << "float		: " << static_cast<float>(charValue) << "f" << std::endl;
		std::cout << "double		: " << static_cast<double>(charValue) << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}

void	ScalarConverter::prInt(std::string litteral) {
	int intValue;
	try {
		intValue = toInt(litteral);
		if (std::isprint(static_cast<char>(intValue)))
			std::cout << "char		: " << static_cast<char>(intValue) << std::endl;
		else
			std::cout << "char		: non displayable" << std::endl;
		std::cout << "int		: " << intValue << std::endl;
		std::cout << "float		: " << static_cast<float>(intValue) << "f" << std::endl;
		std::cout << "double		: " << static_cast<double>(intValue) << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}

void	ScalarConverter::prFloat(std::string litteral) {
	float floatValue;
	try {
		floatValue = toFloat(litteral);
		if (std::isprint(static_cast<char>(floatValue)))
			std::cout << "char		: " << static_cast<char>(floatValue) << std::endl;
		else
			std::cout << "char		: non displayable" << std::endl;
		std::cout << "int		: " << static_cast<int>(floatValue) << std::endl;
		std::cout << "float		: " << floatValue << "f" << std::endl;
		std::cout << "double		: " << static_cast<double>(floatValue) << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}

void	ScalarConverter::prDouble(std::string litteral) {
	double doubleValue;
	try {
		doubleValue = toDouble(litteral);
		if (std::isprint(static_cast<char>(doubleValue)))
			std::cout << "char		: " << static_cast<char>(doubleValue) << std::endl;
		else
			std::cout << "char		: non displayable" << std::endl;
		std::cout << "int		: " << static_cast<int>(doubleValue) << std::endl;
		std::cout << "float		: " << static_cast<float>(doubleValue) << std::endl;
		std::cout << "double		: " << doubleValue << std::endl;
	} catch (const std::exception &e) {
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}

void	ScalarConverter::prExcep(std::string litteral) {
	if (litteral == "nan" || litteral == "nanf") {
		std::cout << "char		: impossible" << std::endl;
		std::cout << "int		: impossible" << std::endl;
		std::cout << "float		: nanf" << std::endl;
		std::cout << "double		: nan" << std::endl;
	} else if (litteral == "+inf" || litteral == "+inff") {
		std::cout << "char		: impossible" << std::endl;
		std::cout << "int		: impossible" << std::endl;
		std::cout << "float		: +inff" << std::endl;
		std::cout << "double		: +inf" << std::endl;
	} else if (litteral == "-inf" || litteral == "-inff") {
		std::cout << "char		: impossible" << std::endl;
		std::cout << "int		: impossible" << std::endl;
		std::cout << "float		: -inff" << std::endl;
		std::cout << "double		: -inf" << std::endl;
	}
}

const char* ScalarConverter::BadInputException::what() const throw() {
	return "Bad input ! Use Brain please";
}