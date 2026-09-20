CXX=clang++
CXXFLAGS=-std=c++20 -Wall -Wextra -g
TARGET=main

SRCS=$(wildcard *.cpp)
OBJS=$(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET) $(OBJS)

.PHONY: run clean