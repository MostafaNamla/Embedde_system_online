#include <stdio.h>

typedef struct Complex {
    float real;
    float imag;
} Complex;

Complex add_complex(Complex A, Complex B) {
    Complex result;
    result.real = A.real + B.real;
    result.imag = A.imag + B.imag;
    return result;
}


void print_complex(Complex C) {
    if (C.imag < 0) {
        printf("%.2f - %.2fi\n", C.real, -C.imag);
    } else {
        printf("%.2f + %.2fi\n", C.real, C.imag);
    }
}

int main() {
    Complex num1, num2, sum;
    printf("for 1st complex number  \n");

    printf("Enter real and imaginary respectively:");
    scanf("%f%f", &num1.real,&num1.imag);


    printf("for 1st complex number  \n");

    printf("Enter real and imaginary respectively:");
    scanf("%f%f", &num2.real,&num2.imag);


    sum = add_complex(num1, num2);

    printf("Sum = ");
    print_complex(sum);

    return 0;
}