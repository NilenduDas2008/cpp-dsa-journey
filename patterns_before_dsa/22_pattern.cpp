#include <iostream>
#include <algorithm> // for min()
using namespace std;

void printConcentricSquares(int N) {
    int size = 2 * N - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find distances from all 4 edges
            int top = i;
            int left = j;
            int bottom = size - 1 - i;
            int right = size - 1 - j;
            
            // The number to print is based on the smallest distance
            int val = N - min({top, left, bottom, right});
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    printConcentricSquares(5);
    return 0;
}