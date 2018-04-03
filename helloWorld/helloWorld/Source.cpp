#include <iostream>

void doDasPrinting()
{
	//std::cout << "Fuck yeah I'm printing stuff on the screen again" << std::endl;
	int x, y, z;
	x = 1;
	y = 2;
	z = x + y;
	x = 2;
	z = x + y;
	std::cout << "The value of z is: " << z << std::endl;
}


int main() 
{
	std::cout << "Hello das world! \n";
	doDasPrinting();
	return 0;
}