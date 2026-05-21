// wap to implement a static queue considering size is 10, implement the static queue using array
#include<iostream>
using namespace std;

int size = 10;

int enqueue(int queue[], int rear, int size, int val) {
    if (rear == size - 1)
        cout << "Queue is full" << endl;
    else
        cout << "Enqueued: " << (queue[++rear] = val) << endl;
    return rear;
}

int dequeue(int queue[], int front, int rear) {
    if (front == rear)
        cout << "Queue is empty" << endl;
    else
        cout << "Dequeued element: " << queue[++front] << endl;
    return front;
}

int main() {
    int queue[10];
    int front = -1, rear = -1;
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
            rear = enqueue(queue, rear, size, val);
        } else if (choice == 2) {
            front = dequeue(queue, front, rear);
        } else if (choice == 3) {
            cout << "Queue elements: ";
            for (int i = front + 1; i <= rear; i++) {
                cout << queue[i] << " ";
            }
            cout << endl;
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