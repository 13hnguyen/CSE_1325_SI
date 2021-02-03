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
	   int get_level()
	   {
	      return _level;
	   }
};

int main()
{
   Elevator newElev{2};
   Elevator oldElev{3};
   std::cout << (newElev+oldElev) << std::endl;
}
