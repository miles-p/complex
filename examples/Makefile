# Makefile for compiling complex number operations

# Compiler
CC = cc

# Compiler flags
CFLAGS = -Wall -Wextra -I../..

# Linker flags
LDFLAGS = -lm

# Source files
SRCS = ../../complex/complex.c complex_operations.c

# Object files
OBJS = $(SRCS:.c=.o)

# Executable name
EXEC = complex_operations

# Default target
all: $(EXEC)

# Link the executable
$(EXEC): $(OBJS)
    $(CC) $(OBJS) -o $@ $(LDFLAGS)

# Compile source files into object files
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean up build files
clean:
    rm -f $(OBJS) $(EXEC)

# Phony targets
.PHONY: all clean