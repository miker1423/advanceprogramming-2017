LIB := $(shell find ./lib -name '*.o')
all:
	 gcc -c chat-server.c
	 gcc -c main.c
	 gcc -o chat-server.exe chat-server.o main.o $(LIB)

test_chat-server: clean
	 gcc -c chat-server.c
	 gcc -c test_chat-server.c
	 gcc -o test_chat-server.exe chat-server.o test_chat-server.o
	 ./test_chat-server.exe

test:	 test_chat-server

clean:
	 rm *.out *.o *.exe || exit 0

chat-server: clean
	 gcc -c chat-server.c
	 gcc -c main.c
	 gcc -o chat-server.exe chat-server.o main.o $(LIB)

run: chat-server
	 ./chat-server.exe

runtest: chat-server
	 ./integrationtest.tcl ./chat-server.exe

