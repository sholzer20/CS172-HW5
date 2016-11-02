#pragma once
template< typename T >
class vector
{
private:
	T* v;
	int size;
public:
	vector() {
		size = 0;
		v = new T[size];
	}
	vector(int size) {
		v = new T[size];
		this->size = size;
	}
	vector(int size, T defaultValue) {
		v = new T[size];
		this->size = size;
		for (i = 0; i < size; i++)
		{
			v[i] = defaultValue;
		}
	}
	void push_back(T element) {

	}
	void pop_back() {

	}
	int size() {

	}
	T at() const {

	}
	bool empty() const {

	}
	void clear() {

	}
	void swap(vector v2) {

	}
};