#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i=0;i<5;i++){
        cin>> arr[i];
    }
    
    cout<<"Reversed Array: \n";
    for (int i=4;i>=0;i--){
        cout<< arr[i] << " \n";
    }
    
     return 0;
}

/*OUTPUT
Enter 5 elements: 10 20 30 40 50
Reversed Array: 
50
40
30
20
10 
*/
