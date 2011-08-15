sort:main.o sort.o 
	gcc  main.o sort.o  -o sort


main.o:main.c 
	gcc -c main.c -o main.o
sort.o:sort.c
	gcc -c sort.c -o sort.o

clean:
	-rm *.o sort


.PHONY:clean


