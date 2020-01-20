SOURCES=$(wildcard *.cpp)

EXECS=$(SOURCES:%.cpp=%)

all: $(EXECS)

%.o: %.cpp
	g++ $< -o $@

clean:
	rm $(EXECS)
