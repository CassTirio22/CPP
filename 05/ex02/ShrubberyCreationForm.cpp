/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ctirions <ctirions@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:46:00 by ctirions          #+#    #+#             */
/*   Updated: 2022/04/25 15:46:10 by ctirions         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShruberryCreation", "Default", 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("ShruberryCreation", target, 145, 137){}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form("ShruberryCreation", src.getName(), 145, 137){}
ShrubberyCreationForm::~ShrubberyCreationForm(void){}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs){
	this->_sign = rhs.getSign();
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > this->getXGrade())
		throw (Form::GradeTooLowException());
	std::ofstream	fout(this->getTarget() + "_shruberry");
	fout << "              _{/ _{/{//}/}/}__" << std::endl;
	fout << "             {/{//}{/{//}(/}{//} _" << std::endl;
	fout << "            {/{//}{/{//}(_)/}{/{//}  _" << std::endl;
	fout << "         {/{/(/}/}{/{//}/}{/){//}/} //}" << std::endl;
	fout << "        {/{/(_)/}{/{/)/}{/(_){/}/}/}/}" << std::endl;
	fout << "       _{/{/{/{/{/{/(_)/}/}/}{/(/}/}/}" << std::endl;
	fout << "      {/{/{/{/{/(/}{/{//}/}{/}(_){//}/}" << std::endl;
	fout << "      _{/{/{/{/(_)/}/}{/{/{//}/})/}{//}" << std::endl;
	fout << "     {/{/{/{/(/}{/{/{/{//})/}{/(_)/}/}/}" << std::endl;
	fout << "      {/{//}(_){/{/{//}/}(_){//}{//}/})/}" << std::endl;
	fout << "       {/{/{//}{/{/{/{//}/}{/{//}/}/}(_)" << std::endl;
	fout << "      {/{/{//}{/){/{/{//}/}{/{/(/}/}/}/}" << std::endl;
	fout << "       {/{/{//}(_){/{/{/(/}/}{/(_)/}/}/}" << std::endl;
	fout << "         {/({/{/{/{/{//}(_){//}/}/}/}(/}" << std::endl;
	fout << "          (_){/{//}{/{//}/}{/{/)/}/}(_)" << std::endl;
	fout << "            {/{/{/{//}{/{/{/{/(_)/}" << std::endl;
	fout << "             {/{/{/{//}/}{/{/}/}" << std::endl;
	fout << "              {){/ {//}{//} /}/}" << std::endl;
	fout << "              (_)  /.-'.-/" << std::endl;
	fout << "          __...--- |'-.-'| --...__" << std::endl;
	fout << "   _...--    .-'   |'-.-'|  ' -.   --..__" << std::endl;
	fout << " -     ' .  . '    |.'-._| '  . .  '" << std::endl;
	fout << " .  '-  '    .--'  | '-.'|    .  '  . '" << std::endl;
	fout << "          ' ..     |'-_.-|" << std::endl;
	fout << "  .  '  .       _.-|-._ -|-._  .  '  ." << std::endl;
	fout << "              .'   |'- .-|   '." << std::endl;
	fout << "  ..-'   ' .  '.   /-._.-/   .'  '  - ." << std::endl;
	fout << "   .-' '        '-._______.-'     '  ." << std::endl;
	fout << "        .      ~,       . ,    ~.~" << std::endl;
}
