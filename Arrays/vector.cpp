

#include <iostream>
using namespace std;
int main()
	{
		int a[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 4};
		int length;
		length = sizeof(a)/sizeof(int);
		cout << length << endl;
		cout << a[0] << endl;
		for(int i = 0; i < length; i++)
			cout << a[i] << ", ";
		//for(size_t i = numElements; i--;)

		// input an index to read from array
		int i;
		cout << "\nEnter Index: ";
		cin >> i;
		cout << a[i] << endl;
		a[0] = 1;
		cout << "Press a key to continue...";
		cin.get();
		cin.get();
		// do 
		//  {
		//    cout << '\n' << "Press a key to continue...";
		//  } while {}
		//  (cin.get() != '\n');
		// }


	}


