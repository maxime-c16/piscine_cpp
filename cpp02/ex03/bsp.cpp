/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 19:12:16 by macauchy          #+#    #+#             */
/*   Updated: 2025/08/11 12:00:42 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool	Point::bsp(const Point a, const Point b, const Point c, const Point point)
{
	//Calculate vectors for triangle edges
	Fixed	edge_AB_x = b.getX() - a.getX();	// Edge AB vector X component
	Fixed	edge_AB_y = b.getY() - a.getY();	// Edge AB vector Y component
	
	Fixed	edge_BC_x = c.getX() - b.getX();	// Edge BC vector X component
	Fixed	edge_BC_y = c.getY() - b.getY();	// Edge BC vector Y component
	
	Fixed	edge_CA_x = a.getX() - c.getX();	// Edge CA vector X component
	Fixed	edge_CA_y = a.getY() - c.getY();	// Edge CA vector Y component

	//Calculate vectors from each vertex to the test point
	Fixed	point_from_A_x = point.getX() - a.getX();	// Vector from A to point
	Fixed	point_from_A_y = point.getY() - a.getY();
	
	Fixed	point_from_B_x = point.getX() - b.getX();	// Vector from B to point
	Fixed	point_from_B_y = point.getY() - b.getY();
	
	Fixed	point_from_C_x = point.getX() - c.getX();	// Vector from C to point
	Fixed	point_from_C_y = point.getY() - c.getY();

	//Calculate cross products (2D cross product = determinant)
	Fixed	cross1 = edge_AB_x * point_from_A_y - edge_AB_y * point_from_A_x;
	Fixed	cross2 = edge_BC_x * point_from_B_y - edge_BC_y * point_from_B_x;
	Fixed	cross3 = edge_CA_x * point_from_C_y - edge_CA_y * point_from_C_x;

	bool	all_positive = (cross1 > 0 && cross2 > 0 && cross3 > 0);
	bool	all_negative = (cross1 < 0 && cross2 < 0 && cross3 < 0);
	
	return (all_positive || all_negative);
}
