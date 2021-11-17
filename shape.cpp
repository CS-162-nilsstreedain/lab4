//
//  shape.cpp
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#include "shape.h"

Shape::Shape() {
	name = "";
	color = "";
}

Shape::Shape(std::string name) {
	this -> name = name;
	color = "";
}

Shape::Shape(std::string name, std::string color) {
	this -> name = name;
	this -> color = color;
}

float Shape::area() {
	return 0;
}

std::string Shape::getName() {
	return name;
}

std::string Shape::getColor() {
	return color;
}

void Shape::setName(std::string name) {
	this -> name = name;
}

void Shape::setColor(std::string color) {
	this -> color = color;
}

void Shape::print() {
	std::cout << "\nName: " << name << "\nColor: " << color << "\nArea: " << area() << std::endl;
}
