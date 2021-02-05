#include <stdlib.h>
#include <iostream>

using namespace std;

int myAtoi(char* str)
{
    int res = 0;
    for (int i = 0; str[i] != '\0'; i++)
        res = res * 10 + str[i] - '0';

    return res;
}

int main()
{
    char str[] = "1234";

    int val = myAtoi(str);
    cout << val << endl;
    return 0;
}

