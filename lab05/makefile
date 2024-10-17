# ------------------------------------------------------------------------------
# Integrity pledge: I declare this is my code
# ------------------------------------------------------------------------------
# Student name: Tuan Huynh
# Program name: makefile
# ------------------------------------------------------------------------------
# author: Tuan Huynh
# student ID: 3133630
# class: CMPT 201 Section X03L
# term: Fall 2024
# date: Wednesday, October 16th, 2024
#-------------------------------------------------------------------------------

CC=-gcc
CFLAGS=-Wall -std=c11

base2dec: base2dec.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

lawn: lawn.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

randomSentence: randomSentence.o
	$(CC) $(CFLAGS) $^ -o $@ -lc

strlength: strlength.o
	$(CC) $(CFLAGS) $^ -o $@ -lc	

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean, package

clean:
	rm -i *.o base2dec lawn randomSentence strlength

package:
	tar -czvf cmpt201_lab05_TH.tar.gz base2dec.c lawn.c randomSentence.c strlength.c articles.txt adjectives.txt noun.txt verb.txt adverb.txt makefile