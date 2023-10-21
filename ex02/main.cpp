/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 21:15:23 by orakib            #+#    #+#             */
/*   Updated: 2023/10/17 17:33:41 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);
	
	
	std::cout << std::endl << std::endl << std::endl;


	std::list <int> l;
	l.push_back(5);
	l.push_back(17);
	std::cout << l.back() << std::endl;
	l.pop_back();
	std::cout << l.size() << std::endl;
	l.push_back(3);
	l.push_back(5);
	l.push_back(737);
	//[...]
	l.push_back(0);
	std::list<int>::iterator l_it = l.begin();
	std::list<int>::iterator l_ite = l.end();
	++l_it;
	--l_it;
	while (l_it != l_ite)
	{
	std::cout << *l_it << std::endl;
	++l_it;
	}
	std::list<int> ll(l);
	
	
	std::cout << std::endl << std::endl << std::endl;
	

	MutantStack<std::string>	m1;
	m1.push("mark");
	m1.push("sara");
	m1.push("jake");
	m1.push("chris");
	m1.push("elizabeth");
	MutantStack<std::string>::iterator	m_it = m1.begin();
	while (m_it != m1.end()) {
		std::cout << *m_it << " ";
		m_it++;
	}
	std::cout << std::endl;
	return 0;
}