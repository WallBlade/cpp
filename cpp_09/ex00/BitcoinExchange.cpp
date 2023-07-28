/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:23 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/28 17:35:13 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) {
	if (this != &cpy)
		*this = cpy;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &cpy) {
	if (this != &cpy)
		*this = cpy;
	return *this;
}

int	BitcoinExchange::loadDataBase() {
	std::ifstream	data("data.csv");

	if (!data.is_open()) {
		std::cout << "Error : could not open data base file" << std::endl;
		return (1);
	}

	std::string line;
	std::getline(data, line);
	while (std::getline(data, line)) {
		std::istringstream	iss(line);
		std::string			date;
		float				value;
		if (std::getline(iss, date, ',') && (iss >> value)) {
			dataBase[date] = value;
		} else {
			std::cout << "Error: bad input => " << line << std::endl;
			return (1);
		}
	}
	
	data.close();
	
	return (0);
}

int		BitcoinExchange::isValidDate(std::string &date) {
	int		year, month, day;
	char	dash1, dash2;

	std::istringstream dateStream(date);
	dateStream >> year >> dash1 >> month >> dash2 >> day;
	if (dateStream.fail() || dash1 != '-' || dash2 != '-')
		return (1);

	return ((year >= 2009 && year <= 2050) &&
			(month >= 1 && month <= 12) &&
			(day >= 1 && day <= 31));
}


float	BitcoinExchange::parseInputLine(std::string &input) {
	if (input.empty())
		return (-1);
	std::istringstream	iss(input);
	std::string	date, value_str;
	std::getline(iss, date, '|');
	std::getline(iss, value_str);
	date.erase(0, date.find_first_not_of(" \t"));
	date.erase(date.find_last_not_of(" \t") + 1);
	input = date;
	float value;
	if (!isValidDate(input)) {
		std::cout << "Error: bad input => " << input << std::endl;
		return (-1);
	}
	value_str.erase(0, value_str.find_first_not_of(" \t"));
	value_str.erase(value_str.find_last_not_of(" \t") + 1);
	std::istringstream(value_str) >> value;
	if (value < 0) {
		std::cout << "Error: not a positive number." << std::endl;
		return (-1);
	} else if (value > 1000) {
		std::cout << "Error: too large a number." << std::endl;
		return (-1);
	}
	return (value);
}

void	BitcoinExchange::calculateRatio(std::ifstream &input) {
	std::string line;
	std::getline(input, line);
	while(std::getline(input, line)) {
		std::istringstream iss(line);
		float value;
		value = parseInputLine(line);
		if (value == -1)
			continue ;
		std::map<std::string, float>::iterator it = dataBase.lower_bound(line);
		if (it->first == line) {
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		} else if (it == dataBase.begin()) {
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		} else {
			it--;
			std::cout << line << " => " << value << " = " << value * it->second << std::endl;
		}
	}
}