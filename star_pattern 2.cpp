#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for (int i = 1; i <= n; ++i) {
       
        for (int space = n - i; space > 0; --space)
            cout << " ";

       
        for (int j = 1; j <= i; ++j)
            cout << "*";

        cout << endl;
    }

    return 0;
}

Output 
/*
    *
   **
  ***
 ****
*****
*\
