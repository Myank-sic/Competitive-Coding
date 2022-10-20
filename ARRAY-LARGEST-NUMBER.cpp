#include <iostream>
using namespace std;
int main()
{
    int A[] = {2, 4, 6, 8, 10}, max;
    for (int i = 0; i < 5; i++)
    {
        if (A[i] > A[i + 1])
        {
            max = A[i];
        }
        else
        {
            max = A[i + 1];
        }
    }
    cout << "Max = " << max << endl;

    return 0;
}