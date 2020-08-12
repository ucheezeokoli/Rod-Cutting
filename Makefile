CC = g++

all:
	$(CC) -std=c++11 -o a.exe RodCut.cpp

clean:
	rm -f a.exe

