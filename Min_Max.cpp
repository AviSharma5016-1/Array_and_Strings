#include<iostream>
using namespace std;

int main(){
   int arr[5];
    cout<<"Enter 5 elements: ";
    for(int i=0; i<5; i++){
        cin >> arr[i];
    }
    int min, max, i;
    for(i=0; i<5; i++){
        if(i == 0){
            min = arr[i];
            max = arr[i];
        } else {
            if(arr[i] < min) {
                min = arr[i];
            }
            if(arr[i] > max) {
                max = arr[i];
            }
        }
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;

    
    return 0;
}


/*OUTPUT
Enter 5 elements: 10 20 30 40 50
Minimum element: 10
Maximum element: 50
*/
