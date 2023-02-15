#include <iostream>
using namespace std;

float f(float x)
{
	if (x == 0) throw 1;
	return 1 / x;
}

int main(void)
{
	float x;
	cout << "x? ";
	cin >> x;
	try 
	{
		cout << "1/x =" << f(x) << endl;
	}
	catch(int &e)
	{
		cout << "Division on zero exception" << endl;
	}
	
	return 0;
}


