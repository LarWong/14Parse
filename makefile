all: driver.o parse.o
	gcc -o driver driver.o parse.o
driver.o: driver.c parse.h 
	gcc -o driver.c parse.h
parse.o: parse.c parse.h
	gcc -o parse.c parse.h
run:
	./driver
clean:
	rm -f diver *.o *.gch *~
