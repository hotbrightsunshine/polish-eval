CC=gcc
CFLAGS=-Wall -L. -lpolish

lib:
	$(CC) $(CFLAGS) -c stack.c eval.c
	ar -rc libpolish.a stack.o eval.o
	ranlib libpolish.a

debug: clean lib
	$(CC) $(CFLAGS) -g -o polish-eval main.c

stable: clean lib
	$(CC) $(CFLAGS) -o polish-eval main.c

clean:
	rm -vfr *~ polish-eval
