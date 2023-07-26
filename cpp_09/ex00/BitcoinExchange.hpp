/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:25 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/26 19:03:32 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>

class BitcoinExchange {
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &cpy);
		~BitcoinExchange();
		
		BitcoinExchange	&operator=(const BitcoinExchange &cpy);

		int		loadDataBase();
		int		isValidDate(std::string &date);
		float	parseInputLine(std::string &input);
		void	calculateRatio(std::ifstream &input);
	private:
		std::map<std::string, float> dataBase;
};

#endif