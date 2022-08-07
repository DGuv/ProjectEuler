#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

void primes (long long);


int main(){
	
	long long num = 600851475143;
	long long prod;
	
	primes(600851475143);
	
	int x=0;
	int fac=0;
	
	int factors[10];
	

	
}

void primes (long long num){
	
	int amt=0;
	
	int highest_factor;
	
	while (num % 2 == 0){
	
		highest_factor = 2;
		num /= 2;
			
	}
		
	for (int y=3; y <= sqrt(num); y+=2){
			
		while (num % y == 0){
		
			highest_factor = y;
			num /= y;
				
		}		
		
	}
	
	if (num > 2)
	
		highest_factor= num;

	cout << highest_factor;

}
