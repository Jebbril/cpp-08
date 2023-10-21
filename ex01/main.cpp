/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:25:35 by orakib            #+#    #+#             */
/*   Updated: 2023/09/27 21:13:25 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	
	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		sp.addNumber(11);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		Span shortsp = Span(1);
		shortsp.addNumber(1);
		shortsp.shortestSpan();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	Span sp1 = Span(10);
	std::vector<int>::iterator begin1 = sp1.get_begin();
	std::vector<int>::iterator end1 = sp1.get_end();
	sp1.addNumbers(begin1, end1);
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	
	Span sp2 = Span(100);
	std::vector<int>::iterator begin2 = sp2.get_begin();
	std::vector<int>::iterator end2 = sp2.get_end();
	sp2.addNumbers(begin2, end2);
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	
	Span sp3 = Span(10000);
	std::vector<int>::iterator begin3 = sp3.get_begin();
	std::vector<int>::iterator end3 = sp3.get_end();
	sp3.addNumbers(begin3, end3);
	std::cout << sp3.shortestSpan() << std::endl;
	std::cout << sp3.longestSpan() << std::endl;
}