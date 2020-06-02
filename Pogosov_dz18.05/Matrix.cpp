#include "Matrix.h"

using namespace std;

template<typename T>
Matrix<T>::Matrix()
{
	_array = new T* [_size] {};
	for (int i = 0; i < _size; i++)
	{
		*(_array + i) =  new T[_size] {};
	}
}
template<typename T>
Matrix<T>::Matrix(const int size)
{
	_size = size;
	_array =  new T* [_size] {};
	for (int i = 0; i < _size; i++)
	{
		*(_array + i) =  new T[_size] {};
	}
}


template<typename T>
int Matrix<T>::getSize()
{
	return _size;
}
template<typename T>
void Matrix<T>::setSize(const int size)
{
	_size = size;
	delete[] _array;
	_array = new T* [_size] {};
	for (int i = 0; i < _size; i++)
	{
		*(_array + i) = new T[_size] {};
	}
}
template<typename T>
T Matrix<T>::Rand(T min, T max, int order)
{
	return (T)((T)(rand() % (int)((max - min) * order)) / order + min);
}

template<typename T>
void Matrix<T>::fill(T min, T max, int order)
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			*(*(_array + i) + j) = Rand(min, max, 1);
		}
	}

}
template<typename T>
void Matrix<T>::show()
{
	for (int i = 0; i < _size; i++)
	{
		for (int j = 0; j < _size; j++)
		{
			cout << *(*(_array + i) + j) << "  ";
		} cout << endl;
	} cout << endl;
}
template<typename T>
Matrix<T>::~Matrix()
{
	for (int i = 0; i < _size; i++)
	{
		delete[] * (_array + i);
	}
	delete[] _array;
	_array = nullptr;
}
