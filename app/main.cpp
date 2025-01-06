#include "app.h"

// read and evaluate expression inside endless loop 
// break after first exception (use one catch clause), show error description

int main()
{
	using namespace vsite::oop::v8;
	{
		while (true)
		{
			try
			{
				auto x = input_num(std::cin);
				auto oper = input_op(std::cin);
				auto y = input_num(std::cin);
				double z = calc(x, oper, y);
				std::cout << x << oper << y << "=" << z << std::endl;
			}
			catch (exceptions& e)
			{
				std::cout << e.details();
				break;
			}
		}
	}
}
