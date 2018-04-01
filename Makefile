lab3.out:dataIn.o main.o
	g++ dataIn.o main.o -o lab3.out
main.o:main.cpp
	g++ -c main.cpp
dataIn.o:dataIn.cpp
	g++ -c dataIn.cpp
clean:
	rm lab3.out *.o
