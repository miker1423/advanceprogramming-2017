CC=gcc
DEPS=two-sum.h
CFLAGS=-I.
OBJ=two-sum.o two-sum-main.o

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

two-sum.exe: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm *.o *.exe