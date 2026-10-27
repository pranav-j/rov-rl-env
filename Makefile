CC      := cc
CFLAGS  := -std=c99 -Wall -Wextra -O2 $(shell pkg-config --cflags raylib)
LDLIBS  := $(shell pkg-config --libs raylib)

TARGET  := build/rov-rl-env
SRC     := $(wildcard src/*.c)

all: $(TARGET)

$(TARGET): $(SRC)
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf build

.PHONY: all run clean
