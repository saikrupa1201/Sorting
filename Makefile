CC = g++
CFLAGS = -g -Wall
TARGET = sort
OBJS = BubbleSort.o InsertionSort.o SortingAlgo.o

   
all: sort
   
sort: $(OBJS)
		$(CC) $(CFLAGS) -o sort $(OBJS)
		
BubbleSort.o : src/BubbleSort.cpp include/BubbleSort.h include/ISort.h
		$(CC) $(CFLAGS) -c src/BubbleSort.cpp

InsertionSort.o: src/InsertionSort.cpp include/InsertionSort.h include/ISort.h
		$(CC) $(CFLAGS) -c src/InsertionSort.cpp

SortingAlgo.o: src/SortingAlgo.cpp include/ISort.h include/BubbleSort.h
	    $(CC) $(CFLAGS) -c src/SortingAlgo.cpp

clean: 
		rm sort $(OBJS)