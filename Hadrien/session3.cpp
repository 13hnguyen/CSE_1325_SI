#include <iostream>
#include <math.h>

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

int make_square(int n)
{
   return sqrt(n);
}

int main()
{
   std::cout << make_square(30) << std::endl;
   
   return 0;
}
