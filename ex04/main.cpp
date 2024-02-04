/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvieira <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:26:07 by fvieira           #+#    #+#             */
/*   Updated: 2023/05/10 18:26:08 by fvieira          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.h"

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Don't\n";
		return (0);
	}
	std::string filename(argv[1]);
	std::ifstream read(filename.c_str());
	if (!read.is_open())
	{
		std::cout << "Again don't\n";
		return (1);
	}
	
	std::string	temp;
	std::string	joined;
	size_t	found = 0;
	std::ofstream replace;
	size_t	max = 0;
	while(read.good())
	{
		getline(read, temp);
		joined.append(temp);
		if (!read.eof() && !read.fail())
			joined.append("\n");
	}
	if (argv[2][0] != '\0')
	{
		max = joined.length();
		while(found < max)
		{
			found = joined.find(argv[2], found);
			if (found > max)
				break ;
			if (found < max)
			{
				joined.erase(found, std::strlen(argv[2]));
				joined.insert(found, argv[3]);
			}
			found += std::strlen(argv[3] + 1);
		}
	}
	else
		joined.append(argv[3]);
	filename.append(".replace");
	replace.open(filename.c_str());
	replace << joined;
	read.close();
	replace.close();
	return (0);
}
