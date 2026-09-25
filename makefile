horseRace: main.o horse.o
	g++ -g main.o horse.o -o horseRace

main.o: main.cpp horse.h
	g++ -g -c main.cpp

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

run: horseRace 
	./horseRace
clean: 
	rm horseRace
	rm *o

debug: horseRace
	gdb horseRace

