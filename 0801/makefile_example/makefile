add:main.o print.o add.o
	gcc main.o print.o add.o -o add

main.o:main.c  common.h
	gcc -c main.c -o main.o

print.o:print.c
	gcc -c print.c -o print.o

add.o:add.c
	gcc -c add.c -o add.o

clean:
	-rm -f  *.o app


.PHONY:clean

