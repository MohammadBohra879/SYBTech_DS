// circular queue implementation using array
#include<iostream>
using namespace std;
int size = 5;
int arr[5];
int front = -1;
int rear = -1;
void enqueue(int val) {
    if ((rear + 1) % size == front) {
        cout << "Queue is full" << endl;
    } else {
        if (front == -1)
            front = 0;
            
        rear = (rear + 1) % size;
        arr[rear] = val;
        cout << "Enqueued: " << val << endl;
    }
}
void dequeue() {
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        front = (front + 1) % size;
        cout << "Dequeued: " << arr[front] << endl;
    }
}
void display() {
    if (front == rear) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue elements: ";
        for (int i = (front + 1) % size; i != (rear + 1) % size; i = (i + 1) % size) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}
int main() {
    int choice, val;
    while (true) {
        cout << "\n1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter element to insert: ";
            cin >> val;
            enqueue(val);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        }
        else if (choice == 4) {
            cout << "Exiting..." << endl;
            break;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}