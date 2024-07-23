CC=gcc
CFLAGS="-Wall"

debug:clean
	$(CC) $(CFLAGS) -g -o polish-eval main.c
stable:clean
	$(CC) $(CFLAGS) -o polish-eval main.c
clean:
	rm -vfr *~ polish-eval
