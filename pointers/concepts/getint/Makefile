CC      = gcc
CCFLAGS = -lm 

SOURCE  = getint.c
OBJS    = main.o module.o
TGT     = getint 

all: $(OBJS)
	$(CC) -o $(TGT) $(OBJS) $(CCFLAGS)

main.o: main.c module.h
	$(CC) -std=c99 -g -c $<

module.o: module.c module.h
	$(CC) -std=c99 -g -c $<

clean:
	rm -rf *.o $(TGT)
