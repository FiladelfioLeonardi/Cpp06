/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 18:58:40 by fefo              #+#    #+#             */
/*   Updated: 2026/10/07 20:14:14 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void handleSCase(std::string result)
{
    if (result[0] == '+')
    {
        if (result == "+inf" || result == "+inff")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: +inff" << std::endl;
            std::cout << "double: +inf" << std::endl;
        }     
    }
    else if (result[0] == '-')   
    {
        if (result == "-inf" || result == "-inff")
        {
            std::cout << "char: impossible" << std::endl;
            std::cout << "int: impossible" << std::endl;
            std::cout << "float: -inff" << std::endl;
            std::cout << "double: -inf" << std::endl;
        }        
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: nanf" << std::endl;
        std::cout << "double: nan" << std::endl;
    }
}

void printNumber(double value)
{
    bool hasDecimal = true;
    std::ostringstream stream;
    stream << value;

    std::string result = stream.str();
    
    
    if (result == "nanf" || result == "nan" || result == "+inf" || result == "-inf" 
            || result == "+inff" || result == "-inff")
    {
        handleSCase(result);
        return ;
    }
    
    if (result.find('.') == std::string::npos 
        && result.find('e') == std::string::npos
        && result.find('E') == std::string::npos)
        {
            hasDecimal = false;
        }
        
    if (value > 31 && value < 127) 
        std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
    else 
        std::cout << "char: Non displayable" << std::endl;

    std::cout << "int: " << static_cast<int>(value) << std::endl;
    if (hasDecimal == true)
    {
        std::cout << "float: " << static_cast<float>(value) << "f" << std::endl;
        std::cout << "double: " << value << std::endl;
    }
    else
    {
        std::cout << "float: " << static_cast<float>(value) << ".0f" << std::endl;
        std::cout << "double: " << value << ".0" << std::endl;
    }
}

void ScalarConverter::convert(const std::string& literal)
{
    
    if (literal.length() == 1)
    {
        if (!std::isdigit(literal[0]))
        {
            char character = literal[0];
            if (std::isalpha(character))
                std::cout << "char: '" << character << "'" << std::endl;
            else
                std::cout << "char: Non Displayable" << std::endl;
            std::cout << "int: " << static_cast<int>(character) << std::endl;
            std::cout << "float: " << static_cast<float>(character) << "f" << std::endl;
            std::cout << "double: " << static_cast<double>(character) << ".0" <<std::endl;
        }
        else if (std::isdigit(literal[0]))
        {
            int digit = std::atoi(literal.c_str());
            std::cout << "char: Non displayable" << std::endl;
            std::cout << "int: " << digit << std::endl;
            std::cout << "float: " << static_cast<float>(digit) << ".0f" << std::endl;
            std::cout << "double: " << static_cast<double>(digit) << ".0" << std::endl;
        }
    }
    else if (literal == "+inf" || literal == "+inff" || literal == "-inf" 
                || literal == "-inff" || literal == "nan" || literal == "nanf")
    {
        handleSCase(literal);
        return;
    }
    else
    {
        char *end;
        double value = std::strtod(literal.c_str(), &end);
        if (value > INT_MAX || value < INT_MIN)
        {
            std::cout << "Invalid number" << std::endl;
            return;
        }
        // std::cout << value << std::endl;
        if (*end == '\0' || (*end == 'f' && *(end + 1) == '\0'))
            printNumber(value);
        else
        {
            std::cout << "Invalid input" << std::endl;
            return;
        }
    }
}