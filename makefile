horseRace: main.o horse.o race.o
	g++ -g main.o horse.o race.o -o horseRace

main.o: main.cpp horse.h race.h
	g++ -g -c main.cpp

horse.o: horse.cpp horse.h
	g++ -g -c horse.cpp

race.o: race.cpp race.h horse.h

run: horseRace 
	./horseRace
clean: 
	rm horseRace
	rm *o

debug: horseRace
	gdb horseRace

