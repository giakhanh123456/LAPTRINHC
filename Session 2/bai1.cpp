#include <stdio.h>

int main() {
    short a = 1;  // short: so nguyen nho, 2 byte

    int b = 20;    // int: so nguyen thong thuong, 4 byte

    long c = 3000; // long: so nguyen lon hon int, 4 hoac 8 byte tuy he thong

    long long d = 40000;    // long long: so nguyen rat lon, 8 byte

    unsigned short e = 40;    // unsigned short: so nguyen khong dau nho, chi luu gia tri duong (0 den 65535)

    unsigned int f = 500;    // unsigned int: so nguyen khong dau, chi luu gia tri duong (0 den 4 ty)

    unsigned long g = 6000; // unsigned long: so nguyen lon khong dau, dung khi can gia tri duong lon hon unsigned int

    unsigned long long h = 70000;    // unsigned long long: so nguyen rat lon khong dau, co the luu gia tri rat lon

    char i = 'A';    // char: ky tu, chiem 1 byte, luu mot ky tu ASCII
    
    return 0;
    
}

