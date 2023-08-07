/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 15:17:32 by zel-kass          #+#    #+#             */
/*   Updated: 2023/08/07 15:03:26 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const RPN &cpy) : stk(cpy.stk) {}

RPN::~RPN() {}

RPN	&RPN::operator=(const RPN &cpy) {
	stk = cpy.stk;
	return *this;
}

bool	RPN::is_token(char c) {
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

int	RPN::process(std::string exp) {
	for (size_t i = 0; i < exp.size(); i++) {
		char token = exp[i];
		if (token == ' ')
			continue;
		if (isdigit(token)) {
			stk.push(token - '0');
		} else if (is_token(token)) {
			if (stk.size() < 2) {
				std::cerr << "Error: insufficient values for operation." << std::endl;
				return (-1);
			}
			int right = stk.top();
			stk.pop();
			int left = stk.top();
			stk.pop();
			if (token == '+') {
				stk.push(left + right);
			} else if (token == '-') {
				stk.push(left - right);
			} else if (token == '*') {
				stk.push(left * right);
			} else if (token == '/') {
				if (right == 0) {
					std::cerr << "Error: division by zero." << std::endl;
					return (-1);
				}
				stk.push(left / right);
			}
			if (stk.size() != 1) {
				return (0);
			}
		} else {
			std::cerr << "Error: unexpected token '" << token << "'." << std::endl;
			return (-1);
		}
	}
	return (stk.top());
}