//
//  square.h
//  Lab 4
//
//  Created by Nils Streedain on 10/17/21.
//

#ifndef square_h
#define square_h

#include <iostream>
#include "rectangle.h"

class Square : public Rectangle {
public:
	Square();
	Square(float);
	
	float area();
	float getLength();
	
	void setLength(float);
	
	void print();
};

#endif /* square_h */
