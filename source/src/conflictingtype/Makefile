GCC= gcc
CLANG= clang

GCC_CFLAGS=-c -Wall -Wextra -std=c99
CLANG_CFLAGS=-c -Weverything -fcaret-diagnostics -fdiagnostics-fixit-info -std=c99

SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)

all: $(SRC:.c=.gcc) $(SRC:.c=.clang)

# - indicates that make must ignore stderr
$(SRC:.c=.gcc):	$(SRC)
	-$(GCC) $(GCC_CFLAGS) $(SRC) -o /dev/null 2> $(SRC:.c=.gcc)

$(SRC:.c=.clang):  $(SRC)
	-$(CLANG) $(CLANG_CFLAGS) $(SRC) -o /dev/null 2> $(SRC:.c=.clang)

