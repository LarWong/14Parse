all: parse_arg.o
	gcc -o driver parse_arg.o
parse_arg.o: parse_arg.c
	gcc -c parse_arg.c
run:
	./driver
clean:
	rm -f driver *.o *~ *gch
