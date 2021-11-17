//
//  square.cpp
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#include "square.h"

Square::Square() : Rectangle("Square", 0, 0) {}

Square::Square(float length) : Rectangle("Square", length, length) {}

float Square::area() {
	return Rectangle::area();
}

float Square::getLength() {
	return Rectangle::getWidth();
}

void Square::setLength(float length) {
	Rectangle::setWidth(length);
	Rectangle::setHeight(length);
}

void Square::print() {
	std::cout << "\nName: " << getName() << "\nColor: " << getColor() << "\nLength: " << getLength() << "\nArea: " << area() << std::endl;
}
