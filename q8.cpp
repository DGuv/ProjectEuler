#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	ifstream iff("bigNum.txt");
	
	int bigNum[1001] = {};
	
	char temp;
	
	for (int k=0; k<1000; k++){
		
		iff >> temp;
		bigNum[k] = temp-'0';
		cout << bigNum[k];	
		
	}
	
	
	cout << endl << endl;
	bigNum[1000] = '\0';
	
	int k=0;
	long long prod;
	long long l_prod=0;
	int pos=0;
	
	while (k+12 < 1000){
		
		prod=1;
		
		for (int a=0; a<13; a++){
			
			prod *= bigNum[k+a];	
			
		}
		
		if (prod > l_prod){
		
			l_prod = prod;
			
			pos = k;
				
		}
		
		k++;
		
	}
	
	cout << l_prod;
		
	cout << " (";
	for (int i=0; i<13; i++){
	
		cout << bigNum[pos+i];
		
		if (i!=12)
		
			cout << "*";
			
		else
		
			cout << ")";	
		
	}
		
}
