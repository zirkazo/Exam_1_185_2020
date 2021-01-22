#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>	

class Function		
{
    public:
	static void display()	
	{
	    int i = 0;
		double b = 2;

		std::cout << "|  x  | Решение\n";
		std::cout << "|_____|_________\n";
		for (double x = 0; x < 3.1; x = x + 0.1)
		{
			switch (i)
			{
			default:
				std::cout << "| " << x << " | " << solution(b, x) << std::endl;
				break;
			case 0:
				std::cout << "|  " << x << "  | " << solution(b, x) << std::endl;
				break;
			case 10:
				std::cout << "|  " << x << "  | " << solution(b, x) << std::endl;
				break;
			case 20:
				std::cout << "|  " << x << "  | " << solution(b, x) << std::endl;
				break;
			case 30:
				std::cout << "|  " << x << "  | " << solution(b, x) << std::endl;
				break;
			}
			++i;
		}
	}
    private:
	static double solution(double b = 0, double x = 0) 
	{
		double y = 0;
		double a = 0;
		a = x * M_PI;
		y = (b * b * b) + (a * a * a);
		y = 1 + sin(y);
		return y;
	}
};
int main()
{
	Function::display(); 
}