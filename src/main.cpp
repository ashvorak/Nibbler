/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oshvorak <oshvorak@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 17:52:29 by oshvorak          #+#    #+#             */
/*   Updated: 2019/03/19 21:58:09 by oshvorak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

static void ft_usage( void )
{
	std::cout << "USAGE :";
	std::cout << " ./avm" << std::endl;
	std::cout << "        ./avm <filename>" << std::endl;
	exit(1);
}

int main(int argc, char **argv)
{
	if (argc <= 2 && argv[1][0] != 'a')
	{
		ft_usage();
	}
	return (0);
}
