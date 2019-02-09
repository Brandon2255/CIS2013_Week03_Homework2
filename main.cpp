#include <iostream>
using namespace std;
// This program ouputs a list of prime numbers from 3-100

int main() {

	int sum = 3;
	
	do {
		for (int n = 2; n <= 100; n++)
		{  
		
				
		if ((1 < sum / n) && (0 == sum % n))
			{
			break;
			}
		if ((1 == sum / n) && (0 == sum % n))
		{ cout << sum << " is a prime number\n";
			break;
		}
		}
	sum++;
	} while ( sum < 100);
	
}