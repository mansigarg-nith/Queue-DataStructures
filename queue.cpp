// queue implmentation as an array
#include <iostream>
using namespace std;
#define MAX 100
class Queue{
	public:
		int front, rear;
		int arr[MAX];
		Queue(){
			front = -1;
			rear = -1;
		}
		void createQueue();
		void isEmpty();
		void isFull();
		void enqueue();
		void dequeue();
		void Front();
		void Rear();
		void display();
};
void Queue:: createQueue(){
	int size;
	cout<<"Enter the size of the queue: ";
	cin>>size;
	cout<<"Enter the values in the queue: ";
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	front = 0;
	rear = size-1;
	cout<<"Queue is created!"<<endl;
}
void Queue:: isEmpty(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Queue is not empty."<<endl;
	return;
}
void Queue::isFull(){
	if(front==MAX-1){
		cout<<"Queue is full."<<endl;
		return;
	}
	cout<<"Queue is not full."<<endl;
}
void Queue:: enqueue(){
	int value;
	cout<<"Enter the value to be enqueued: ";
	cin>>value;
	if(front==-1){
		front+=1;
		rear+=1;
		arr[front] = value;
		return;
	}
	rear+=1;
	arr[rear]=value;
}
void Queue::dequeue(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	int d = arr[front];
	front+=1;
}
void Queue:: Front(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Front of the queue is: "<<arr[front];
	return;
}
void Queue::Rear(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	cout<<"Rear of the queue is: "<<arr[rear]<<endl;
	return;
}
void Queue::display(){
	if(front==-1){
		cout<<"Queue is empty."<<endl;
		return;
	}
	for(int i=rear; i>=front; i--){
		cout<<arr[i]<<endl;
	}
}
int main(){
	cout<<"Queue implementation as array with maximum size of 100."<<endl;
	Queue q;
	int choice;
	while(1){
		cout<<"1. Create a queue."<<endl;
		cout<<"2. Check if queue is empty."<<endl;
		cout<<"3. Check if queue is full."<<endl;
		cout<<"4. Insert in the queue."<<endl;
		cout<<"5. Delete from the queue."<<endl;
		cout<<"6. Display the queue."<<endl;
		cout<<"7. End."<<endl;
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				q.createQueue();
				break;
			case 2:
				q.isEmpty();
				break;
			case 3:
				q.isFull();
				break;
			case 4:
				q.enqueue();
				break;
			case 5:
				q.dequeue();
				break;
			case 6:
				q.display();
				break;
			case 7:
				cout<<"EXIT"<<endl;
				exit(0);
				break;
		}
	}
}
