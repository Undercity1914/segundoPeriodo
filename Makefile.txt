main.out: main.o Multiplicacao.o Divisao.o Soma.o Subtracao.o Raiz.o Equ_seg_grau.o Distancia.o
	g++ -o main.out Multiplicacao.o Divisao.o Soma.o Subtracao.o Raiz.o Equ_seg_grau.o main.o Distancia.o
main.o: main.cpp
	g++ -c main.cpp
Multiplicacao.o: Multiplicacao.cpp Multiplicacao.h
	g++ -c Multiplicacao.cpp
Divisao.o: Divisao.cpp Divisao.h
	g++ -c Divisao.cpp
Soma.o: Soma.cpp Soma.h
	g++ -c Soma.cpp
Subtracao.o: Subtracao.cpp Subtracao.h
	g++ -c Subtracao.cpp
Raiz.o: Raiz.cpp Raiz.h
	g++ -c Raiz.cpp
Equ_seg_grau.o: Equ_seg_grau.cpp Equ_seg_grau.h
	g++ -c Equ_seg_grau.cpp
Distancia.o: Distancia.cpp Distancia.h
	g++ -c Distancia.cpp

clean:
	rm *.o