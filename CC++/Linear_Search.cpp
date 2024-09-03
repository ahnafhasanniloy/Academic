#include <iostream>
#include <chrono>
using namespace std;

void lin_search(int a) {
    int ara[] = {7, 8, 12, 20, 25, 30};
    int i;
    for (i = 0; i < 6; i++) {
        if (ara[i] == a) {
            cout << "Found on index " << i << endl;
            return;
        }
    }
    cout << "Item not found" << endl;
}

void bin_search(int a) {
    int ara[] = {7, 8, 12, 20, 25, 30};
    int up = 5, low = 0, mid;
    while (low <= up) {
        mid = (up + low) / 2;
        if (ara[mid] == a) {
            cout << "Item found on index " << mid << endl;
            return;
        } else if (ara[mid] > a) {
            up = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << "Item not found" << endl;
}

int main() {
    chrono::high_resolution_clock::time_point start, end;
    chrono::nanoseconds duration;

    start = chrono::high_resolution_clock::now();
    bin_search(25);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "Binary search took " << duration.count() << " nanoseconds to execute\n";

    start = chrono::high_resolution_clock::now();
    lin_search(12);
    end = chrono::high_resolution_clock::now();
    duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
    cout << "Linear search took " << duration.count() << " nanoseconds to execute\n";

    return 0;
}
