CC=gcc
CFLAGS= -g -Wall -L. -lpolish -lm
lib:
	$(CC) $(CFLAGS) -c stack.c eval.c
	ar rcs libpolish.a stack.o eval.o

debug: clean lib
	$(CC) $(CFLAGS) -g -o polish-eval main.c

stable: clean lib
	$(CC) -g -o polish-eval main.c $(CFLAGS)

clean:
	rm -vfr *~ polish-eval
