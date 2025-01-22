CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=c11
LDFLAGS = -lm
SRCS = $(wildcard *.c)
OBJS = $(patsubst %.c,$(BUILD_DIR)/%.o,$(SRCS))
TARGET = $(BUILD_DIR)/program
BUILD_DIR = build

all: $(BUILD_DIR) $(TARGET)

# Rule for creating the build directory
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# Rule for linking the object files
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^ $(LDFLAGS)

$(BUILD_DIR)/%.o: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(LDFLAGS) -c $< -o $@

# Rule for running the executable file
run: all
	$(TARGET)

# Rule for cleaning the object files and the executable file
clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean run