/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:17:59 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/09 15:18:01 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string string = "HI THIS IS BRAIN";
	std::string* stringPTR = &string;
	std::string& stringREF = string;

	std::cout << "address              = " << &string << std::endl;
	std::cout << "address held by ptr  = " << stringPTR << std::endl;
	std::cout << "address held by ref  = " << &stringREF << "\n\n";

	std::cout << "value                = " << string << std::endl;
	std::cout << "value pointed by PTR = " << *stringPTR << std::endl;
	std::cout << "value pointed by REF = " << stringREF << std::endl;


	return (0);

}