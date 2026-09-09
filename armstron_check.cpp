#include <iostream>
using namespace std;

class Armstrong {
private:
    int num;

public:
    void input() {
        cout << "Enter a number: ";
        cin >> num;
    }

    void check() {
        int temp = num, sum = 0, remainder;
        while (temp != 0) {
            remainder = temp % 10;
            sum += remainder * remainder * remainder;
            temp /= 10;
        }

        if (sum == num)
            cout << num << " is an Armstrong number." << endl;
        else
            cout << num << " is not an Armstrong number." << endl;
    }
};

int main() {
    Armstrong obj;
    obj.input();
    obj.check();
    return 0;
}