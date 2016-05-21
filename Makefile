
SRCS = src/BubbleSort.cpp src/InsertionSort.cpp src/SortingAlgo.cpp
OBJS = ${SRCS:.c=.o}

.cpp.o :
		$(CXX) $(CPPFLAGS) -c $<
   
all: sort.exe
   
sort.exe: $(OBJS)
		$(CXX) -o $@ $(OBJS)
		
$(OBJS) : include/ISort.h include/BubbleSort.h include/InsertionSort.h
#BubbleSort.o : include/BubbleSort.h include/ISort.h
##		g++ -c src/BubbleSort.cpp
#
#SortingAlgo.o: src/SortingAlgo.cpp include/ISort.h include/BubbleSort.h
#	    g++ -c src/SortingAlgo.cpp
#
#InsertionSort.o: src/InsertionSort.cpp include/InsertionSort.h include/ISort.h
#		g++ -c src/InsertionSort.cpp

clean: 
		rm sort.exe $(OBJS)