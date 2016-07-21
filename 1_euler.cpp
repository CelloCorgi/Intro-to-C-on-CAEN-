#include <iostream>
using namespace std;

//This program adds the multiples of 3 and 5
//	under 1000


int main() {

	int sum = 0;

	for (int counter = 0; counter < 1000; counter = counter + 1) {

		if (counter % 5 == 0 || counter % 3 == 0) {
			sum = sum + counter; // sum += counter;
		}
	}
	cout << sum << endl;
}