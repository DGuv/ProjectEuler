#include <iostream>
#include <cmath>

using namespace std;

int main(){
	
	const int SIZE = 4;

	int primes[SIZE]={0};
	
	int amt=0;
	
	bool flag;
	
	int x=2;
	
	/*if (SIZE<=2)
	
		cout << SIZE << endl;
		
		*/
	
	while (x < SIZE+1){
		
		flag = true;
		
		for (int y=0; y<amt; y++){
			
			if (x%primes[y]==0)
			
				flag = false;	
			
		}
		
		if (flag == true)
		
			primes[amt++] = x;
		
		x++;
		
	}
	
	int primes_amt[amt];
	
	for (int t=0; t<amt; t++){
		
		primes_amt[t] = 1;	
		
	}
	
	int temp[2]={2,3};
	
	for (int t=0; t<2; t++){
	
		while (temp[t]<SIZE){
			
			temp[t]*=primes[t];
			if (temp[t]<SIZE)
				
				primes_amt[t]++;	
			
		}
		
	}
	
	for (int t=0; t<amt; t++){
		
		cout << primes[t] << '\t' << primes_amt[t] << endl;	
		
	}
	
	long long num=1;
	
	for (int t=0; t<amt; t++){
		
		for (int o=0; o<primes_amt[t]; o++){
		
			num*=primes[t];
		
		}
		
	}
	
	cout << "The smallest positive number evenly divisible by 1 to " << SIZE << " is: " << num;
	
}
