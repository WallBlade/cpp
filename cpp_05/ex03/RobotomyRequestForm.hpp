/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 18:13:33 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 14:18:21 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ROBOTOMYREQUESTFORM_HPP__
#define __ROBOTOMYREQUESTFORM_HPP__

#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public Form {
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &cpy);

	private:
		virtual void	performAction() const;
		std::string _target;
};

#endif