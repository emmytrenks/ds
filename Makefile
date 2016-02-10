COMPILER=g++
FLAGS=-std=c++11

EXEC=project-1.out

all:
	make $(EXEC)

project-1.out: proj-1.cpp
	$(COMPILER) $(FLAGS) -o $@ $^

clean:
	rm -f $(EXECS)
