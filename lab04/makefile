# Tuan Huynh

CC=-gcc
CFLAGS=-Wall -std=c11

checkFilename: checkFilename.o
	$(CC) $(CFLAGS) $^ -o $@ -lc

checkformat: checkformat.o
	$(CC) $(CFLAGS) $^ -o $@ -lc

contains: contains.o
	$(CC) $(CFLAGS) $^ -o $@ -lc

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean, package

clean:
	rm -i *.o checkFilename checkformat contains

package:
	tar -czvf cmpt201_lab04_TH.tar.gz checkFilename.c checkformat.c contains.c makefile