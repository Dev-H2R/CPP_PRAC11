#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n == 0) {
        cout << 1;
        return 0;
    }
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }

    cout << count << endl;
    return 0;
}
