//
//  application.cpp
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#include <iostream>
//#include "shape.h"
//#include "rectangle.h"
#include "circle.h"
#include "square.h"

int main(int argc, const char * argv[]) {
	Shape shape("Name", "Color");
	shape.print();
	
	Rectangle rectangle(5, 5);
	rectangle.print();
	
	Circle circle(5);
	circle.print();
	
	Square square(5);
	square.print();
	
	return 0;
}
