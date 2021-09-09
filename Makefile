CC=nvcc
CDEFINES=
SOURCES=cpcg.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=cpcg
INCLUDE=./cuda-samples/Common

all:
	$(CC) $(SOURCES) -I$(INCLUDE) -o $(EXECUTABLE)

