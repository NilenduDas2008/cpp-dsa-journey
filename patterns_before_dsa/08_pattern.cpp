#include <iostream>
using namespace std;

void printInvertedPyramid(int N) {
    for (int i = 0; i < N; i++) {
        // 1. Print leading spaces
        for (int j = 0; j < i; j++) {
            cout << "-";
        }
        
        // 2. Print stars
        // As i increases, the number of stars decreases
        for (int j = 0; j < 2 * (N - i) - 1; j++) {
            cout << "*";
        }
        
        // 3. Move to next line
        cout << endl;
    }
}

int main() {
    int N = 5;
    printInvertedPyramid(N);
    return 0;
}