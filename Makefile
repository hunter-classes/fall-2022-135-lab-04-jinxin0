CXX = g++
CXXFLAGS = -Wall

main: main.o shapes.o
	$(CXX) -o main main.o shapes.o $(CXXFLAGS)

main.o: main.cpp shapes.h
	$(CXX) -c main.cpp $(CXXFLAGS)

shapes.o: shapes.cpp shapes.h
	$(CXX) -c shapes.cpp $(CXXFLAGS)

clean:
	rm -f *.o


