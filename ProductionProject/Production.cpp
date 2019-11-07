#include "Production.h"

std::vector<int> Production::someMethod(std::vector<int> a)
{
	std::vector<int> myVector = { 0, -1, -2, -3, -4, -5 };
	for (int i = 0; i < 6; i++) {
		while (myVector[i] < 1 || myVector[i] > 46) {
			std::cout << "Enter " << 6 - i << " numbers, each between 1 and 46" << std::endl;
			std::cin >> myVector[i];
		}
	}
	return myVector;
}