#include <iostream>
#include <assert.h>

#include "../ProductionProject/Production.h"

using namespace std;

int main()
{
	Production p;

	std::vector<int> a = { 10, -1, 0, 1, 2, 3 };

	cout << p.someMethod(a).size() << endl;
	assert(p.someMethod(a).size() == a.size());
	cin.get();
}