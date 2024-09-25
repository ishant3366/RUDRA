//BREAKPOINT : A breakpoint is a debugging tool that allows developers to pause the execution of a program at a specific line of code.
             tools like GDB (GNU Debugger) to set breakpoints

//this is the 1st code in pattern.cpp file in opencv in which we are adding the breakpoint at line 8 in second for loop. 
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        // Set a breakpoint here (line where inner loop starts)
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;  
    }

    return 0;
}

//gdb commands for creating breakpoint in the code 

g++ -g pattern.cpp -o pattern
gdb ./pattern
break 8
run

//hereafter we also print the value of variables using the same breakpoint we created
print i
print j
print n

next
