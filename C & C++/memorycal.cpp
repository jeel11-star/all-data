#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int value;
    int option;
    while (option != 0)
    {   

        cout << "1: add student to list" << endl;
        cout << "2: display the student list" << endl;
        cout << "0: exit" << endl;

        cout << "enter the option " << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Enter a number: ";
            cin >> value;
            v.push_back(value);
            cout << "Element added.\n";
            break;

        case 2:
            cout << "Vector elements:\n";
            for (int x : v)
            {
                cout << x << " " << endl;
            }
            break;

        case 3:
            cout << "exiting program" << endl;

        default:
            cout << "Invalid choice\n";
        }
    }
    return 0;
}
