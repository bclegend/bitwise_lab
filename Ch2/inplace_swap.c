#include <stdio.h>

void inplace_swap(int *x, int *y)
{
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt)
{
    int first, last;
    for (first = 0, last = cnt - 1; first <= last; first++, last--)
        inplace_swap(&a[first], &a[last]);
}
// int n[5] = {1, 2, 3, 4, 5};
// result : n = {5, 4, 0, 2, 1}


int main()
{
    // int n = 5, m = 8;
    // int *a = &n;
    // int *b = &m;
    // inplace_swap(a, b);
    // printf("%d,%d",*a,*b);

    int n[5] = {1, 2, 3, 4, 5};
    reverse_array(n, 5);

    return 0;
}