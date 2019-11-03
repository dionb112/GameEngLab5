#include "Production.h"

int* Production::someMethod(int a)
{
	int myArray[6] = { 0,0,0,0,0,0 };
	for (int i = 0; i < 6; i++) {
		for (int j = 5; j > 0; j--) {
			while (myArray[i] < 1 || myArray[i] > 46 || myArray[i] == myArray[j] ) {
				std::cin >> myArray[i];
			}
		}
	}
	return myArray;
}