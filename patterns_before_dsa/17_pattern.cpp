#include <iostream>
using namespace std;

void printAlphaHill(int N) {
    for (int i = 0; i < N; i++) {
        // 1. Print leading spaces
        for (int j = 0; j < N - i - 1; j++) cout << " ";

        // 2. Print characters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << ch;
            (j < breakpoint) ? ch++ : ch--;
        }

        // 3. Move to next line
        cout << endl;
    }
}

int main() {
    printAlphaHill(5);
    return 0;
}