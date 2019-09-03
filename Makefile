CC     = gcc

list: list_func.o list_main.o
	$(CC) $^

list_func.o: list_func.c list.h
	$(CC) -c $<

list_main.o: list_main.c list.h
	$(CC) -c $<

clean: 
	rm *.o a.out
