#include<iostream>
using namespace std;

int main(){
    int arr[5];
    cout<<"Enter 5 elements:";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    cout<<"Entered elements are:\n";
    
    for(int i=0; i<5; i++){

        cout << arr[i] << " \n";
    }
    return 0;
}


/* OUTPUT:
Enter 5 elements:10 20 30 40 50
Entered elements are:
10
20
30
40
50 
*/
