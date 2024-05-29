/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <anttorre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:33:12 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/29 17:41:31 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon
{
	private:
		std::string	type;

	public:
		Weapon();
		~Weapon();
		
		/*Getters*/
		const std::string& getType(void);

		/*Setters*/
		void	setType(std::string type);
};

#endif

