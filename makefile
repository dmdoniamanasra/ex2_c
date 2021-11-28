CC = gcc
AR = ar
FLAGS =	-Wall	-g
OBJECTS_MAIN = main.o
OBJECTS_LIB = my_mat.o

all:	connections

connections:	$(OBJECTS_MAIN)	my_mat.a
			$(CC)	$(FLAGS)	-o	connections	$(OBJECTS_MAIN)	my_mat.a

main.o:	main.c	my_mat.h
		$(CC)	$(FLAGS)	-c	main.c
my_mat.o:	my_mat.c	my_mat.h
		$(CC)	$(FLAGS)	-c	my_mat.c
my_mat.a:	$(OBJECTS_LIB)
		$(AR)	-rcs	my_mat.a	$(OBJECTS_LIB)

.PHONY=clean all

clean:
		rm	-f	*.o	*.a	connections