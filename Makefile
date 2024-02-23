##############################################################################
# Makefile for Lab 7
# CMP_SC 1050
# SP 2024
# By Jim Ries (RiesJ@missouri.edu)
##############################################################################
CC = gcc
CFLAGS = -Wall -Werror -c -g -std=c11 -I.
LDFLAGS = -lm -lcs1050dnd -L.
#LDFLAGS = -lm -L.

%.o : %.c 
	@echo Compiling $^ ...
	@$(CC) $(CFLAGS) $^

default: a.out

all: lib a.out

regular: clean a.out

honors: CFLAGS += -DHONORS
honors: clean a.out

lib: libcs1050dnd.a

everything: lib regular

a.out : main.o dnd.o
	@echo Linking $@ ...
	@$(CC) $^ $(LDFLAGS) -o $@
	@echo Done!

libcs1050dnd.a : cs1050dnd.o
	@echo Building library $@
	@ar -crs libcs1050dnd.a cs1050dnd.o

clean : 
	@rm -rf *.o
	@rm -rf a.out
	@echo All Clean!

cleanall: clean cleanlib

cleanlib :
	@rm -rf *.a
