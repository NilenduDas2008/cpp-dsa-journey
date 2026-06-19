#include <iostream>
using namespace std;

void printHalfDiamond(int N) {
    // Total rows = 2*N - 1
    for (int i = 1; i <= 2 * N - 1; i++) {
        // Calculate stars: use row number (i) for first half, 
        // and (2*N - i) for the second half
        int stars = (i <= N) ? i : (2 * N - i);
        
        for (int j = 0; j < stars; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    printHalfDiamond(5);
    return 0;
}