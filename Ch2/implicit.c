float sum_elements(float a[], unsigned length)
{
    int i;
    float result = 0;
    if (length == 0)
        return 0.0;
    for (i = 0; i <= length - 1; i++)
        result += a[i];
    return result;
}

int main()
{
    float arr1[3] = {1.00f, 235.2f, 458.44f};
    float ans;
    ans = sum_elements(arr1, 3);
    ans = sum_elements(arr1, 0);
    return 0;
}