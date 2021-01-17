// queue implementation as dynamic array
#include <iostream>
#include <vector>
using namespace std;
class Queue{
	public:
		int front, rear;
		vector <int> v;
		Queue(){
			front = -1;
			rear = -1;
		}
		void createQueue();
		void isEmpty();
		void enqueue();
		void dequeue();
		void Front();
		void Rear();
		void display();
};
void Queue:: isEmpty(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Queue is not empty."<<endl;
	return;
}
void Queue:: enqueue(){
	int value;
	cout<<"Enter the value to be enqueued: ";
	cin>>value;
	if(front==-1){
		front+=1;
	}
	rear+=1;
	v.push_back(value);
	cout<<value<<" is enqueued."<<endl;
}
void Queue::dequeue(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	front+=1;
	cout<<"Element at front is dequed."<<endl;
}
void Queue:: Front(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Front of the queue is: "<<v[front];
	return;
}
void Queue::Rear(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Rear of the queue is: "<<v[rear]<<endl;
	return;
}
void Queue::display(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	for(int i=rear; i>=front; i--){
		cout<<v[i]<<endl;
	}
}
int main(){
	cout<<"Queue implementation as array with maximum size of 100."<<endl;
	Queue q;
	int choice;
	while(1){
		cout<<"1. Check if queue is empty."<<endl;
		cout<<"2. Insert in the queue."<<endl;
		cout<<"3. Delete from the queue."<<endl;
		cout<<"4. Display the queue."<<endl;
		cout<<"5. End."<<endl;
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
				q.display();
				break;
			case 5:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
		}
	}
}
