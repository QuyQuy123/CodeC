// in ngược số sử dụng đệ quy

#include <stdio.h>

int reverseNumber(int num, int reversed) {
    if (num == 0) {
        return reversed;
    } else {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        return reverseNumber(num / 10, reversed);
    }
}

int main() {
    int num;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &num);
    
    int reversed = reverseNumber(num, 0);
    printf("so dao nguoc la: %d\n", reversed);
    
    return 0;
}
