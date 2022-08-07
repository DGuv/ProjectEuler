#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

long long int r_diagonal (int nums[][20], int row, int col);
long long int l_diagonal (int nums[][20], int row, int col);
long long int right (int nums[][20], int row, int col);
long long int left (int nums[][20], int row, int col);
long long int down (int nums[][20], int row, int col);
long long int up (int nums[][20], int row, int col);

int main(){
	
	ifstream iff("q11txt.txt");
	
	if (!iff)
	
		return -1;
		
	int num;
		
	int nums[20][20];
	
	for (int x=0; x<20; x++){
		
		for (int y=0; y<20; y++){
		
			iff >> num;
			
			nums[x][y] = num;
			
		}
		
	}
	
	
	long long int f_right;
	long long int f_down;
	long long int f_r_diag;
	long long int f_l_diag;
	long long int h_prod=0;
	long long int f_left;
	long long int f_up;
	
	for (int x=0; x<20; x++){
		
		for (int y=0; y<20; y++){
		
			f_right = right(nums,x,y);
			f_down = down(nums,x,y);
			f_r_diag = r_diagonal(nums,x,y);
			f_l_diag = l_diagonal(nums,x,y);
			f_left = left(nums,x,y);
			f_up = up(nums,x,y);
			
			cout << "Column: " << y+1 << endl;
			cout << "Row: " << x+1 << endl;
			cout << "Right: " << f_right << endl;
			//cout << "Left: " << f_left << endl;
			cout << "Down: " << f_down << endl;
			//cout << "Up: " << f_up << endl;
			cout << "Right Diagonal: " << f_r_diag << endl;
			cout << "Left Diagonal: " << f_l_diag << endl;
			
			
			if (f_right > h_prod)
			
				h_prod = f_right;
				
			if (f_left > h_prod)
			
				h_prod = f_left;
				
			if (f_down > h_prod)
			
				h_prod = f_down;
				
			if (f_up > h_prod)
			
				h_prod = f_up;
				
			if (f_r_diag > h_prod)
			
				h_prod = f_r_diag;
				
			if (f_l_diag > h_prod)
			
				h_prod = f_l_diag;
				
				
			cout << "Highest product: " << h_prod << endl << endl;
				
		}
		
		
	}
	
	cout << "The highest product of 4 adjacent numbers in the 20x20 grid is: " << h_prod;
		
}


long long int r_diagonal(int nums[][20], int row, int col){
	
	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (row >= 19 || col >= 19)
		
			break;
			
		row++;
		col++;
			
	}
	
	return sum;
	
}


long long int l_diagonal(int nums[][20], int row, int col){
	
	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (col == 0 || row == 19)
		
			break;
			
		row++;
		col--;
			
	}
	
	return sum;
	
}


long long int right (int nums[][20], int row, int col){
	
	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (col >= 19)
		
			break;
		
		col++;
			
	}
	
	return sum;
	
}


long long int left (int nums[][20], int row, int col){
		
	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (col <= 0)
		
			break;
		
		col--;
			
	}
	
	return sum;
		
}


long long int down (int nums[][20], int row, int col){
	
	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (row >= 19)
		
			break;
		
		row++;
			
	}
	
	return sum;
	
}


long long int up (int nums[][20], int row, int col){

	long long int sum=1;
		
	for (int x=0; x<4; x++){
	
		//cout << nums[row][col] << " ";
		sum*=nums[row][col];
		
		if (row == 0)
		
			break;
		
		row--;
			
	}

	return sum;
			
}
