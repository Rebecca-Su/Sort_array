//============================================================================
// Name        : ArraySort.cpp
// Author      : Rebecca Su
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

//#ifndef MARMOSET_TESTING
int main();
//#endif

void sort_array(int a[3]);

//#ifndef MARMOSET_TESTING
int main() {
	int array[3] = {0};

	std::cout << "Enter three numbers: ";
	std::cin >> array[0] >> array[1] >> array[2];

	sort_array(array);

	std::cout << "In sorted order: ";
	std::cout << array[0] << ", "<< array[1] << ", " << array[2];
	return 0;
}
//#endif

void sort_array(int a[3]){
	if(a[0] > a[1])
		std::swap(a[0], a[1]);
	if(a[1] > a[2])
	{
		std::swap(a[1], a[2]);
		if(a[0] > a[1])
			std::swap(a[0], a[1]);

	}
}
