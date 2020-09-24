CC:=g++

.PHONY: clean

all: solution

solution: main.cpp
	$(CC) -o $@ $<

clean:
	rm -rf solution

test: solution
	./solution 1
	./solution 6
	./solution 9
	./solution 15