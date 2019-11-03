#include "Production.h"

int* Production::someMethod(int a)
{
	int myArray[6] = { 0, -1, -2, -3, -4, -5 };
	for (int i = 0; i < 6; i++) {
		while (myArray[i] < 1 || myArray[i] > 46) {
			std::cout << "Enter " << 6 - i << " numbers, each between 1 and 46" << std::endl;
			std::cin >> myArray[i];
		}
	}
	return myArray;
}