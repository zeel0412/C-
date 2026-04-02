#include <iostream>
using namespace std;

int main() {
    int n = 5;

    for(int i = n; i >= 1; i--) {          
        for(int s = 0; s < n - i; s++) {
            cout << "  ";
        }
        for(int j = 1; j <= i; j++) {
            if(j % 2 == 1)
                cout << "1 ";
            else
                cout << "0 ";
        }

        cout << endl;
    }

    return 0;
}