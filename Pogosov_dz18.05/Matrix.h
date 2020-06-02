#pragma once
#include <iostream>
#include <time.h>

using namespace std;

template<class T>
class Matrix
{
private:
	T** _array{};
	int _size{ 5 };
	T _min;
	T _max;
	int _order = 1;
public:
	explicit Matrix();
	explicit Matrix(int const size);
	int getSize();
	void setSize(const int size);
	T Rand(T min, T max, int order = 1);
	void fill(T min, T max, int order);
	void show();
	~Matrix();
};

