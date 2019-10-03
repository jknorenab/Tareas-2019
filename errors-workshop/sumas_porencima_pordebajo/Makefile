#Como se repiten tanto los .o, podemos guardarlos en una especie de variable llamada objetos, como sigue

OBJ=sumup.o sumdown.o

all: $(OBJ) main-armsum.x datos.txt fig.pdf

%.o : %.cpp
	g++ -c $< -o $@


%.x : %.cpp
	g++ $^ -o $@


main-armsum.x: main-armsum.cpp $(OBJ)

datos.txt : main-armsum.x
	./main-armsum.x > $@

fig.pdf : plot.gp datos.txt
	gnuplot $< 

.PHONY: clean
clean :
	rm -f *.o *.x datos.txt a.out fig.pdf
