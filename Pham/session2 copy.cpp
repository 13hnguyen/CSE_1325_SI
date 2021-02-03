#include <iostream>

class Elevator
{
   private:
	   bool _operating;
	   int _level;
	   int _population;
	   std::ostream$ operator<<(ostream& os, const Elevator& elevator);
	   std::ostream& operator+(const Elevator& elevator);
   public:
	   Elevator(int lev)
	   {
	      _level = lev;
	   }
	   int get_level()
	   {
	      return _level;
	   }
};

std::ostream$ operator<<(ostream& os, const Elevator& elevator){
	os << elevator._operating << " " << elevator._level << " " << elevator._population << std::endl;
	return os;
}

std::ostream& operator+(const Elevator& elevator) {

}

int main()
{
   Elevator newElev{2};
   Elevator oldElev{3};
   std::cout << (newElev+oldElev) << std::endl;
}
