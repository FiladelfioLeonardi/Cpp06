/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:52:33 by fefo              #+#    #+#             */
/*   Updated: 2026/10/07 19:49:07 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
    if(argc == 2)
        ScalarConverter::convert(argv[1]);
    else
    {
        std::cout << "Wronf input. Usage: ./Scalar (argument)" << std::endl;
        return 1;
    }
    return 0;
}