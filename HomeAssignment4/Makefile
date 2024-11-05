CXX = g++
CXXFLAGS = -g -Wall -Werror -Wpedantic 
TARGET = runTests
SOURCES = test-transfomers.cpp Autobot.cpp Decepticon.cpp Predacon.cpp transformer.cpp 
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^ -lgtest -lgtest_main -lpthread

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

format:
	astyle -A1 -s4 *.cpp *.hpp
 
