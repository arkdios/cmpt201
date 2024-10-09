# Tuan Huynh

CC=-gcc
CFLAGS=-Wall -std=c11

checkFilename: checkFilename.c
	$(CC) $(CFLAGS) $^ -o $@ -lc

checkformat: checkformat.c
	$(CC) $(CFLAGS) $^ -o $@ -lc

contains: contains.c
	$(CC) $(CFLAGS) $^ -o $@ -lc

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean, package

clean:
	rm -i *.o checkFilename checkformat contains

package: