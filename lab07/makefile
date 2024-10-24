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

%.o: %.c
	$(CC) $(CFLAGS) -c $<

test: test_pointerFun.c pointerFun.c
	$(CC) $(CFLAGS) $^ -o $@ -lm

.PHONY: clean, package

clean:
	rm -i *.o polynomial

package:
	tar -czvf cmpt201_lab06_TH.tar.gz