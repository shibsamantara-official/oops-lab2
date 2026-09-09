#include <iostream>
using namespace std;

class Palindrome {
private:
    int num;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check() {
        int temp = num, reversedNum = 0, remainder;
        while (temp != 0) {
            remainder = temp % 10;
            reversedNum = reversedNum * 10 + remainder;
            temp /= 10;
        }

        if (num == reversedNum)
            cout << num << " is a Palindrome number." << endl;
        else
            cout << num << " is not a Palindrome number." << endl;
    }
};

int main() {
    Palindrome obj;
    obj.input();
    obj.check();
    return 0;
}