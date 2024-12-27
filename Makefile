compile:
	gcc -o prog *.c -lm && clear && echo "Executable mis à jour avec succès"

run:
	clear && ./prog

clean:
	rm -f prog && clear && echo "Executable supprimé avec succès"
