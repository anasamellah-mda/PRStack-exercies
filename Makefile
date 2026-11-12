CC = gcc
CFLAGS = -Wall -Wextra -Werror -Isrc

SRC_DIR = src
TEST_DIR = tests

SRCS = $(wildcard $(SRC_DIR)/*.c)
HEADERS = $(wildcard $(SRC_DIR)/*.h)

TEST_SRCS = $(TEST_DIR)/test_runner.c $(filter-out $(SRC_DIR)/main.c, $(SRCS))
TEST_HEADERS = $(wildcard $(TEST_DIR)/*.h)

TARGET = app
TEST_TARGET = test_runner

.PHONY: all test clean re

all: $(TARGET)

$(TARGET): $(SRCS) $(HEADERS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

$(TEST_TARGET): $(TEST_SRCS) $(HEADERS) $(TEST_HEADERS)
	$(CC) $(CFLAGS) $(TEST_SRCS) -o $(TEST_TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET) *.o $(SRC_DIR)/*.o $(TEST_DIR)/*.o

re: clean all
