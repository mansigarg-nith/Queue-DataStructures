// queue implementation as linked list
#include <iostream>
#include <vector>
using namespace std;
struct Node{
	int data;
	Node *next;
};Node *top;
class Queue{
	public:
		Queue(){
			top = NULL;
		}
		void isEmpty();
		void enqueue();
		void dequeue();
		void Front();
		void Rear();
		void search();
		void display();
};
void Queue::isEmpty(){
	if(top==NULL){
		cout<<"Queue is empty."<<endl;
		return;
	}cout<<"Queue is not empty."<<endl;
}
void Queue::enqueue(){
	Node *n = new Node();
	int value;
	cout<<"Enter the value to be enqueued: ";
	cin>>value;
	n->data = value;
	n->next = top;
	top = n;
	cout<<value<<" is enqueued."<<endl;
}
void Queue::dequeue(){
	Node *temp = top;
	while(temp->next->next!=NULL){
		temp = temp->next;
	}
	Node *t;
	t = temp->next;
	cout<<t->data<<" is dequeued."<<endl;
	temp->next = t->next;
	delete t;
}
void Queue::Front(){
	Node* temp = top;
	if(temp==NULL){
		cout<<"Queue is empty."<<endl;
		return;
	}
	while(temp->next!=NULL){
		temp = temp->next;
	}
	cout<<temp->data<<" is front of the queue."<<endl;
}
void Queue::Rear(){
	if(top==NULL){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<top->data<<" is the rear of the queue."<<endl;
}
void Queue::search(){
	int value;
	cout<<"Enter the value to be searched: ";
	cin>>value;
	Node *temp = top;
	if(temp->data==value){
		cout<<"Value is found at rear end of the queue."<<endl;
	}
	while(temp!=NULL){
		if(temp->data==value){
			cout<<"Value found!"<<endl;
			return;
		}temp = temp->next;
	}
	cout<<"Value not found!"<<endl;
}
void Queue::display(){
	if(top==NULL){
		cout<<"Queue is empty!"<<endl;
		return;
	}
	Node *temp = top;
	while(temp!=NULL){
		cout<<temp->data<<endl;
		temp = temp->next;
	}
	return;
}
int main(){
	cout<<"Queue implementation as array with maximum size of 100."<<endl;
	Queue q;
	int choice;
	while(1){
		cout<<"1. Check if queue is empty."<<endl;
		cout<<"2. Insert in the queue."<<endl;
		cout<<"3. Delete from the queue."<<endl;
		cout<<"4. Display the front of the queue."<<endl;
		cout<<"5. Display the rear of the queue."<<endl;
		cout<<"6. Search for an element in the queue."<<endl;
		cout<<"7. Display the queue."<<endl;
		cout<<"8. End."<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				q.isEmpty();
				break;
			case 2:
				q.enqueue();
				break;
			case 3:
				q.dequeue();
				break;
			case 4:
				q.Front();
				break;
			case 5:
				q.Rear();
				break;
			case 6:
				q.search();
				break;
			case 7:
				q.display();
				break;
			case 8:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
		}
	}
}
