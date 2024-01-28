all: Number_Demonstrations

simple_c_program: simple_c_program.c
	gcc -std=c99 -Wall -o Number_Demonstrations Number_Demonstrations.c

run:
	./Number_Demonstrations

clean:
	rm -f Number_Demonstrations