#include <iostream>
#include <cmath>
using namespace std;

const int size=999;

int main(){
	
	int x=0;
	int y=0;
	int z=0;
	int temp=0;
	int count=0;
	int b=0;
	int temp1;
	int count2=0;
	int temp2=0;
	int count3=0;
	int highest=0;
	
	
	
	
	for (y=size;y>100;y--){
		
		for (x=size;x>100;x--){
			
			z=x*y;
			//cout<<z<<endl;
			temp=z;
			
			while (temp!=0){
				
				//product[count]=temp%10;
				temp/=10;
				count++;
				
			}
			
			temp1=z;
			temp2=z;
			int product[count];
			int product2[count];
			count2=0;
			count3=count;
			
			while (temp1!=0){
				
				product[count-1]=temp1%10;
				temp1/=10;
				count--;
				
			}
			while (temp2!=0){
				
				product2[count2]=temp2%10;
				temp2/=10;
				count2++;
				
			}
			
			cout<<"Product1: \t\t Product2: ";
			
			for (int z=0;z<count2;z++){
					
					cout<<product2[z];
					cout<<" ";
					
				}
				
				cout<<endl;
				
			for (int z=0;z<count2;z++){
					
					cout<<product[z];
					cout<<" ";
					
				}
				
				cout<<endl;
				
				int match=0;
				int flag=0;
				
				
				for (int ze=0;ze<count2;ze++){
					
					if (product[ze]==product2[ze]){
						
						flag++;
						
					}
					
					
				}
				
				if (flag==count2&&(x*y)>highest){
				
					cout<<endl;
					cout<<"Match with y: "<<y<<"\tx: "<<x;
					cout<<endl;
					highest=x*y;
					
					//return 0;
		
			}
					
		}
		
		
		cout<<"Biggest palindromic product : "<<highest<<endl;
		cin;
	}
	
	
}
