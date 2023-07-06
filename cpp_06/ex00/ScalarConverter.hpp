/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 18:14:20 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/07 00:22:58 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCALARCONVERTER_HPP__
#define __SCALARCONVERTER_HPP__

#include <iostream>
#include <cctype>
#include <sstream>
#include <iomanip>

class ScalarConverter {
	public:
		ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		~ScalarConverter();

		class BadInputException : public std::exception {
			public:
				const char* what() const throw();
		};
		
		ScalarConverter	&operator=(const ScalarConverter &cpy);
		static void	convert(std::string litteral);

		static bool	isChar(std::string litteral);
		static bool	isInt(std::string litteral);
		static bool	isFloat(std::string litteral);
		static bool	isDouble(std::string litteral);
		static bool isExcep(std::string litteral);

		static char toChar(std::string litteral);
		static int toInt(std::string litteral);
		static float toFloat(std::string litteral);
		static double toDouble(std::string litteral);

		static void prChar(std::string litteral);
		static void prInt(std::string litteral);
		static void prFloat(std::string litteral);
		static void prDouble(std::string litteral);
		static void prExcep(std::string litteral);
};

#endif
