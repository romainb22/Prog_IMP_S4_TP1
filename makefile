all: triangle ackermann types calculatrice

triangle: triangle.c
	@echo "Compilation du fichier triangle.c..."
	gcc -Wall triangle.c -o triangle

ackermann: ackermann.c
	@echo "Compilation du fichier ackermann.c..."
	gcc -Wall ackermann.c -o ackermann

types: types.c
	@echo "Compilation du fichier types.c..."
	gcc -Wall types.c -o types

calculatrice: Calculatrice/*.c
	@echo "Compilation de la calculatrice..."
	gcc -Wall Calculatrice/*.c -o calculer -lm

p:
	@echo "Recherche de nouveaux fichiers sur le dépot git..."
	git pull

clean:
	@echo "Nettoyage..."
	rm -rf triangle types ackermann calculer
