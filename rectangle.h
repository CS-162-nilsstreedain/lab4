//
//  rectangle.h
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#ifndef rectangle_h
#define rectangle_h

#include <iostream>
#include "shape.h"

class Rectangle : public Shape {
private:
	float width;
	float height;
public:
	Rectangle();
	Rectangle(float, float);
	Rectangle(std::string, float, float);
	
	float area();
	float getWidth();
	float getHeight();
	
	void setWidth(float);
	void setHeight(float);
	
	void print();
};

#endif /* rectangle_h */
