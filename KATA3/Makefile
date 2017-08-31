all:
	 gcc -c KATA3.c
	 gcc -c main.c
	 gcc -o main KATA3.o main.o

test_KATA3: clean
	 gcc -c KATA3.c
	 gcc -c test_KATA3.c
	 gcc -o test_KATA3.exe KATA3.o test_KATA3.o
	 ./test_KATA3.exe

test:	 test_KATA3

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c KATA3.c
	 gcc -c main.c
	 gcc -o main.exe KATA3.o main.o
	 ./main
