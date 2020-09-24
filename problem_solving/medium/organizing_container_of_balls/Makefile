CC:=g++

.PHONY: clean

all: solution

solution: main.cpp
	$(CC) -o $@ $<

clean:
	rm -rf solution

test: solution
	./solution 2 1 4 2 3
	./solution 2 0 2 1 1
	./solution 3 1 3 1 2 1 2 3 3 3
	./solution 3 0 2 1 1 1 1 2 0 0 