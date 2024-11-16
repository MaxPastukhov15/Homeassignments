CXX = g++
CXXFLAGS = -g -Wall -Werror -Wpedantic 
TARGET = run
SOURCES = Autobot.cpp Decepticon.cpp Weapon.cpp transformer.cpp  test.cpp
OBJECTS = $(SOURCES:.cpp=.o)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

format:
	astyle -A1 -s4 *.cpp *.hpp
 
