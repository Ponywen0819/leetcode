CXX = clang++
CXXFLAGS = -std=c++20 -Wall -Wextra -g
TARGET = main

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $(TARGET) main.cpp

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
