/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 13:42:37 by zel-kass          #+#    #+#             */
/*   Updated: 2023/05/30 17:08:05 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

int	main(int argc, char **argv) {
	if (argc == 4)
	{
		std::ifstream		inputFile(argv[1]);
		if (!inputFile) {
			std::cerr << "Error opening input file" << std::endl;
			return 1;
		}
		const std::string	s1 = argv[2];
		const std::string	s2 = argv[3];
		std::ostringstream	outputFile;

		std::string			inputLine;
		while (std::getline(inputFile, inputLine)) {
			std::string::size_type	posNew = 0;
			std::string::size_type	posOld = 0;
			std::string				modifiedLine;
			while (posNew != std::string::npos) {
				std::cout << inputLine << "\n";
				posNew = inputLine.find(s1, posNew);
				if (posNew != std::string::npos) {
					std::cout << "posOld: " << posOld << std::endl;
					std::cout << "posNew: " << posNew << std::endl;
					modifiedLine.append(inputLine, posOld, posNew);
					modifiedLine.append(s2);
					posNew += s2.length();
					posOld = posNew;
				}
			}
			if (posNew == std::string::npos)
				modifiedLine.append(inputLine, inputLine.length());
			outputFile << modifiedLine << std::endl;
		}
		inputFile.close();
		std::string		filename = argv[1];
		std::string		modifiedContent = outputFile.str();
		filename.append(".replace");
		std::ofstream	file("file.replace");
		file << modifiedContent;
		file.close();
		if (!file) {
			std::cerr << "Failed creating output file" << std::endl;
			return 1;
		}
	}
	else {
		std::cerr << "Wrong arguments number" << std::endl;
		return 1;
	}
}