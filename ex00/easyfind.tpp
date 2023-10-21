/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: orakib <orakib@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 14:44:30 by orakib            #+#    #+#             */
/*   Updated: 2023/10/17 17:37:44 by orakib           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void	easyfind(T &cont, int value) {
	typename T::iterator i = std::find(cont.begin(), cont.end(), value);
	if (i == cont.end())
		std::cerr << "Error ! could not find value !" << std::endl;
	else
		std::cout << "Value found : " << *i << std::endl;
}
