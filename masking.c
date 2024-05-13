// least byte mask for 32-bits system
// The least significant byte of x, with all other bits set to 0.
// [0x00000021].
void least_byte_masking(unsigned int *num)
{
    *num = 0xFF & *num;
}
// All but the least significant byte of x complemented, with the
// least significant byte left unchanged.. [0x789ABC21].
void comple_without_least(unsigned int *num)
{
    *num = 0xFFFFFF00 ^ *num;
}

// The least significant byte set to all 1s, and all other bytes of
// x left unchanged.[0x876543FF].
void least_set_1(unsigned int *num)
{
    *num = 0x000000FF | *num;
}

int main()
{
    unsigned int n = 0x87654321;
    unsigned int *p = &n;
    least_set_1(p);
    return 0;
}