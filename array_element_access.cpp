#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter 5 elements:";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    
    cout<<"Enter element to be accessed: ";
    int element;
    cin>>element;
    bool found;
    for(int i=0; i<5; i++){
        if(arr[i] == element){
            cout<<"Element found at position: "<<i+1<<endl;
            found = true;
            break;
        }
    }
    if (found == false){
        cout<<"Element not found"<<endl;
    }

    return 0;

}



/* OUTPUT
Enter 5 elements:10 20 30 40 50
Enter element to be accessed: 40
Element found at position: 4
*/
