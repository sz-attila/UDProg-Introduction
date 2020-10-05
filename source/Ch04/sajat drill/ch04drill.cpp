#include "std_lib_facilities.h"

int main()
{
	double a, b;
	while (cin >> a >> b)
	{
		if (a<b)
		{
			cout << "The smaller value is: " << a << endl;
			cout << "The larger value is: " << b << endl;
			if (b-a<=0.1)
			{
				cout << "The numbers are almost equal." << endl;
			}
		}
		if (a>b)
		{
			cout << "The smaller value is: " << b << endl;
			cout << "The larger value is: " << a << endl;
			if (a-b<=0.1)
			{
				cout << "The numbers are almost equal." << endl;
			}
		}
		if (a==b)
			cout << "The numbers are equal." << endl;	
	}

	return 0;
}
