#include <iostream>
using namespace std;

class Node{
	public:
	//Data
	int data;
	//Pointer to the next Node
	Node * next;
	//Construct that makes the ptr to NULL
	Node(int value){
		next = NULL;
		data = value;
	     		}
	  };

class CSLL{
	public:
	Node * head;
	CSLL(){
		head = NULL;
	       }
	//Insert to the end of the linked list
	void insert(int value){
		//Create a new Node
		Node * temp = new Node(value);
		//Check if empty list
		if (head == NULL){	
			head = temp;
				}
		else{ //If not empty list
			Node * current = head;
			while (current->next != head)
			current = current->next;
			current->next = temp;
		     }
		temp->next = head;
		}
	
	//Displays the linked list
	void display(){
		Node * current = head;
		if (current == NULL){
		cout << "No elements" <<endl;
		return;
	}
		while (current->next != head){ //Stoping at head
		cout << current -> data << "->";
		current = current -> next;
	}
	//Printing the last elements
	cout << current -> data;
	cout << endl;
	}
	void InsertAt (int value, int pos){
	//for reaching the place before the pos
		Node*current = head;
		int i =1;
		while(i < pos) {
		i++;
		current = current->next;
		}
	}

	void DeleteAt (intpos){
	//reach the place before the pos
		Node*current = head;
		int i =0;
		while(i < pos) {
		i++;
		current = current->next;
		Node*temp = current-> next;
		current next = temp next;
		delete temp;
  	 }
	}
	
	void Delete(){
	//deleting last element
		void delet(){
	//store the tail in the temp
		Node*temp = tail;
	
	//before tail has to point the NULL
		Node*current = head;
		while(current-> next != tail){
		current = current->next;}
	}
	
	void CountItems(){
	int count
	{
		Node*current = head;
		int count1 = 0;
		while (current != NULL)
		{
			count1++;
			current = current->next;
		return count1;
		}
	}

};

int main(){
	CSLL csll1;
	for(int i= 1; i < 11; i++){
		csll1.insert(i);
	}
	//csll1.insert(1);
	csll1.display();
}
	
	
	


 
