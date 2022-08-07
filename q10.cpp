#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;


int main(){
	
	int x=2;
	int y;
	long long sum=0;
	bool flag = true;

	while (x < 2000000){
		
		flag = true;
		
		for (y=2; y <= (x/2); y++){
		
			if (x % y == 0)
			
				flag = false; 
		
		}
		
		f1:
		
		if (flag == true){
				
			sum+=x;
			cout << x << endl;
		
		}
		
		x++;
		
	}
	
	cout << endl << "The sum of all prime numbers under 2 million is: " << sum;
	
}
