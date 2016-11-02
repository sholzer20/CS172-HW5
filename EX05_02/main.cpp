//This program utilizes a template function to test if an array is sorted or not

#include <iostream>
#include <string>
using namespace std;

template< typename T>
bool isSorted(const T list[], int size)
{
	for (int i = 1; i < size; i++)
	{
		if (list[i] < list[i - 1]) //Checks if the previous index is larger than the given one
			return false;
	}
	return true;
}


int main()
{
	int list[] = { 1, 2, 3, 4, 5 };
	double list2[] = { 2.0, 3.7, 2.4, 1.5, 9.6 };
	string list3[] = { "Sam", "Holzer", "Math", "Computer", "Science" };

	cout << "List is sorted: " << boolalpha << isSorted(list, 5) << endl;
	cout << "List2 is sorted: " << boolalpha << isSorted(list2, 5) << endl;
	cout << "List3 is sorted: " << boolalpha << isSorted(list3, 5) << endl;

	return 0;
}