#include <iostream>
using namespace std;

int main() {
    int rows = 6, cols = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= cols; j++) {

            if(
                (i == 1) || (i == 3) || (j == 1) || (i == 2 && j == cols)       
              )
            {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}