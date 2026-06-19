#include <iostream>
using namespace std;

void printBinaryTriangle(int N) {
    for (int i = 0; i < N; i++) {
        // A row starting with 1 happens if (row_index + col_index) is even.
        // We can determine the start value based on whether the row is even or odd.
        int start = (i % 2 == 0) ? 1 : 0;
        
        for (int j = 0; j <= i; j++) {
            cout << start << "-";
            start = 1 - start; // Toggle between 0 and 1
        }
        cout << endl;
    }
}

int main() {
    printBinaryTriangle(5);
    return 0;
}