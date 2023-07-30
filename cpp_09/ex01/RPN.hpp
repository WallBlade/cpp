/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:34 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/30 17:00:39 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
#define __RPN_HPP__

#include <iostream>
#include <stack>

class RPN {
	public:
		RPN();
		RPN(const RPN &cpy);
		~RPN();

		RPN	&operator=(const RPN &cpy);
	private:
		std::stack<int> rpn;
};

#endif