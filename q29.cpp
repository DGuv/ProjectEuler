#include <iostream>
#include <cmath>


using namespace std;

struct Node{
	
	int num;
	Node *next;
	Node *prev;
	
	Node(){
	
		next = nullptr;
		prev = nullptr;
		
	}
	
};


bool findNum(Node*, int, int);
int insertList(Node*, int, int);


int main(){
	
	// initializer for the linked list
	Node *top = nullptr;
	
	int size = 0;
	
	int num = 0;
	//*num = &0;
	
	int t, o;
	
	//*t = *o = 2;
	
	for (t=2; t<6; t++){
	
		for (o=2; o<6; o++){
			
			num = pow(t,o);
			cout << num;
			size = insertList(top, num, size);
			cout << top->num << " ";
			
		}
	
	}
		
}


// this returns true if the number was found in the list, false if not
bool findNum(Node *top, int num, int size){
	
	// this keeps track of if the node was found in the list
	bool found = false;
	
	int n;
	
		// this searches for the number in the list node by node
		for (n = 0; n < size; n++){	
			
			if (top->num == num)
			
				found = true;
				
			top = top->next;
			
		}
		
	// returns the status of found: if the number was found or not
	return found;	
	
}


// Insert in place function for doubly linked lists
int insertList(Node* top, int num, int size){	
	
	// this will tell us if the number already exists in the list
	bool flag = false;
	
	// this will be used to traverse the list
	Node *curr = top;
	
	// this will be used to create a new node in the list
	Node *newnode = nullptr;
	
	int i;
	
	// this inserts the first number in the list 
	if (size == 0){
		
		//cout << "Here";
		top = new Node;
		top->num = num;
		top->next = nullptr;
		top->prev = nullptr;
		size += 1;
		//cout << top->num[0];
		//cout << *size;	
		
	}
	
	// this inserts a number in place after the first number has been inserted
	else{
		
		// this will say if the number is in the list
		flag = findNum(top, num, size);
		cout << flag;
		// this inserts the nummber if it doesn't exist in the list
		if (!flag){
			
			// this chunk of code creates the node and stores the number in it
			newnode = new Node;
			newnode->num = num;
			newnode->next = nullptr;
			newnode->prev = nullptr;
			
			/// this find the correct position of the number
			for (; num > curr->num; curr = curr->next){}
			
			// this inserts the number if its smaller than the numbers in the list
			if (curr->prev == nullptr){
			
				top->prev = newnode;
				newnode->next = top;
				top = newnode;		
				
			}
			
			// this inserts the number where it should be otherwise
			else{
				
				newnode->next = curr;
				curr->prev = newnode;
				curr = newnode;	
				
			}
			
			// this increments the size variable of the list by one
			size += 1;
			
		}
		
	}
	
	// return the size of the list (new or the same, never less)
	return size;
	
}
