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

stats: stats.c
	$(CC) $(CFLAGS) $^ -o $@ -lm

sec: sec.c
	$(CC) $(CFLAGS) $^ -o $@ -lm
data: data.c
	$(CC) $(CFLAGS) $^ -o $@ -lm


%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean, package

clean:
	rm -i *.o sec stats

package:
	tar -czvf cmpt201_lab06_TH.tar.gz sec.c stats.c makefile