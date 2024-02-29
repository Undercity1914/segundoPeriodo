a.exe: main.o Encadeada.o Nodo.o Pessoa.o
	g++ -o a.exe main.o Encadeada.o Nodo.o Pessoa.o
main.o: main.cpp
	g++ -c main.cpp
Encadeada.o: Encadeada.cpp Encadeada.h
	g++ -c Encadeada.cpp
Nodo.o: Nodo.cpp Nodo.h
	g++ -c Nodo.cpp
Pessoa.o: Pessoa.cpp Pessoa.h
	g++ -c Pessoa.cpp
clean:
	rm *.o