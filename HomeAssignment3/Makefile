all: runTests

runTests: test-transformers.o transformer.o Weapon.o Autobot.o Decepticon.o Predatorcon.o 
	g++ test-transformers.cpp transformer.cpp Weapon.cpp Autobot.cpp Decepticon.cpp Predatorcon.cpp -lgtest -lpthread  -o runTests

test-transformers.o: test-transformers.cpp
	g++ -c test-transformers.cpp
transformer.o:  transformer.cpp
	g++ -c transformer.cpp
Weapon.o: Weapon.cpp
	g++ -c Weapon.cpp
Autobot.o: Autobot.cpp
	g++ -c Autobot.cpp
Decepticon.o: Decepticon.cpp
	g++ -c Decepticon.cpp
Predatorcon.o : Predatorcon.cpp
	g++ -c Predatorcon.cpp

clean:
	rm -rf *.o runTests
