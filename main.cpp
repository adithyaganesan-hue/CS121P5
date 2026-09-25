#include <iostream>
#include <cstdlib>
#include <ctime>
#include "horse.h"

void testHorse();

int main(){
	srand(time(NULL));
	std::cout << "Race Game" << std::endl;
	testHorse();
	
	return 0;
}

void testHorse(){
	Horse h;
	h.printLane();
}
