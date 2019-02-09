#include <iostream>
using namespace std;

int main() {

	int sum = 3;
	
	do {
		for (int n = 2; n <= 100; n++)
		{ double num = sum; 
		num = sum / n;
		num = sum % n;
		
		if ((1 < sum / n) && (0 == sum % n))
			{
			break;
			}
		if ((1 == sum / n) && (0 == sum % n))
		{ cout << "this number is prime " << sum << endl;
			break;
		}
		}
	sum++;
	} while ( sum < 100);
	
}