/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbardavi <nbabardavid@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 13:28:44 by nbardavi          #+#    #+#             */
/*   Updated: 2024/05/06 09:20:41 by nbardavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_CLASS_HPP
# define ARRAY_CLASS_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array{
public:
	Array(): _size(0), _element(0){}
	Array(unsigned int n):_size(n), _element(new T[n]){}
	Array(const Array &other) : _size(other._size), _element(other._size ? new T[other._size] : 0) {
    for (unsigned int i = 0; i < _size; i++) {
        _element[i] = other._element[i];
    }
}
	~Array(){
		delete[] _element;
	}
	Array& operator=(const Array &other) {
		if (this != &other){
			delete[] this->_element;
			this->_size = other.size();
			this->_element = new T[this->size()];
			for (unsigned int i = 0; i < _size; i++){
				this->_element[i] = other._element[i];
			}
		}
		return *this;
	}
	T &operator[](unsigned int index) const{
		if (index >= size())
			throw (std::out_of_range("Index out of bounds"));
		return _element[index];
	}    
	unsigned int size()const{
		return _size;
	}
private:
	unsigned int _size;
	T *_element;
};

#endif
