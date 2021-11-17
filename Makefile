# Lab 4 Makefile
CC = g++
exe_file = application
$(exe_file): square.o circle.o rectangle.o shape.o application.o
	$(CC) -std=c++11 square.o circle.o rectangle.o shape.o application.o -o $(exe_file)
square.o: square.cpp
	$(CC) -std=c++11 -c square.cpp
circle.o: circle.cpp
	$(CC) -std=c++11 -c circle.cpp
rectangle.o: rectangle.cpp
	$(CC) -std=c++11 -c rectangle.cpp
shape.o: shape.cpp
	$(CC) -std=c++11 -c shape.cpp
application.o: application.cpp
	$(CC) -std=c++11 -c application.cpp

clean:
	rm -f *.out *.o $(exe_file)

