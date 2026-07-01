/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahwang <ahwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 01:04:39 by ahwang            #+#    #+#             */
/*   Updated: 2026/07/01 01:07:30 by ahwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <fstream>
# include <string>

std::string	replace_line(std::string line, std::string s1, std::string s2)
{
	std::string	new_line = "";
	int		pos = 0;
	int		find = 0;

	while (1)
	{
		find = line.find(s1, pos);
		if (find == -1)
		{
			new_line += line.substr(pos, std::string::npos);
			break ;
		}
		new_line += line.substr(pos, find - pos);
		new_line += s2;
		pos += (find - pos + s1.length());
	}
	return (new_line);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: arument error" << std::endl
			<< "(command: ./replace [filename] [s1] [s2])" << std::endl;
		return (1);
	}

	std::string	filename = argv[1];
	std::string	s1 = argv[2];
	std::string	s2 = argv[3];
	if (s1 == "")
	{
		std::cout << "Error: s1 is empty" << std::endl;
		return (1);
	}

	std::ifstream	f_read;
	f_read.open(filename.c_str(), std::ios::in);
	if (f_read.fail())
	{
		std::cout << "Error: file open error" << std::endl;
		return (1);
	}

	std::ofstream	f_write;
	f_write.open((filename + ".replace").c_str(), std::ios::out | std::ios::trunc);
	if (f_write.fail())
	{
		std::cout << "Error: file open error" << std::endl;
		f_read.close();
		return (1);
	}

	std::string	line;
	int		i = 0;
	while (std::getline(f_read, line))
	{
		line = replace_line(line, s1, s2);
		f_write << line;
		if (!(f_read.eof()))
			f_write << std::endl;
		i++;
	}
	f_read.close();
	f_write.close();
	return (0);
}
