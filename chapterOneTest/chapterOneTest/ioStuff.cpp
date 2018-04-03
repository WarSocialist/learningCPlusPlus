#include "stdafx.h"
#include <iostream>

int readNum()
{
	int x;
	std::cout << "Enter das number: " << std::endl;
	std::cin >> x;
	return x;
}
void writeNum(int output)
{
	std::cout << "Your two numbers added together are: " << output << std::endl;

}