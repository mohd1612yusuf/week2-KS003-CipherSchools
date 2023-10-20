#include <iostream>
using namespace std;
void minandmax(int *a, int *min, int *max)
{
    *min = 1;
    *max = 5;
}
int main()
{
    int a[5];
    int i;
    int small = a[0], large = a[0];
    for (i = 1; i < 6; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
        if (a[i] < small)
        {
            small = a[i];
        }
    }
    minandmax(a, &min, &max);
    return 0;
}