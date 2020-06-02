#include  <iostream>
#include <time.h>
#include "Matrix.h"

using namespace std;

int main()
{
	Matrix<int> arrInt(10);


	arrInt.fill(10, 90, 1);
	
	
	arrInt.show();

	return 0;
}