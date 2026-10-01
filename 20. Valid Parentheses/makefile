CXX = clang++
CXXFLAGS = -std=c++14 -Wall -Wextra  -g
TARGET = main

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
run: $(TARGET)
	./$(TARGET)

.PHONY: clean run
