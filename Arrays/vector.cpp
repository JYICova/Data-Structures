

#include <iostream>
using namespace std;
int main()
	{
		int const a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4};
		int length;
		length = sizeof(a)/sizeof(int);
		cout << length << endl;
		cout << a[0] << endl;
		for(size_t i = length; i--;)
			cout << a[i];
		//for(size_t i = numElements; i--;)
	}
