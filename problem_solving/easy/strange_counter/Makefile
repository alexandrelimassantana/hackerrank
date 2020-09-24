CC:=g++

.PHONY: clean

all: strange_counter

strange_counter: main.cpp
	$(CC) -o $@ $<

clean:
	rm -rf strange_counter *.txt

test: strange_counter
	./strange_counter 1
	./strange_counter 6
	./strange_counter 9
	./strange_counter 15