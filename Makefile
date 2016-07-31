CC=g++
BIN=timer
SOURCES=Timer.cpp main.cpp
all:
	$(CC) --std=c++0x -o $(BIN) $(SOURCES)

clean:
	rm $(BIN)
