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
	   friend std::ostream& operator<<(std::ostream& m, Elevator& elivator)
	   Elevator operator+(Elevator& ad)
	   {
	   	
	   }
	   int get_level()
	   {
	      return _level;
	   }
};
	   std::ostream& operator<<(std::ostream& m, Elevator& elivator)
	   {
	   	m << elevator._level << " " << elevator._population;
	   	return m;
	   }
	   
int main()
{
   Elevator newElev{2};
   Elevator oldElev{3};
   std::cout << (newElev+oldElev) << std::endl;
}
