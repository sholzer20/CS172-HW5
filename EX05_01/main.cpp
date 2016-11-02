//This program will modify the linear search program in Listing 7.9 to work for generic types using a template. The linearSearch function 
//returns the index of the first instane of the keyword/number found. This program tests int, double, and string arrays

#include <iostream>
#include <string>
using namespace std;

template< typename T >
int linearSearch(const T list[], T key, int arraySize) //Changed so array is of T type and the value we are looking for is also T type
{
	for (int i = 0; i < arraySize; i++)
	{
		if (key == list[i]) //Returns the index of the keyword/number
			return i;
	}
	return -1;
}



int main()
{
	int list[] = { 1, 4, 4, 2, 5, -3, 6, 2 };
	double list2[] = { 1.4, 4.2, 4.4, 2.0, 5.6, -3.3, 6.7, 2.9 };
	string list3[] = { "Sam", "Holzer", "CPP", "CS172", "Homework", "Test", "Hello", "World" };

	cout << "The first index of 5 in the int array is: " << linearSearch(list, 5, 8) << endl;
	cout << "The first index of 5.6 in the double array is: " << linearSearch(list2, 6.7, 8) << endl;
	cout << "The first index of the word 'Test' in the string array is: " << linearSearch(list3, string("Test"), 8) << endl;

	return 0;
}