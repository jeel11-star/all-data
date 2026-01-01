#include <iostream>
using namespace std;

class stack
{
private:
    int *arr;
    int capacity;
    int size;
    int top;

public:
    stack(int capacity)
    {
        this->capacity = capacity;
        arr = new int[capacity];
        this->size = 0;
        this->top = -1;
    }
    void push(int element)
    {

        this->top++;
        this->arr[top] = element;
        this->size++;
    }

    void pop()
    {
        if (this->size == 0 || this->top == -1)
        {
            cout << "stack is underflow" << endl;
        }
        else
        {
            this->top--;
            this->size--;
        }
    }
    void display()
    {

        for (int i = this->top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
    void Isempty()
    {
        if (this->size == 0 || this->top == -1)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
    void Isfull()
    {
        if (this->size == this->capacity)
        {
            cout << "true" << endl;
        }
        else
        {
            cout << "false" << endl;
        }
    }
};
int main()
{

    stack stack(5);

    do
    {
        cout << "1.push the element" << endl;
        cout << "2.pop the element" << endl;
        cout << "3.isempty the element" << endl;
        cout << "4.isfull the element" << endl;
        cout << "5.display the element" << endl;

        int choice;
        cout << "enter the choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:

            int element;
            cout << "enter the element" << endl;
            cin >> element;
            stack.push(element);
            cout << "element is added" << endl;
            break;
        case 2:
            stack.pop();
            cout << "element is removed" << endl;
            break;
        case 3:
            stack.Isempty();
            break;
        case 4:
            stack.Isfull();
            break;
        case 5:
            stack.display();
            break;
        default:
            cout << "invalid choice" << endl;
            break;
        }

    } while (true);
}
