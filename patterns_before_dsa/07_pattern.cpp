#include <iostream>
using namespace std;

void printPyramid(int N) {
    for (int i = 0; i < N; i++) {
        // 1. Print leading spaces
        for (int j = 0; j < N - i - 1; j++) {
            cout << " ";
        }
        
        // 2. Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        
        // 3. Move to next line
        cout << endl;
    }
}

int main() {
    int N = 5;
    printPyramid(N);
    return 0;
}