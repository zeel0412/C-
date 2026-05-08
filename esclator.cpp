#include <iostream>
#include <string>

using namespace std;

template <typename T>
class MyStack {
public:
    T items[100];     
    int top;     
  
    MyStack() {
        top = -1;    
    }

    void add(T newItem) {
        if (top == 99) {
            cout << "The stack is full!" << endl;
        } else {
            top = top + 1;      
            items[top] = newItem; 
            cout << "Added: " << newItem << endl;
        }
    }


    void remove() {
        if (top == -1) {
            cout << "The stack is empty!" << endl;
        } else {
            cout << "Removed: " << items[top] << endl;
            top = top - 1;     
        }
    }


    void showTop() {
        if (top == -1) {
            cout << "Nothing to see, stack is empty." << endl;
        } else {
            cout << "The item on top is: " << items[top] << endl;
        }
    }
};

int main() {
   
    cout << "Number Stack" << endl;
    MyStack<int> numbers;
    numbers.add(100);
    numbers.add(200);
    numbers.showTop();
    numbers.remove();
    numbers.showTop();


    cout << "\nWord Stack" << endl;
    MyStack<string> words;
    words.add("Apple");
    words.add("Banana");
    words.showTop();

    return 0;
}