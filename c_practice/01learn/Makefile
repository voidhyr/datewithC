CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11 -g

SRC = src/main.c
TARGET = bin/main

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

debug: $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)
	gdb ./$(TARGET)

val: $(TARGET)
	valgrind --leak-check=full --track-origins=yes ./$(TARGET)

asan: $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) -fsanitize=address,undefined $(SRC) -o bin/main-asan
	./bin/main-asan

clean:
	rm -f bin/main bin/main-asan

.PHONY: all run debug val asan clean
