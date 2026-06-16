char * addBinary(char * a, char * b)
{
    int aLen = strlen(a), bLen = strlen(b), num = 0, ansLen;
    ansLen = aLen > bLen ? aLen + 2 : bLen + 2;

    char *arr = (char*)malloc(sizeof(char) * ansLen);
    arr[--ansLen] = '\0';

    aLen--;
    bLen--;

    while(--ansLen >=0)
    {
        num += aLen >= 0 ? a[aLen--] - '0' : 0;
        num += bLen >= 0 ? b[bLen--] - '0' : 0;

        arr[ansLen] = num % 2 + '0';
        num /= 2;
    }

    if(arr[0] == '0')
    {
        return arr + 1;
    }
    else
    {
        return arr;
    }
}