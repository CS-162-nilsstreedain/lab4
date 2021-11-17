//
//  circle.cpp
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#include "circle.h"

Circle::Circle() : Shape("Circle")  {
	radius = 0;
}

Circle::Circle(float radius) : Shape("Circle")  {
	this -> radius = radius;
}

float Circle::area() {
	return M_PI * (radius * radius);
}

float Circle::getRadius() {
	return radius;
}

void Circle::setRadius(float radius) {
	this -> radius = radius;
}

void Circle::print() {
	std::cout << "\nName: " << getName() << "\nColor: " << getColor() << "\nRadius: " << radius << std::endl;
}
