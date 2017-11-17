LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c FIZZBUZZ.c
	 gcc -c main.c
	 gcc -o FIZZBUZZ.exe FIZZBUZZ.o main.o $(LIB)

test_FIZZBUZZ: clean
	 gcc -c FIZZBUZZ.c
	 gcc -c test_FIZZBUZZ.c
	 gcc -o test_FIZZBUZZ.exe FIZZBUZZ.o test_FIZZBUZZ.o
	 ./test_FIZZBUZZ.exe

test:	 test_FIZZBUZZ

clean:
	 rm *.out *.o *.exe || exit 0

FIZZBUZZ: clean
	 gcc -c FIZZBUZZ.c
	 gcc -c main.c
	 gcc -o FIZZBUZZ.exe FIZZBUZZ.o main.o $(LIB)

run: FIZZBUZZ
	 ./FIZZBUZZ.exe

runtest: FIZZBUZZ
	 ./integrationtest.tcl ./FIZZBUZZ.exe

