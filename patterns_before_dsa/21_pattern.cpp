#include <iostream>
using namespace std;

void printHollowRectangle(int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            // Check if (i, j) is on the boundary
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    printHollowRectangle(5);
    return 0;
}