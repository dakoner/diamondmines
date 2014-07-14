CXXFLAGS=-std=c++11 -g -I/usr/include/qt4
LOADLIBES=-lQtCore -lQtGui
SOURCES=main.cpp
OBJECTS = $(SOURCES:.cpp=.o)
all: diamondmines

include .depend

diamondmines: $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LOADLIBES)

.depend: $(SOURCES)
	rm -f .depend
	$(CC) $(CPPFLAGS) -M -MM $(SOURCES) > .depend ; \

clean:
	rm -f *.o diamondmines *~