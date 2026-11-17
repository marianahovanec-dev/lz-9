#include <iostream>
#include <forward_list>

using namespace std;

int main() {
    forward_list<int> numList = {7, 15, 42, 25, 8, 50, 3, 10, 19};
    
    cout << "Початковий список: ";
    for (int num : numList) {
        cout << num << " ";
    }
    cout << endl;

    forward_list<int> result;
    
    for (int num : numList) {
        result.push_front(num);
    }
    result.reverse();

    cout << "Список після вставки символу '!': ";
    for (int num : numList) {
        cout << num;
        if (num % 5 == 0) {
            cout << " !";
        }
        cout << " ";
    }
    cout << endl;

    return 0;
}
