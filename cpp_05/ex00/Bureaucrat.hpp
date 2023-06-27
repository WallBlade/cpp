#ifndef __BUREAUCRAT_HPP__
#define __BUREAUCRAT_HPP__

#include <iostream>

class Bureaucrat {
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw() {
					return "Grade is too high";
				}
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw() {
					return "Grade is too low";
				}
		};
		std::string			getName() const;
		int					getGrade() const;
		void				increaseGrade(int amount);
		void				decreaseGrade(int amount);
	private:
		const std::string	_name;
		int					_grade;
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat &bu);

#endif