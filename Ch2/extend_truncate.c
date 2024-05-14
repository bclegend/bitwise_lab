#include <stdio.h>

int fun1(unsigned word)
{
    return (int) ((word << 24) >> 24);
}

int fun2(unsigned word)
{
    return ((int) word << 24) >> 24;
}


void truncate()
{
    int a = 0xffff7fff;
    short s = a;
    // // 1: /x a = 0xffff7fff
    // // 2: /x s = 0x7fff
}

int main()
{
    unsigned int arr[4] = {0x00000076, 0x87654321, 0x000000c9, 0xedcba987};
    unsigned int ans1, ans2;
    for (int i = 0; i < 4; i++) {
        ans1 = fun1(arr[i]);
        ans2 = fun2(arr[i]);
        printf("%x, %x\n", ans1, ans2);
    }

    return 0;
}
