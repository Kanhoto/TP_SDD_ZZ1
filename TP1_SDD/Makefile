CC=gcc
DEBUG=yes

ifeq ($(DEBUG),yes)
	CFLAGS= -Wall -g -Wextra
else
	CFLAGS= -Wall -Wextra
endif

EXEC=TP1
SRC=main.c matrice.c liste.c
OBJ=$(SRC:.c=.o)

all: $(EXEC)

$(EXEC) : $(OBJ)
		$(CC) -o $@ $^

%.0: %.c
	$(CC) -c $< $(CFLAGS)

.PHONY: clean mrproper

clean:
	@rm -rf *.o

mrproper: clean
	@rm -rf $(EXEC)