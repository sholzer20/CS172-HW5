#include <iostream>
#include <vector>
#include <ctime>
using namespace std;

template< typename T >
void shuffle(vector<T>& v)
{
	srand(time(NULL));
	for (int i = 0; i < v.size(); i++)
	{
		int index = rand() % v.size(); //Generates random index
		T temp = v[i]; //Grabs current element
		v[i] = v[index]; //Swaps the element at current index with the element at the random index
		v[index] = temp; //The random index receives the initial element
	}
}

int main()
{
	vector<int> vec(10);
	for (int i = 0; i < 10; i++) //Prompting user for 10 integers to fill vector
	{
		cout << "Please enter an integer: ";
		cin >> vec[i];
	}

	shuffle(vec);

	cout << "\nThe contents of the vector after being shuffled are: " << endl;
	for (int i = 0; i < 10; i++)
	{
		if (i != 9)
		{
			cout << vec[i] << ", ";
		}
		else
		{
			cout << vec[i] << endl;
		}
	}

	return 0;
}