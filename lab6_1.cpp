#include <iostream>
using namespace std;

int main() {
    int number;
    int even_num = 0;
    int odd_num = 0;

    while (true) {
        cout << "Enter an integer: ";
        cin >> number;

        if (number == 0) break;

        if (number % 2 == 0)
            even_num++;
        else
            odd_num++;
    }

    cout << "#Even numbers = " << even_num << endl;
    cout << "#Odd numbers = " << odd_num;
    return 0;
}
