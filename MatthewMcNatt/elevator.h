#ifndef __ELEVATOR_H
#define __ELEVATOR_H

 
#include<stdio.h>
#include<iostream>


class Elevator{
private:
	bool _operating;
	int _level;

public:
	Elevator();
	bool is_operating();
	int get_level();
	void go_up(int);
	void go_down(int);
	void open_door();

};

#endif

