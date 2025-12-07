#include <iostream>
using namespace std;
int sum_ascii(string a){ //a function sum_ascii() that takes in a string
    int tot = 0;
    for (int i=0; i<a.length(); i++){
        tot += (int)a[i]; //this adds up the after converting letters into numbers
    }
    return tot;
}

int main() {
    char a = 'A';
    cout << a << endl;
    cout << (int) a << endl;
    int b = 66;
    cout << b << endl;
    cout << (char) b << endl;
    
    cout << sum_ascii("536B9DFC93AF") << endl; //this is testing
    return 0;
}

/* 
These targets are present in the dataset and can be used for testing:
536B9DFC93AF
1DA9D64D02A0
666D109AA22E
E1D2665B21EA
*/
