//
//  shape.h
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#ifndef shape_h
#define shape_h

#include <iostream>

class Shape {
private:
	std::string name;
	std::string color;
public:
	Shape();
	Shape(std::string);
	Shape(std::string, std::string);
	
	float area();
	std::string getName();
	std::string getColor();
	
	void setName(std::string);
	void setColor(std::string);
	
	void print();
};

#endif /* shape_h */
