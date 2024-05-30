#include <iostream>
using namespace std;

class Queues{
private:
    static const int max = 3;
    int front, rear;
    int queue_array[max];

public: 
    Queues(){
        front = -1;
        rear = -1;
    }

    void insert(){
        int num;
        cout << "enter a number:";
        cin >> num;
        cout << endl;

        if ((front == 0 && rear == max - 1) || (front == rear +  1)){
            cout << "\nQueue overflow\n";
            return;
        }
        if (front == -1){
            front = 0;
            rear = 0;
        }
        else {
            if (rear == max - 1)
                rear = 0;
            else
                rear = rear + 1;
        }
        queue_array[rear] = num;
    }
    void remove() {
		
		if (front == -1) {
			cout << "Queue underflow\n";
			return;
		}
		cout << "\nThe element deleted from the queue is:" << queue_array[front] << "\n";

         if (front == rear) {
			front = -1;
			rear = -1;
		}
		else {
			if (front == max - 1)
				front - 0;
			else
				front = front + 1;
		}

	}

    void display() {

        int front_position = front;
        int rear_position = rear;
    
		if (front == -1) {
			cout << "Queue is empty\n";
			return;
		}
		cout << "\nElement in the queue are ...\n";

        if (front <= rear) {
			while (front <= rear) {
				cout << queue_array[front] << "  ";

			}
			cout << endl;
		}
		else {
			while (front <= max - 1) {
				cout << queue_array[front] << " ";
				front++;
			}
			front = 0;
			while (front <= rear) {
				cout << queue_array[front] << " ";
				front++;
			}
			cout << endl;
		}
	}
};

int main(){
    Queues q;
	char ch;

    while (true) {
		try {
			cout << "Menu" << endl;
			cout << "1. Implement insert operation" << endl;
			cout << "2. Implement delete operation" << endl;
			cout << "3. Display values" << endl;
			cout << "4. Exit" << endl;
			cout << "Enter your choice (1-4):";
			cin >> ch;
			cout << endl;
        }
}