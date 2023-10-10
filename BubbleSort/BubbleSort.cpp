#include <iostream>
using namespace std;
void BubbleSort(int x[], int l)
{
    int i, j, temp;
    for (i = 0; i < l - 1; i++)
    {
        for (j=0;j<l-i-1;j++)
        {
            if (x[j]>x[j+1])
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int kris[] = { 13,6,89,90,2,5,23,46,88,100,7 };
    int len = sizeof(kris) / sizeof(int);
    
    cout << "\nArray Kris before sorting\n";
    for (int i=0;i<len;i++)
    {
        cout << kris[i] << " ";
    }
    BubbleSort(kris, len);
    cout << "\nArray Kris after sorting\n";
    for (int i = 0; i < len; i++)
    {
        cout << kris[i] << " ";
    }
}
