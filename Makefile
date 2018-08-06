COMPILATEUR=gcc
EXEC=main
FILES= main.c calculate.h difference.c menu_principal.c produit.c quotient.c racine_carre.c somme.c
CFLAGS=-lm

executer: compiler
	./$(EXEC)

compiler: $(FILES)
	$(COMPILATEUR) $(FILES) -o $(EXEC) $(CFLAGS)