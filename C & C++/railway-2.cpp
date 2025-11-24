#include <iostream>
#include <cstring>
using namespace std;

class Train {
private:
    int trainNumber;
    char trainName[50];
    char source[50];
    char destination[50];
    char trainTime[10];

    static int trainCount;

public:

    Train() {
        trainNumber = 0;
        strcpy(trainName, "");
        strcpy(source, "");
        strcpy(destination, "");
        strcpy(trainTime, "");
        trainCount++;
    }


    Train(int number, const char tName[], const char src[], const char dest[], const char time[]) {
        trainNumber = number;
        strcpy(trainName, tName);
        strcpy(source, src);
        strcpy(destination, dest);
        strcpy(trainTime, time);
        trainCount++;
    }


    ~Train() {
        trainCount--;
    }


    int getTrainNumber() { return trainNumber; }
    const char* getTrainName() { return trainName; }
    const char* getSource() { return source; }
    const char* getDestination() { return destination; }
    const char* getTrainTime() { return trainTime; }


    void setTrainNumber(int number) { trainNumber = number; }
    void setTrainName(const char name[]) { strcpy(trainName, name); }
    void setSource(const char src[]) { strcpy(source, src); }
    void setDestination(const char dest[]) { strcpy(destination, dest); }
    void setTrainTime(const char time[]) { strcpy(trainTime, time); }

    void inputTrainDetails() {
        cout << "Enter Train Number: ";
        cin >> trainNumber;
        cin.ignore();
        cout << "Enter Train Name: ";
        cin.getline(trainName, 50);

        cout << "Enter Source: ";
        cin.getline(source, 50);

        cout << "Enter Destination: ";
        cin.getline(destination, 50);

        cout << "Enter Train Time (HH:MM): ";
        cin.getline(trainTime, 10);
    }


    void displayTrainDetails() {
        cout << "\n--- Train Details ---\n";
        cout << "Train Number: " << trainNumber << endl;
        cout << "Train Name: " << trainName << endl;
        cout << "Source: " << source << endl;
        cout << "Destination: " << destination << endl;
        cout << "Train Time: " << trainTime << endl;
    }

    static int getTrainCount() {
        return trainCount;
    }
};

int Train::trainCount = 0;

int main() {
    cout << "Current Train Count: " << Train::getTrainCount() << endl;

    Train t1;
    t1.inputTrainDetails();

   
    t1.displayTrainDetails();
   

    cout << "\nTotal Train Objects: " << Train::getTrainCount() << endl;

    return 0;
}
