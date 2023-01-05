#==========================================
#    Makefile: makefile for rrc command
#	Copyright 2023
#                 Hiroyuki Kikuchi (hjfk07@gmail.com)
#	Last Modified: 2023/01/05
#==========================================

CC=gcc
CFLAGS=-O -Wall

all: rrc

rrc: rrc.c
	$(CC) $(CFLAGS) -o rrc rrc.c

clean:
	rm -f rrc

distclean: clean