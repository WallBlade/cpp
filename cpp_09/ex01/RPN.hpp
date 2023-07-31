/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:34 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/31 17:38:51 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RPN_HPP__
#define __RPN_HPP__

#include <iostream>
#include <stack>
#include <string>

class RPN {
	public:
		RPN();
		RPN(const RPN &cpy);
		~RPN();

		RPN	&operator=(const RPN &cpy);
		
		int		process(std::string exp);
		bool	is_token(char c);
	private:
		std::stack<int> stk;
};

#endif