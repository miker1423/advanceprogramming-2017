all:
	 gcc -c Robot.c
	 gcc -c main.c
	 gcc -o main Robot.o main.o

test_Robot: clean
	 gcc -c Robot.c
	 gcc -c test_Robot.c
	 gcc -o test_Robot.exe Robot.o test_Robot.o
	 ./test_Robot.exe

test:	 test_Robot

clean:
	 rm *.out *.o *.exe || exit 0

run:
	 gcc -c Robot.c
	 gcc -c main.c
	 gcc -o main.exe Robot.o main.o
	 ./main
