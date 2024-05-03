/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 09:57:35 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/03 16:13:25 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/colors.h"
#include "../include/Array.class.hpp"
#include <cctype>

// Fonction pour tester l'affichage des éléments de l'Array
template<typename T>
void printArray(const Array<T>& array) {
    for (unsigned int i = 0; i < array.size(); i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    try {
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); i++) {
            intArray[i] = i * 5;
        }
        std::cout << "Int Array: ";
        printArray(intArray);

        Array<int> copiedArray(intArray);
        std::cout << "Copied Int Array: ";
        printArray(copiedArray);

        copiedArray[2] = 100;
        std::cout << "Modified Copied Int Array: ";
        printArray(copiedArray);
        std::cout << "Original Int Array (unchanged): ";
        printArray(intArray);

        std::cout << "Try to access out-of-bounds element: " << intArray[intArray.size()] << std::endl;

    } catch (const std::out_of_range& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Some other std::exception caught: " << e.what() << std::endl;
    }

    Array<std::string> stringArray(3);
    stringArray[0] = "Hello";
    stringArray[1] = "World";
    stringArray[2] = "Test";
    std::cout << "String Array: ";
    printArray(stringArray);

    return 0;
}
