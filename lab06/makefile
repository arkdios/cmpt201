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
# date: day, October th, 2024
#-------------------------------------------------------------------------------

CC=-gcc
CFLAGS=-Wall -std=c11

stats: stats.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

sec: sec.o
	$(CC) $(CFLAGS) $^ -o $@ -lm

data: data.o
	$(CC) $(CFLAGS) $^ -o $@ -lm


%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean, package

clean:
	rm -i *.o sec stats data

package:
	tar -czvf cmpt201_lab06_TH.tar.gz output.txt sec.c stats.c data.c q4Input1.txt q4Input2.txt q4Input3.txt makefile