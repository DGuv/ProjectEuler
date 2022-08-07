#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	const int size=100;
	
	int x=1;
	
	int sum=0, squares=0, sum_square;
	
	while (x<size+1){
	
		squares += pow(x,2);
		sum += x;	
		x++;

	}
	
	sum_square = pow(sum,2);
	
	cout << "The sum of the squares of the natural numbers from 1 to " << size << " is: " << squares << endl;
	cout << "The square of the sum of the natural numbers from 1 to " << size << " is: " << sum_square << endl;
	cout << "The difference between the sum of squares and the square of the sum is: " << sum_square-squares;	
	
}
