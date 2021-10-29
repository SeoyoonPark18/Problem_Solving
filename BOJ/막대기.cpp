#include <iostream>
#include "stdio.h"

using namespace std;

int main() {
    int x;
    int length = 64;
    int cnt = 0;
    cin >> x;

    while (x > 0) {
        if (x < length) {
            length /= 2;
        }
        else {
            x -= length;
            cnt++;
        }
    }
    cout << cnt << endl;
}

