// Need to use -lm to link to libm when compile
// // v1
// #include <math.h>
// int i_sqrt_v1(int N)
// {
//     int msb = (int) log2(N);
//     int a = 1 << msb;
//     int result = 0;
//     while (a != 0) {
//         if ((result + a) * (result + a) <= N)
//             result += a;
//         a >>= 1;
//     }
//     return result;
// }

// //v2
// int i_sqrt_v2(int N)
// {
//     int msb = 0;
//     int n = N;
//     while (n > 1) {
//         n >>= 1;
//         msb++;
//     }
//     int a = 1 << msb;
//     int result = 0;
//     while (a != 0) {
//         if ((result + a) * (result + a) <= N)
//             result += a;
//         a >>= 1;
//     }
//     return result;
// }

//v3
int i_sqrt_v3(int x)
{
    if (x <= 1) /* Assume x is always positive */
        return x;

    int z = 0;
    for (int m = 1UL << ((31 - __builtin_clz(x)) & ~1UL); m; m >>= 2) {
        int b = z + m;
        z >>= 1;
        if (x >= b)
            x -= b, z += m;               
    }
    return z;
}

// test
#include <stdio.h>
int main()
{
    int N = 36;
    printf("%d\n", i_sqrt_v3(N));
    return 0;
}