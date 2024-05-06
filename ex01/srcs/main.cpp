/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:57:35 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/03 15:22:26 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.h"
#include "../include/iter.class.hpp"
#include <cctype>

void printE(char element) {
    std::cout << element << std::endl;
}

int main( void ) {
	char a[5] = "test";
	iter(a, 5, printE);
}
