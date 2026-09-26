#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"
#include "race.h"

void testHorse();

int main(){
	std::cout << "Race Game" << std::endl;

	Race r;
	r.start();
	
	return 0;
}

void testHorse(){
	Horse h;
	h.printLane();
}
