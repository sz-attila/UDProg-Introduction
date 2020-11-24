#include "std_lib_facilities.h"

void print_array_10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << "Int " << i << " value: " << a[i] << " Address of value: " << &a[i] << endl;
}

void print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << "Int " << i << " value: " << a[i] << " Address of value: " << &a[i] << endl;
}

int* allocate_array(int n)
{
	int* a = new int[n];
	int counter = 100;
	for (int i = 0; i < n; ++i)
		a[i] = counter++;

	return a;
}

vector<int*> allocate_vector(int n)
{
	vector<int*> temp;
	int counter = 100;
	for (int i = 0; i < n; ++i)
		temp.push_back(new int{counter++});
	
	return temp;
}

void print_vector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		cout << "Int " << i << " value: " << *v[i] << " Address of value: " << v[i] << endl;
}

void delete_vector(vector<int*> v)
{
	for (int i = 0; i < v.size(); ++i)
		delete v[i];
}

int main()
{
	int* arr10 = new int[10];
	
	for (int i = 0; i < 10; ++i)
		cout << "Int " << i << " value: " << arr10[i] << " Address of value: " << &arr10[i] << endl;

	cout << " " << endl;
	print_array_10(cout, arr10);
	delete[] arr10;

	int* arr10_2 = new int[10]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109 };
	cout << " " << endl;
	print_array_10(cout, arr10_2);
	delete[] arr10_2;

	int* arr11 = new int[11]{ 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110 };
	cout << " " << endl;
	print_array(cout, arr11, 11);
	delete[] arr11;

	int* arr20 = allocate_array(20);
	cout << " " << endl;
	print_array(cout, arr20, 20);
	delete[] arr20;

	vector<int*> v_arr10 = allocate_vector(10);
	cout << " " << endl;
	print_vector(v_arr10);
	delete_vector(v_arr10);

	vector<int*> v_arr11 = allocate_vector(11);
	cout << " " << endl;
	print_vector(v_arr11);
	delete_vector(v_arr11);

	vector<int*> v_arr20 = allocate_vector(20);
	cout << " " << endl;
	print_vector(v_arr20);
	delete_vector(v_arr20);
	
	keep_window_open();
	return 0;
}