#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;

    string reversed_str = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed_str += str[i];
    }

    if (str == reversed_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}


/*OUTPUT
Enter a string: kayak
You entered: kayak
The string is a palindrome.
*/
