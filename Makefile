CC=g++
CFLAGS=-std=c++11 -g -O2
target: $(FILE) lib.cpp
	$(CC) -o a.out $(FILE) lib.cpp $(CFLAGS)
