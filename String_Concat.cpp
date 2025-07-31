#include<iostream>
using namespace std;

int main(){
    string str1;
    cout << "Enter a string1: ";
    getline(cin, str1);

    
    
    string str2;
    cout << "Enter a string2: ";
    getline(cin, str2);
    cout<<"Entered string1: "<< str1<< endl;
    cout<<"Entered string2: "<< str2<< endl;
    
    string concat;
    concat = str1 + " " + str2;
    cout << "Concatenated string: " << concat << endl;

    return 0;
}


/*OUTPUT
Enter a string1: Avi
Enter a string2: Sharma
Entered string1: Avi
Entered string2: Sharma
Concatenated string: Avi Sharma
*/
