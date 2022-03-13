# Implementing Inheritance

For this lab we will be working with shapes. We'll create several classes to represent different shapes using inheritance, and then overload some operators for them.

## (5 pt) Implementing the Shape class
The first class we'll write is one to represent a generic shape with a name and a color.

Create two new files, shape.h and shape.cpp, and in them define a Shape class. Here's the start of the class definition you should use:

```
class Shape {
   private:
      string name;
      string color;
   public:
      float area();
      ...
};
```

Your class should also have constructors, accessors, and mutators as appropriate. In addition, your class should have an area() member function for computing the shape's area. For this generic Shape class, the area() member function can simply return 0, since we aren't actually defining the shape itself.

## (1 pt) Testing the Shape class
In addition to your files shape.h and shape.cpp, create a new file called application.cpp. In this file, write a simple main() function that instantiates some Shape objects and prints out their information. Write a Makefile to specify compilation of your program.

## (5 pts) Implementing the Rectangle and Circle classes
Create new files rectangle.h, rectangle.cpp, circle.h, and circle.cpp. Implement a Rectangle class and a Circle class in them. Both of these classes should be derived from your Shape class. The Rectangle class should have a width and a height, and the Circle class should have a radius. Here's the start of the class definitions you should use:

```
class Rectangle : public Shape {
   private:
      float width;
      float height;
   public:
      float area();
      ...
};

class Circle : public Shape {
   private:
      float radius;
   public:
      float area();
      ...
};
```

Both of these class should have constructors, accessors, and mutators as needed, and each one should override the Shape class's area() member function to compute areas appropriate for rectangles and circles.

## (2 pt) Testing the Rectangle and Circle classes
Add some code to your application.cpp file to instantiate and print out some Rectangle and Circle objects, and update your Makefile to include the new source files appropriately.

## (5 pt) Implementing the Square class
Now create new files square.h and square.cpp and implement a Square class that derives from your Rectangle class within them. Your Square class should not contain any new data members, and you cannot change any members of the Rectangle class to protected or public access. Instead, figure out how to implement a public interface for your Square class by appropriately using the width and height of your Rectangle class via its public interface (i.e. via the Rectangle class' constructors, accessors, and mutators).  Specifically, the public interface to your Square class should use the public interface of your Rectangle class while enforcing the constraint that a square's width and height are equal. Here's the start of a class definition you could use:

```
class Square : public Rectangle {
   public:
      ...
};
```

## (2 pt) Testing the Square class
Once your Square class is written, add some lines to your application.cpp to instantiate and print out some Square objects, and update your Makefile to include the new source file appropriately.
