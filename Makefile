all: y.tab.c
	g++ y.tab.c main.cpp -o compilador

y.tab.c: gramatica.y
	bison -dy gramatica.y

test: all
	./compilador test/test_gramatica_validos.txt
	./compilador test/test_gramatica_errores.txt
	./compilador test/test_negativos.txt
	./compilador test/test_lexico_completo.txt
	./compilador test/test_lexico_eof_comentario.txt
	./compilador test/test_lexico_eofcadena.txt

clean:
	rm -f compilador y.tab.c y.tab.h
