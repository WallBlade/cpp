/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/04 17:56:55 by zel-kass          #+#    #+#             */
/*   Updated: 2023/04/04 19:31:56 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		for (int i = 0; i < (int)strlen(argv[1]); i++)
			putchar(toupper(argv[1][i]));
		putchar(10);
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}