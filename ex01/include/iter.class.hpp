/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:28:44 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/03 15:19:00 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_CLASS_HPP
# define ITER_CLASS_HPP

#include <iostream>
template<typename A, typename Func>

void iter(A *addr, int lenght, Func function){
	for (int i = 0; i < lenght; i++){
		function(addr[i]);
	}
}

#endif
