/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zel-kass <zel-kass@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 18:12:14 by zel-kass          #+#    #+#             */
/*   Updated: 2023/07/03 14:18:18 by zel-kass         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PRESIDENTIALPARDONFORM_HPP__
#define __PRESIDENTIALPARDONFORM_HPP__

#include "AForm.hpp"

class PresidentialPardonForm : public Form {
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &cpy);

	private:
		virtual     void	performAction() const;
		std::string _target;
};

#endif