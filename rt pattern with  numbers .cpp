#include <iostream>
using namespace std;

int main() {
    int n = 5;  
    int val = 2;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << val <<"  ";
        }
        cout << endl;
        val *= val;
    }

    return 0;
}

