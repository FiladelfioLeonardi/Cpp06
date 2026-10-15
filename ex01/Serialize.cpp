/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fefo <fefo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 23:51:08 by fefo              #+#    #+#             */
/*   Updated: 2026/10/15 21:05:56 by fefo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

uintptr_t Serializer::serialize(Data* pointer)
{
    //interpreting uthe pointer as an uint, its the same address but just an integer
    return reinterpret_cast<uintptr_t>(pointer);
}