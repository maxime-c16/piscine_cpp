/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macauchy <macauchy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:02:12 by macauchy          #+#    #+#             */
/*   Updated: 2025/07/20 19:19:01 by macauchy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

#define C_GREEN "\033[32m"
#define C_RESET "\033[0m"
#define C_YELLOW "\033[33m"
#define C_RED "\033[31m"
#define C_BLUE "\033[34m"
#define C_MAGENTA "\033[35m"
#define C_CYAN "\033[36m"

void printTest(const std::string& title) {
    std::cout << C_CYAN << "\n=== TEST " << title << " ===" << C_RESET << std::endl;
}

int	main( void )
{
	std::cout << C_CYAN << "=== BSP (BINARY SPACE PARTITIONING) DEMONSTRATION ===" << C_RESET << std::endl;
	std::cout << C_YELLOW << "Testing if points are inside triangles using fixed-point arithmetic" << C_RESET << std::endl;

	printTest("1: BASIC TRIANGLE - POINTS INSIDE");
	std::cout << C_GREEN << "Triangle: A(0,0), B(4,0), C(2,3)" << C_RESET << std::endl;

	Point a(0.0f, 0.0f);
	Point b(4.0f, 0.0f);
	Point c(2.0f, 3.0f);

	Point inside1(2.0f, 1.0f);
	Point inside2(1.0f, 0.5f);
	Point inside3(3.0f, 0.5f);

	std::cout << "Point (2, 1) inside triangle: " << C_BLUE << (Point::bsp(a, b, c, inside1) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (1, 0.5) inside triangle: " << C_BLUE << (Point::bsp(a, b, c, inside2) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (3, 0.5) inside triangle: " << C_BLUE << (Point::bsp(a, b, c, inside3) ? "YES" : "NO") << C_RESET << std::endl;

	printTest("2: BASIC TRIANGLE - POINTS OUTSIDE");
	std::cout << C_RED << "Testing points clearly outside the triangle" << C_RESET << std::endl;

	Point outside1(-1.0f, 0.0f);
	Point outside2(5.0f, 0.0f);
	Point outside3(2.0f, 4.0f);
	Point outside4(2.0f, -1.0f);

	std::cout << "Point (-1, 0) inside triangle: " << C_RED << (Point::bsp(a, b, c, outside1) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (5, 0) inside triangle: " << C_RED << (Point::bsp(a, b, c, outside2) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (2, 4) inside triangle: " << C_RED << (Point::bsp(a, b, c, outside3) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (2, -1) inside triangle: " << C_RED << (Point::bsp(a, b, c, outside4) ? "YES" : "NO") << C_RESET << std::endl;

	printTest("3: EDGE CASES - POINTS ON EDGES");
	std::cout << C_YELLOW << "Testing points exactly on triangle edges (should return false)" << C_RESET << std::endl;

	Point onEdge1(2.0f, 0.0f);
	Point onEdge2(1.0f, 1.5f);
	Point onEdge3(3.0f, 1.5f);

	std::cout << "Point (2, 0) on edge AB: " << C_YELLOW << (Point::bsp(a, b, c, onEdge1) ? "INSIDE" : "ON EDGE/OUTSIDE") << C_RESET << std::endl;
	std::cout << "Point (1, 1.5) on edge AC: " << C_YELLOW << (Point::bsp(a, b, c, onEdge2) ? "INSIDE" : "ON EDGE/OUTSIDE") << C_RESET << std::endl;
	std::cout << "Point (3, 1.5) on edge BC: " << C_YELLOW << (Point::bsp(a, b, c, onEdge3) ? "INSIDE" : "ON EDGE/OUTSIDE") << C_RESET << std::endl;

	printTest("4: VERTICES TEST");
	std::cout << C_MAGENTA << "Testing triangle vertices (should return false)" << C_RESET << std::endl;

	std::cout << "Vertex A(0, 0): " << C_MAGENTA << (Point::bsp(a, b, c, a) ? "INSIDE" : "ON VERTEX") << C_RESET << std::endl;
	std::cout << "Vertex B(4, 0): " << C_MAGENTA << (Point::bsp(a, b, c, b) ? "INSIDE" : "ON VERTEX") << C_RESET << std::endl;
	std::cout << "Vertex C(2, 3): " << C_MAGENTA << (Point::bsp(a, b, c, c) ? "INSIDE" : "ON VERTEX") << C_RESET << std::endl;

	printTest("5: DIFFERENT TRIANGLE SHAPES");
	std::cout << C_CYAN << "Testing with a right triangle: D(0,0), E(3,0), F(0,4)" << C_RESET << std::endl;

	Point d(0.0f, 0.0f);
	Point e(3.0f, 0.0f);
	Point f(0.0f, 4.0f);

	Point rightInside(1.0f, 1.0f);
	Point rightOutside(2.0f, 3.0f);

	std::cout << "Point (1, 1) in right triangle: " << C_GREEN << (Point::bsp(d, e, f, rightInside) ? "YES" : "NO") << C_RESET << std::endl;
	std::cout << "Point (2, 3) in right triangle: " << C_RED << (Point::bsp(d, e, f, rightOutside) ? "YES" : "NO") << C_RESET << std::endl;

	std::cout << C_CYAN << "\n=== KEY LEARNINGS ===" << C_RESET << std::endl;
	std::cout << C_GREEN << "• BSP (Binary Space Partitioning): Geometric algorithm for point-in-triangle" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Fixed-point precision: Ensures consistent calculations without floating errors" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Barycentric coordinates: Uses area ratios to determine point position" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Edge cases: Points on edges/vertices typically return false (strict inside)" << C_RESET << std::endl;
	std::cout << C_GREEN << "• Cross products: Mathematical foundation for determining point orientation" << C_RESET << std::endl;
	std::cout << C_RED << "• Real-world applications: Computer graphics, collision detection, ray tracing" << C_RESET << std::endl;

	return 0;
}
