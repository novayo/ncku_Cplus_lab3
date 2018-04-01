main.out:main.o Clock.o
	g++ main.o Clock.o -o main.out
main.o:main.cpp
	g++ -c main.cpp
Clock.o:Clock.cpp
	g++ -c Clock.cpp
clean:
	rm *.o main.out
