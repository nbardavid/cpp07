/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:28:44 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/03 14:20:57 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_CLASS_HPP
#define WHATEVER_CLASS_HPP

#include <iostream>

template < typename T >
const T& max(const T &v1, const T &v2){
	return (v1 > v2 ? v1 : v2);
}

template < typename T >
const T& min(const T &v1, const T &v2){
	return (v1 < v2 ? v1 : v2);
}

template < typename T >
void swap(T &v1, T &v2){
	T temp = v1;
	v1 = v2;
	v2 = temp;
}

#endif
