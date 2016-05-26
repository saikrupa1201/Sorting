CC = g++
CFLAGS = -g -Wall -Iinclude
TARGET = sort
OBJS = BubbleSort.o InsertionSort.o SortingAlgo.o SelectionSort.o
SRCS = src/BubbleSort.cpp src/InsertionSort.cpp src/SortingAlgo.cpp src/SelectionSort.cpp
OBJS = $(SRCS:.cpp=.o) 
all: sort
   

sort: $(OBJS)
		$(CC) $(CFLAGS) -o $@ $(OBJS)
		
		
%.o : %.cpp
	    $(CC) $(CFLAGS) -o $@ -c $<
		
		
#BubbleSort.o : src/BubbleSort.cpp include/BubbleSort.h include/ISort.h
#		$(CC) $(CFLAGS) -c src/BubbleSort.cpp
#
#InsertionSort.o: src/InsertionSort.cpp include/InsertionSort.h include/ISort.h
#		$(CC) $(CFLAGS) -c src/InsertionSort.cpp
#
#SortingAlgo.o: src/SortingAlgo.cpp include/ISort.h include/BubbleSort.h
#	    $(CC) $(CFLAGS) -c src/SortingAlgo.cpp

clean:
	@echo $(OBJS)
	rm -f $(OBJS) sort
