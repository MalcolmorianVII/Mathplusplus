#include <iostream>

int main() {
    // Matrix operations

    int A[3] {1,2,3};
    int B[3] {4,5,6};
    int C[3];

    for(int i=0;i < 3;i++) {
        C[i] = A[i] * B[i];
    }
    std::cout << "[ ";
    for (int i:C) {
        std::cout << i << " ";
    }
    std::cout << "]";
}