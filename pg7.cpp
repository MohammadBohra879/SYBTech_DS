#include <iostream>
using namespace std;
class overflow
{
public:
    void show()
    {
        cout << "Stack Overflow" << endl;
    }
};
int main()
{   
    int n;
    cout << "Enter size of stack: ";
    cin >> n;
    int stack[n];
    int top = -1;
    int choice, value;

    while (true)
    {
        cout << "\n1. Push\n2. Pop\n3. Display\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            try
            {
                if (top == n - 1)
                    throw overflow();
                cout << "Enter value to push: ";
                cin >> value;
                stack[++top] = value;
            }
            catch (overflow o)
            {
                o.show();
            }
            break;

        case 2:
            if (top == -1)
            {
                cout << "Stack Underflow" << endl;
            }
            else
            {
                cout << "Popped value: " << stack[top--] << endl;
            }
            break;

        case 3:
            if (top == -1)
            {
                cout << "Stack is empty" << endl;
            }
            else
            {
                cout << "Stack elements: ";
                for (int i = top; i >= 0; i--)
                    cout << stack[i] << " ";
                cout << endl;
            }
            break;

        case 4:
            exit(0);

        default:
            cout << "Invalid choice" << endl;
        }
    }

    return 0;
}