/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:15:46 by orakib            #+#    #+#             */
/*   Updated: 2023/10/17 17:15:11 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP

#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack() {}
		~MutantStack() {}
		MutantStack	&operator=(const MutantStack &obj) {std::stack<T>::operator=(obj);}
		MutantStack(const MutantStack &obj) {*this = obj;}
		
		typedef typename std::stack<T>::container_type::iterator	iterator;
		
		iterator	begin() {return (this->c.begin());}
		iterator	end() {return (this->c.end());}
};

#endif