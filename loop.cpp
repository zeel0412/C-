#include <iostream>
using namespace std;

int main() {
    char ch = 'a';

    do {
        cout << ch << " ";
        ch = ch + 4;  
    } while (ch <= 'z');

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout<<"Enter Number:";
    cin >> num;

    do {
        count++;
        num = num / 10;
    } while(num != 0);

    cout << count;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int num, first, last;
        cout<<"Enter Number:";

    cin >> num;

    last = num % 10;   

    while(num >= 10) {
        num = num / 10;
    }

    first = num;

    cout << first + last;

    return 0;
}