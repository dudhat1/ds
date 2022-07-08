#include <stdio.h>
void fun(int n)
{
    printf("\n before fun() called..%d", n);

    if (n > 0)
    {
        fun(n - 1);
        return;
    }
    printf("\n after fun() called..%d", n);
}
int main()
{
    fun(3);
}