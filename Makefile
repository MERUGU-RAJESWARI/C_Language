CC=gcc
CFLAGS=-Wall -Wextra -Werror --coverage -I src
SRC=src/main.c src/functions.c
TESTS=tests/test_functions.c
OUT=test

all: $(OUT)

$(OUT): $(SRC) $(TESTS)
	$(CC) $(CFLAGS) -o $(OUT) $(SRC) $(TESTS)

clean:
	rm -f $(OUT) *.gcda *.gcno *.gcov
