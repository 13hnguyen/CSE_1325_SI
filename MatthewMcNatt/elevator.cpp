#include "elevator.h"

bool Elevator::is_operating(){
	return _operating;
}
int Elevator::get_level(){
	return _level;

}
void Elevator::go_up(int goal){
	_level=goal;

}

void Elevator::go_down(int goal){
	_level = goal;
}
void Elevator::open_door(){
	std::cout << "You have arrived\n";
}