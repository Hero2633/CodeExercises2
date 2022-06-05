#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int fun(int x)
{
    int tmp = x;
    x = abs(x);
    int sum = 0;
    while (x > 0)
    {
        sum = sum * 10 + x % 10;
        x = x / 10;
    }
    if (tmp < 0)
    {
        return -sum;
    }
    return sum;
}
int reverse(int x) {
    int sum = 0;
    int tmp = x;
    if (x == -2147483648)
        return 0;
    x = abs(x);
    int x1 = x;
    int count = 0;
    while (x1 > 0)
    {
        count++;
        x1 = x1 / 10;
    }
    if (count < 10 || x % 10 == 0)
    {
        return fun(tmp);
    }
    else
    {
        int i = 0;
        int a[10] = { 2,1,4,7,4,8,3,6,4,7 };
        while (x > 0 && i < 10)
        {
            sum = x % 10;
            if (a[i] != sum)
                break;
            i++;
            x = x / 10;
        }
        if (a[i] > sum)
            return fun(tmp);
    }

    return 0;

}

int main()
{
    int x = -835789;
    printf("%d",reverse(x));
    return 0;
}