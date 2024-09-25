//this was done using vim and this code was written in two formats -:

//Inside Main Function :

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "enter n :";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  
    }

    return 0;
}


//Code inside printPattern() function and then calling the function inside main

#include <iostream>
using namespace std;

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  
    }
}

int main() {
    int n;

    cout << "enter n : ";
    cin >> n;

    printTriangle(n);

    return 0;
}

