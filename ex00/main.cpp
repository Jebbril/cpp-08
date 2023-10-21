/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:43:51 by orakib            #+#    #+#             */
/*   Updated: 2023/10/17 17:38:24 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.tpp"

int	main(void) {
	std::vector<int>	tabv;
	std::list<int>		tabl;

	tabv.push_back(1);
	tabv.push_back(2);
	tabv.push_back(3);
	tabv.push_back(4);
	tabv.push_back(5);
	tabv.push_back(6);
	easyfind(tabv, 5);
	easyfind(tabv, 0);
	
	tabl.push_back(1);
	tabl.push_back(2);
	tabl.push_back(3);
	tabl.push_back(4);
	tabl.push_back(5);
	tabl.push_back(6);
	easyfind(tabv, 3);
	easyfind(tabv, 0);
}