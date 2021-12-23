#include <iostream>
using namespace std;


bool isPrimeNumber(int number) {
	bool isPrimeFlag = true;
	for (int i = 2; i < number; i++)
		if (number % i == 0) {
			return false;  
		}
	return true;  
}

void main()
{
	int counter = 1;
	for (int i = 1; i <= 100000; i++) {
		bool isPrime = isPrimeNumber(i);
		if (isPrime)
			counter++;
		cout << counter << " : " << i << " is prime number\n";
	}
	
	system("pause>0");
}