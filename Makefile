SOURCES=$(wildcard *.cpp)

EXECS=$(SOURCES:%.cpp=%)

all: $(EXECS)

run: $(EXECS)
	./$(EXECS)

%.o: %.cpp
	g++ $< -o $@

clean:
	rm $(EXECS)
