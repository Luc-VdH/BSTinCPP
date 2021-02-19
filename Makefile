default:
	g++ -c BST.cpp
	g++ -c main.cpp
	g++ -o run BST.o main.o
	./run