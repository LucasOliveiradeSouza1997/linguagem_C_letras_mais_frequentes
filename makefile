projetoLG: main.o frequencia.o
	gcc -o projetoLG main.o frequencia.o 
main.o:	main.c frequencia.h
	gcc -c main.c
frequencia.o:  frequencia.c frequencia.h
	gcc -c frequencia.c