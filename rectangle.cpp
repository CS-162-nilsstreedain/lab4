//
//  rectangle.cpp
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#include "rectangle.h"

Rectangle::Rectangle() : Shape("Rectangle") {
	width = 0;
	height = 0;
}

Rectangle::Rectangle(float width, float height) : Shape("Rectangle") {
	this -> width = width;
	this -> height = height;
}

Rectangle::Rectangle(std::string name, float width, float height) : Shape(name) {
	this -> width = width;
	this -> height = height;
}

float Rectangle::area() {
	return width * height;
}

float Rectangle::getWidth() {
	return width;
}

float Rectangle::getHeight() {
	return height;
}

void Rectangle::setWidth(float width) {
	this -> width = width;
}

void Rectangle::setHeight(float height) {
	this -> height = height;
}

void Rectangle::print() {
	std::cout << "\nName: " << getName() << "\nColor: " << getColor() << "\nWidth: " << width << "\nHeight: " << height << "\nArea: " << area() << std::endl;
}
