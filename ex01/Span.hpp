/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:25:46 by orakib            #+#    #+#             */
/*   Updated: 2023/09/27 20:54:15 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP

#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span {
	private:
		unsigned int		N;
		std::vector<int>	vec;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span &object);
		Span	&operator=(const Span &object);
		~Span();
		void	addNumber(int num);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		class	SpanAlreadyFull : public std::exception {
			virtual const char	*what() const throw();
		};
		class	SpanTooSmall : public std::exception {
			virtual const char	*what() const throw();
		};
		std::vector<int>::iterator	get_begin();
		std::vector<int>::iterator	get_end();
		void	addNumbers(std::vector<int>::iterator &begin, std::vector<int>::iterator &end);
};

#endif