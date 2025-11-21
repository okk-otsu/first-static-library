CC = gcc
CFLAGS = -Wall -Wextra -Werror -Iinclude

SRC = src/mutils_string.c src/mutils_array.c src/mutils_complex.c
OBJ = $(SRC:.c=.o)

LIB = libmutils.a

all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $(LIB) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(LIB)

.PHONY: all clean
