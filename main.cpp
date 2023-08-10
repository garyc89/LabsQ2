#include "mbed.h"

Serial pc(USBTX, USBRX); 

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

void printFibonacci(int n) {
    pc.printf("Fibonacci Series using recursion: ");
    for (int i = 0; i < n; i++) {
        pc.printf("%d, ", fibonacci_recursive(i));
    }
    pc.printf("\r\n");
}

int main() {
    pc.baud(9600);  
    int n = 10;     
    printFibonacci(n);
    while (1) {
        // Keep the main loop running
    }
}
