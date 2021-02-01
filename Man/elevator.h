#ifndef _Elevator_H
#define _Pet_H
#include <iostream>

class Elevator {
    private:
        bool operating;
        int level;
    public:
        void Elevator ();
        bool is_operating ();
        int get_level;
        void go_up (int goal);
        void go_down (int goal);
        void open_door();

};
#endif
