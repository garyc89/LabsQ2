#include "mbed.h"

Serial pc(USBTX, USBRX);  

void fibonacci_loop(int n) {
    int a = 0, b = 1, nextTerm;

    pc.printf("Fibonacci Series using loops: ");
    for (int i = 1; i <= n; ++i) {
        pc.printf("%d, ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }
    pc.printf("\r\n");
}

int main() {
    pc.baud(9600);  
    int n = 10;     
    fibonacci_loop(n);
    while (1) {
        // Keep the main loop running
    }
}
