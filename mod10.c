#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void str_add(char *b, char *a, char *res, size_t size)
{
    int carry = 0;
    for (int i = 0; i < size; i++) {
        int tmp = (b[i] - '0') + (a[i] - '0') + carry;
        carry = tmp / 10;
        tmp = tmp % 10;
        res[i] = tmp + '0';
    }
}

int main()
{
    char num1[] = "1234512";
    char num2[] = "5999662";
    size_t size = strlen(num1); 
    char *result = (char *)malloc((size + 1) * sizeof(char)); 
    str_add(num1,num2,result,size);
    return 0;
}