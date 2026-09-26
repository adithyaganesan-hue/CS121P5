#include <iostream>
#include <cstdlib>
#include "horse.h"

Horse::Horse(){
	position = 0;
	index = 0;
	trackLength = 15;
} //end constructor

void Horse::init(int index, int trackLength){
	position = 0;
	Horse::index = index;
	Horse::trackLength = trackLength;
} //end init
void Horse::advance(){
	int coin = rand() % 2;
	position += coin;
} //end advance
void Horse::printLane(){
	for(int i = 0; i < trackLength; i++){
		if(i == position){
			std::cout << index;
		} //end if
		else {
			std::cout << ".";
		} //end else
	} //end for
	std::cout << std::endl;
} //end printLane
bool Horse::isWinner(){
	if(position >= trackLength - 1){
		 std::cout << "Horse " << index << " WINS!" << std::endl;
		 return true; 
	}
	return false;
}
