#include "std_lib_facilities.h"

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		os << "Int " << i << " value: " << *a << "	Address of value: " << a << endl;
		++a;	
	}
}

int main()
{
	int n = 7;
	int* p1 = &n;
	cout << "n: " << n << "	p1: " << p1 << endl;

	int arr7 [7] = { 1,2,4,8,16,32,64 };
	int* p2 = arr7;

	cout << " " << endl;
	print_array(cout, p2, 7);
	cout << "p2: " << p2 << endl;

	int* p3 = p2;
	p2 = p1;
	p2 = p3;

	cout << " " << endl;
	cout << "p1: " << p1 << "/" << *p1 << endl;
	print_array(cout, p2, 7);

	int arr10[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = arr10;

	int arr10_2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = arr10_2;

	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	vector<int> v_arr10{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_arr10[0];
	vector<int> v_arr10_2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_arr10_2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];

	keep_window_open();
	return 0;
}