LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c wordRow.c -std=c99
	 gcc -c main.c -std=c99
	 gcc -o wordRow.exe wordRow.o main.o $(LIB) -std=c99

test_wordRow: clean
	 gcc -c wordRow.c -std=c99
	 gcc -c test_wordRow.c -std=c99
	 gcc -o test_wordRow.exe wordRow.o test_wordRow.o -std=c99
	 ./test_wordRow.exe

test:	 test_wordRow

clean:
	 rm *.out *.o *.exe || exit 0

wordRow: clean
	 gcc -c wordRow.c -std=c99
	 gcc -c main.c -std=c99
	 gcc -o wordRow.exe wordRow.o main.o $(LIB) -std=c99

run: wordRow
	 ./wordRow.exe

runtest: wordRow
	 ./integrationtest.tcl ./wordRow.exe

