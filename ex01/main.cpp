/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 20:21:54 by fefo              #+#    #+#             */
/*   Updated: 2026/10/10 00:01:29 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
    Data data;
    data.number = INT_MIN;
    Data* pointer = &data;
    //interpreting uthe pointer as an uint, its the same address but just an integer
    uintptr_t raw = reinterpret_cast<uintptr_t>(pointer);
    //same but with pointer
    Data* restored = reinterpret_cast<Data*>(raw);
    
    std::cout << "data Number: " << data.number << std::endl;
    std::cout << "data address: " << &data << std::endl;
    std::cout << "pointer: " << pointer << std::endl;
    std::cout << "raw integer of the pointer: " << raw << std::endl;
    std::cout << "restored pointer: " << restored << std::endl;
    std::cout << "restored number: " << restored->number << std::endl;
    if (pointer == restored)
        std::cout << "The pointers are equal!" << std::endl;
    else
        std::cout << "The pointers are NOT equal!" << std::endl;
    return 0;
}