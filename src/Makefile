#used for convenience to create object files
OBJS =tokenizer.o uimain.o


##used as a parameter for cc compiler
##-g for debug, -O3 for optimization
CFLAGS =-g -O3

all: token


token: $(OBJS)
	cc -o token $(CFLAGS) $(OBJS)

#rm, remove commmand 
clean:
	rm -f *.o *.c~

run: token
	./token
