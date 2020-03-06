#include <iostream>
#include "Header.h"
using namespace std;
namespace Header {
	int sum(int a, int b)
	{
		return a + b;
	}

	int riznica(int a, int b)
	{
		return a - b;
	}
	void show()
	{
		cout << "This is calculator" << endl;
	}
}