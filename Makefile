all: Number_Demonstrations

Number_Demonstrations: Number_Demonstrations.c
	gcc -std=c99 -Wall -o Number_Demonstrations Number_Demonstrations.c

run:
	./Number_Demonstrations

clean:
	rm -f Number_Demonstrations