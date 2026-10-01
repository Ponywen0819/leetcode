#!/bin/bash
# 用法: ./new.sh "20. Valid Parentheses"
set -e
[ -z "$1" ] && { echo "請輸入題目名稱"; exit 1; }
cd "$(dirname "$0")"
[ -e "$1" ] && { echo "資料夾已存在: $1"; exit 1; }
mkdir "$1" && cd "$1"

cat > main.cpp <<'EOF'
#include<iostream>
#include<vector>
#include"solution.h"

using namespace std;

int main(){
    Solution s;

    return 0;
}
EOF

cat > solution.h <<'EOF'
#include<vector>

using namespace std;

class Solution{
    public:

};
EOF

cat > solution.cpp <<'EOF'
#include"solution.h"
#include<iostream>

using namespace std;

EOF

cat > makefile <<'EOF'
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
EOF

CODE="/Applications/Visual Studio Code.app/Contents/Resources/app/bin/code"
[ -x "$CODE" ] && "$CODE" -r solution.h solution.cpp main.cpp
echo "已建立: $1"
