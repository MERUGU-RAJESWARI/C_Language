CC = gcc
CFLAGS = -Wall -Wextra -Werror --coverage
LDFLAGS = --coverage
SRC = src/main.c src/functions.c
TEST_SRC = tests/test_functions.c
OBJ = $(SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

all: main

main: $(SRC)
	$(CC) $(CFLAGS) -o main $(SRC) $(LDFLAGS)

test: $(TEST_SRC) $(SRC)
	$(CC) $(CFLAGS) -o test $(TEST_SRC) $(SRC) $(LDFLAGS)

coverage: test
	./test
	gcov -b src/*.c > coverage.txt || true

clean:
	rm -f main test *.gcda *.gcno *.gcov
