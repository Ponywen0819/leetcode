CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Wextra -g
TARGET = main

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

$(TARGET):$(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)


%.o:%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run:$(TARGET)
	./$(TARGET)

clean:
	rm -rf $(OBJS) $(TARGET)

.PHONY: run clean