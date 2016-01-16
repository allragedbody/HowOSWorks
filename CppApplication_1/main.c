/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <stdio.h>
typedef unsigned char *byte_pointer;

int main() {
    /*
    printf("%f\n", 1e20);
    printf("%f\n", (3.14 + 1e20) - 1e20);
    printf("%f\n", 3.14 + (1e20 - 1e20));
    printf("hello world\n");
    printf("%d\n", 0xFFFFFF);
    printf("%d\n", getint());
    chapter2page23test2dot4();
     */

    //    show_int(12345); //表示为一个整形数据，占一个字节
    //    show_float(12345.0); //表示为一个浮点数，占4个字节
    //    char s[] = "abcdefg";
    //    show_bytes((byte_pointer) s, strlen(s));
    //    show_pointer("aaaaa"); //表示为三个字节

//    chapter2page35test2dot11();
    chapter2page35test2dot12();
}

void inplace_swap(int *x, int *y) {
    printf("start---x=%d,y=%d\n", *x, *y);
    *y = *x^*y;
    *x = *x^*y;
    *y = *x^*y;
    //    printf("swap x and y\n");
    printf("end---x=%d,y=%d\n", *x, *y);
}

reverse_array(int a[], int cnt) {
    int first, last;
    int x = 2;
    int y = 2;
    inplace_swap(&x, &y);
    printf("________________________\n");
    for (first = 0, last = cnt - 1;
            first <= last;
            first++, last--) {
        if (first == last) {
            printf("index---%d------%d\n", first, last);
            printf("111111111111111%d------%d\n", a[first], a[last]);
            inplace_swap(&a[first], &a[last]);
            printf("222222222222222%d------%d\n", a[first], a[last]);
        } else {
            inplace_swap(&a[first], &a[last]);
        }

    }
    return a;
}

void chapter2page35test2dot11() {
    int *a, *b;

    int s[] = {1, 3, 5, 7, 9};
    //    printf("%d%d%d%d%d\n", s[0], s[1], s[2], s[3], s[4]);
    a = reverse_array(s, 5);
    printf("%d%d%d%d%d\n", a[0], *(a + 1), a[2], a[3], a[4]);
    //
    //    int s1[] = {1, 2, 3, 4};
    //    printf("%d%d%d%d\n", s1[0], s1[1], s1[2], s1[3]);
    //    b = reverse_array(s1, 4);
    //    printf("%d%d%d%d\n", b[0], b[1], b[2], b[3]);
}

int getint() {
    return (500 * 400)*(300 * 200);
}
//整数乘方，x为底数y为幂次

int ipow(int x, int y) {
    int i;
    int c = x;
    for (i = 1; i < y; i++) {
        c *= x;
    }
    return c;
}

void chapter2page23test2dot1() {
    /* 2进制和16进制之间的转换
     * 2进制数字从最后一位开始每4位切开。然后对4位对应的数字进行转换即可得到16进制数据。
     * 16转2进制，是将对应字符转换为4位的2进制数字即可。
     */

}

void chapter2page23test2dot2() {
    printf("2的9次方，10进制的值是：%d\n", ipow(2, 9));
    printf("2的9次方，16进制的值是：0x%x\n", ipow(2, 9));
    printf("2的19次方，10进制的值是：%d\n", ipow(2, 19));
    printf("2的19次方，16进制的值是：0x%x\n", ipow(2, 19));
    printf("2的14次方，10进制的值是：%d\n", ipow(2, 14));
    printf("2的14次方，16进制的值是：0x%x\n", ipow(2, 14));
    printf("2的16次方，10进制的值是：%d\n", ipow(2, 16));
    printf("2的16次方，16进制的值是：0x%x\n", ipow(2, 16));
    printf("2的17次方，10进制的值是：%d\n", ipow(2, 17));
    printf("2的17次方，16进制的值是：0x%x\n", ipow(2, 17));
    printf("2的5次方，10进制的值是：%d\n", ipow(2, 5));
    printf("2的5次方，16进制的值是：0x%x\n", ipow(2, 5));
    printf("2的7次方，10进制的值是：%d\n", ipow(2, 7));
    printf("2的7次方，16进制的值是：0x%x\n", ipow(2, 7));
}

void chapter2page23test2dot4() {
    printf("0x%x\n", 0x503c + 0x8);
    printf("0x%x\n", 0x503c - 0x40);
    printf("0x%x\n", 0x503c + 64);
    printf("0x%x\n", 0x50ea - 0x503c);
}

void chapter2page35test2dot12() {
    printf("0x%x\n", 0x87654321 & 0x000000FF);
    printf("0x%x\n", ~0x87654321 ^0x000000FF);
    printf("0x%x\n", 0x87654321 | 0x000000FF);
}

void show_bytes(byte_pointer start, int len) {
    int i;
    for (i = 0; i < len; i++)
        printf(" %.2x", start[i]);
    //        printf(" %c", start[i]);
    printf("\n");
}

//void show_bytes1(byte_pointer start, int len) {
//    int i;
//    for (i = 0; i < len; i++)
//        printf(" %.4f", start[i]);
//    printf("\n");
//}

void show_int(int x) {
    show_bytes((byte_pointer) & x, sizeof (int));
}

void show_float(float x) {
    show_bytes((byte_pointer) & x, sizeof (float));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) & x, sizeof (void *));
}
//互换两个存储位置的int值。

