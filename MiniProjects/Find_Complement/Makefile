LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c findComplement.c
	 gcc -c main.c
	 gcc -o findComplement.exe findComplement.o main.o $(LIB)

test_findComplement: clean
	 gcc -c findComplement.c
	 gcc -c test_findComplement.c
	 gcc -o test_findComplement.exe findComplement.o test_findComplement.o
	 ./test_findComplement.exe

test:	 test_findComplement

clean:
	 rm *.out *.o *.exe || exit 0

findComplement: clean
	 gcc -c findComplement.c
	 gcc -c main.c
	 gcc -o findComplement.exe findComplement.o main.o $(LIB)

run: findComplement
	 ./findComplement.exe

runtest: findComplement
	 ./integrationtest.tcl ./findComplement.exe

