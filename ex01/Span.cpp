/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 16:25:54 by orakib            #+#    #+#             */
/*   Updated: 2023/09/27 21:10:15 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char	*Span::SpanAlreadyFull::what() const throw() {
	return ("Exception thrown : Span is already full");
}

const char	*Span::SpanTooSmall::what() const throw() {
	return ("Exception thrown : Span is too small");
}

Span::Span() : N(0) {

}

Span::Span(unsigned int N) : N(N) {

}

Span::Span(const Span &object) : N(object.N), vec(object.vec) {
	
}

Span	&Span::operator=(const Span &object) {
	if (this != &object) {
		this->N = object.N;
		this->vec = object.vec;
	}
	return (*this);
}

Span::~Span() {

}

void	Span::addNumber(int value) {
	if (vec.size() < N) {
		vec.push_back(value);
	}
	else
		throw SpanAlreadyFull();
}

unsigned int	Span::longestSpan() {
	if (vec.size() < 2)
		throw SpanTooSmall();
	return (*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
}

unsigned int	Span::shortestSpan() {
	if (vec.size() < 2)
		throw SpanTooSmall();
	std::vector<int>::iterator	i1 = vec.begin();
	std::vector<int>::iterator	i2 = vec.begin();
	i1--;
	unsigned int min = longestSpan();

	while (++i1 != vec.end()) {
		i2 = vec.begin();
		i2--;
		while (++i2 != vec.end()) {
			if (i1 == i2)
				continue;
			if ((unsigned int)abs(*i1 - *i2) < min)
				min = abs(*i1 - *i2);
		}
	}
	return (min);
}

std::vector<int>::iterator	Span::get_begin() {
	return (vec.begin());
}

std::vector<int>::iterator	Span::get_end() {
	return (vec.end());
}

void	Span::addNumbers(std::vector<int>::iterator &begin, std::vector<int>::iterator &end) {
	if (begin != vec.begin() || end != vec.end()) {
		std::cerr << "Error : wrong iterators !" << std::endl;
		return;
	}
	unsigned int i = -1;
	srand(time(NULL));
	while (++i < N)
		vec.push_back((uint16_t)rand());
}