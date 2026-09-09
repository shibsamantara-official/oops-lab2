#include <iostream>
using namespace std;

class ReverseArrayCopy {
private:
    int arr1[100];
    int arr2[100];
    int n;

public:
    void input() {
        cout << "Enter number of elements: ";
        cin >> n;
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr1[i];
        }
    }

    void copyReverse() {
        for (int i = 0; i < n; i++) {
            arr2[i] = arr1[n - 1 - i];
        }
    }

    void display() {
        cout << "Reversed array elements copied to the second array:" << endl;
        for (int i = 0; i < n; i++) {
            cout << arr2[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ReverseArrayCopy obj;
    obj.input();
    obj.copyReverse();
    obj.display();
    return 0;
}