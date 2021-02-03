#include <iostream>

class Elevator
{
   private:
	   bool _operating;
	   int _level;
	   int _population;

   public:
	   Elevator(int lev)
	   {
	      _level = lev;
	   }
	   friend std::ostream& operator<<(std::ostream& m, Elevator& elevator)
	   Elevator operator+(Elevator& ad)
	   int get_level()
	   {
	      return _level;
	   }
};
	   std::ostream& operator<<(std::ostream& m, Elevator& elevator)
	   {
	   	m << elevator._level << " " << elevator._population;
	   	return m;
	   }
	   Elevator operator+(const Elevator& ad)
	   {
	   	return ad._level +  *this._level;
	   }
	   
int main()
{
   Elevator newElev{2};
   Elevator oldElev{3};
   std::cout << (newElev+oldElev) << std::endl;  // newElev.operator(oldElev)
   
}
