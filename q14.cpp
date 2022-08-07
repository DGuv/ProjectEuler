// Importing standard input and output functions from the iostream library
#include <iostream>

// Check the std namespace for funtions not defined in the current scope
using namespace std;

// Recursive collatz chain counter 
void r_collatz(long long int, int*);

// Iterative collatz chain counter
int collatz(long long int);

// Default function that is always run
int main(){
	
	// Variable is of long long int type so that it can store very large integers
	long long int num = 1;
	
	// amt stores the number of links in a collatz chain
	// longest stores the largest value of amt
	// longestnum stores the number that has largest number of links in a collatz chain
	int amt = 0, longest = 0, longestnum = 0;
	
	// A loop from 1 to 1 million - 1
	while (num < 1000000){
		
		// get the amount of links in the chain of the current number
		amt = collatz(num);
		
		// if the value is larger than any before it, store it in longest and 
		// store the number that generated that chain in longestnum
		if (amt > longest){
		
			longest = amt;
			longestnum = num;
			
		}
		
		// Increment the starting number by one
		num++;	
		
	}
	
	// Printing the final value stored in longestnum
	cout << "The number with the longest Collatz chain is: " << longestnum;
		
}


void r_collatz(long long int num, int *amt){
	
	if (num == 1){
	
		//cout << num << endl << endl;
		return;
		
	}
		
	else{
		
		//cout << num << " -> ";
		*amt += 1;
		
		if (num % 2 == 0)
		
			r_collatz(num/2, amt);
			
		else
			
			r_collatz((num*3)+1, amt);
	
	}
	
}


int collatz(long long int num){
	
	int amt = 0;
	
	while (num >= 1){
	
		if (num == 1)
			
			break;
			
		else{
			
			amt++;
			
			if (num % 2 == 0)
				
				num /= 2;
			
			else
			
				num	= (num * 3) + 1;
		
		}
	
	}
	
	return amt;
	
}
