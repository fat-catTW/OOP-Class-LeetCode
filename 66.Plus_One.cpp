/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize)
{
    int add = 1, i = digitsSize;
    int* ptr = (int*)malloc(sizeof(int)* (digitsSize + 1));

    while(i > 0 )
    {
        ptr[i] = (digits[i - 1] + add)%10;
        add = (digits[i - 1] + add) / 10;
        i--;
    }


    if(add > 0)
    {
        ptr[0] = 1;
        *returnSize = digitsSize + 1;
        return ptr;
    }
    else
    {
        *returnSize = digitsSize;
        return ptr + 1;
    }
}