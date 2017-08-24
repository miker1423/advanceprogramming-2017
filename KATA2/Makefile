all:
	 gcc -c LenghtLastWord.c
	 gcc -c main.c
	 gcc -o main LenghtLastWord.o main.o

test_LenghtLastWord: clean
	 gcc -c LenghtLastWord.c
	 gcc -c test_LenghtLastWord.c
	 gcc -o test_LenghtLastWord.exe LenghtLastWord.o test_LenghtLastWord.o
	 ./test_LenghtLastWord.exe

test:	 test_LenghtLastWord

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c LenghtLastWord.c
	 gcc -c main.c
	 gcc -o main.exe LenghtLastWord.o main.o
	 ./main
