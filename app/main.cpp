#include <iostream>
#include "sandbox.h"

int main()
{
	int a[10];
	a[10] = 1;
	std::cout << "Hello world!" << std::endl;
	sandbox::sandbox();
}

