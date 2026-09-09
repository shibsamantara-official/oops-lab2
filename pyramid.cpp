#include <iostream>
using namespace std;

class NumberPyramid {
private:
    int rows;

public:
    void input() {
        cout << "Enter number of rows: ";
        cin >> rows;
    }

    void printPattern() {
        for (int i = 1; i <= rows; i++) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    NumberPyramid obj;
    obj.input();
    obj.printPattern();
    return 0;
}