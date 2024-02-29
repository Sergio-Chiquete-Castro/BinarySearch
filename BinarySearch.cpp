#include <iostream>
using namespace std;


int main() {

	int A[10] = { 6,8,13,17,20,22,25,28,30,35 };

	int l = 0, h = 9, key, mid;

	cout << "Enter key: ";
	cin >> key;

	while (l <= h) {
		mid = (l + h) / 2;

		if (key == A[mid]) {
			cout << "found at " << mid;
			return 0;
		}
		else if (key < A[mid]) {
			//if key small check left
			h = mid - 1;
		}
		else {
			//if key biiger check right
			l = mid + 1;
		}
	}

	cout << "not found";
}


/*
l is 0 
h is 9 

ex. we want to find key = [22] 


while l <= h [TRUE]


mid is 0+9/2 = 4 


we start at A[4] in the array, in the middle

 
if the key is equal to Array[mid] [FALSE]

else if key < A[mid] ,  22 < 4 [FALSE]

else l = mid + 1 , 0 = 4 + 1 

array moves to the right, A[5] 

then we go back to the if statement 

if the key(22) is equal to A[mid](5) 

[TRUE] 

22 is found at A[5]

*/
