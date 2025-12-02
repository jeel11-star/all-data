#include<iostream>
using namespace std;

int main(){
    
    int choice;
    while (choice != 6)
    {
        cout<<endl;
        cout<<endl;
        cout<<"1. question-1"<<endl;
        cout<<"2. question-2"<<endl;
        cout<<"3. question-3"<<endl;
        cout<<"4. question-4"<<endl;
        cout<<"5. question-5"<<endl;
        cout<<"6. exit"<<endl;
        cin>>choice;
    
    



    if (choice == 1)
    {
        
    
    
    int size;
    cout<<"enter the number of index ";
    cin>>size;

    int arr[size];
    int arr2[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"enter the value index "<<i<<": ";
        cin>>arr[i];
       
    }
    

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" "<<endl;
    }
    

     cout<<"copied array is"<<endl;

     for (int i = 0; i < size; i++)
     {
        
        arr2[i]=arr[i];
        cout<<arr2[i]<<" ";
     }

     
     cout<<endl;

    }


// -------------------------question-2------------------------


    else if (choice == 2)
    {
        
    
    
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr1[n];
    for (int i = 0; i < n; i++) {
        cout<<"enter the index "<<i<<": ";
        cin >> arr1[i];
    }
    cout<<endl;

    int largest = 0;
    int secondLargest = 0;

    for (int i = 0; i < n; i++) {
        if (arr1[i] > largest) {
            secondLargest = largest;
            largest = arr1[i];
        } 
        
    }

    if (secondLargest == 0) {
        cout << "There is no second largest element" << endl;
    } else {
        cout << "The second largest element is: " << secondLargest << endl;
    }

    }

// --------------------question-3--------------------------------


  else if (choice == 3)
  {
  
    int N;
    cout << "Enter number of elements: ";
    cin >> N;

    int arr3[N];

    cout << "Enter elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr3[i];
    }


    int newSize = N; 

    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; j++) {
            if (arr3[i] == arr3[j]) {
                for (int k = j; k < newSize - 1; k++) {
                    arr3[k] = arr3[k + 1];
                }
                newSize--;  
                j--; 
            }
        }
    }

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr3[i] << " ";
    }


  }

    // ---------------------------------------question-4-------------------A

    else if (choice == 4)
    {
        
    
    
     int A;

    cout << "Enter number of elements: ";
    cin >> A;

    int arr5[A], arr6[A], sum[A];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i <A; i++) {
        cin >> arr5[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < A; i++) {
        cin >> arr6[i];
    }

     for (int i = 0; i < A; i++) {
        sum[i] = arr5[i] + arr6[i];
    }

    cout << "Sum of corresponding elements:\n";
    for (int i = 0; i < A; i++) {
        cout << sum[i] << " ";
    }

    }
    // -----------------------------------question-5---------------------
    else if (choice == 5)
    {

    int no, nn;

    cout << "Enter size of first array: ";
    cin >> no;

    cout << "Enter size of second array: ";
    cin >> nn;

    int arr111[no], arr22[nn], merged[no + nn];

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < no; i++) {
        cin >> arr111[i];
    }

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < nn; i++) {
        cin >> arr22[i];
    }

    
    for (int i = 0; i < no; i++) {
        merged[i] = arr111[i];
    }

     for (int i = 0; i < nn; i++) {
        merged[no + i] = arr22[i];
    }

    cout << "Merged array:\n";
    for (int i = 0; i < no + nn; i++) {
        cout << merged[i] << " ";
 
    }

}
else if (choice == 6)
{
    cout<<"exiting"<<endl;
}

else{
    cout<<"invalid option";
}
    }



    

    return 0;
}


    




