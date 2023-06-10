/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 17:45:32 by zel-kass          #+#    #+#             */
/*   Updated: 2023/06/10 20:21:32 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main() {
	Point const a(2.5f, 4.4f);
	Point const b(3.9f, 1.6f);
	Point const c(1.3f, 1.6f);
	Point const point(1.0f, 4.0f);

	std::cout << "BSP = " << bsp(a, b, c, point) << std::endl;
	return (0);
}