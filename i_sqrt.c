// Need to use -lm to link to libm when compile
// v1
#include <math.h>
int i_sqrt_v2(int N)
{
    int msb = (int) log2(N);
    int a = 1 << msb;
    int result = 0;
    while (a != 0) {
        if ((result + a) * (result + a) <= N)
            result += a;
        a >>= 1;
    }
    return result;
}

//v2
int i_sqrt_v2(int N)
{
    int msb = 0;
    int n = N;
    while (n > 1) {
        n >>= 1;
        msb++;
    }
    int a = 1 << msb;
    int result = 0;
    while (a != 0) {
        if ((result + a) * (result + a) <= N)
            result += a;
        a >>= 1;
    }
    return result;
}

// test
#include <stdio.h>
int main()
{
    int N = 36;
    printf("%d\n", i_sqrt(N));
    return 0;
}