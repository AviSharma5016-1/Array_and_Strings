#include <iostream>
using namespace std;

int main() {
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i=0;i<5;i++){
        cin>> arr[i];
    }
    int sum=0;
    for(int i=0;i<5;i++){
        sum += arr[i];
    }
    cout<< "Sum of elements: "<< sum<< endl;

    float average = sum/5.0;
    cout << "Average of elements: " << average << endl; 

    return 0;
}

/*OUTPUT

Enter 5 elements: 10 20 30 40 50
Sum of elements: 150
Average of elements: 30
*/
