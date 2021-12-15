#include <bits/stdc++.h>

using namespace std;

void selection2Sort(int *arr, int n, char smjer)
{
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
        int min = arr[i], max = arr[i];
        int min_i = i, max_i = i;
        for (int k = i; k <= j; k++)
        {
            if (arr[k] > max)
            {
                max = arr[k];
                max_i = k;
            }
            else if (arr[k] < min)
            {
                min = arr[k];
                min_i = k;
            }
        }
        if (smjer == '0')
        {
            // shifting the min.
            swap(arr[i], arr[min_i]);

            // Shifting the max. The equal condition
            // happens if we shifted the max to arr[min_i]
            // in the previous swap.
            if (arr[min_i] == max)
                swap(arr[j], arr[min_i]);
            else
                swap(arr[j], arr[max_i]);
        }
        else
        {
            // shifting the max.
            swap(arr[i], arr[max_i]);

            // Shifting the min. The equal condition
            // happens if we shifted the min to arr[max_i]
            // in the previous swap.
            if (arr[max_i] == min)
                swap(arr[j], arr[max_i]);
            else
                swap(arr[j], arr[min_i]);
        }
    }
}

int main()
{
    int n = 5;
    int A[n]{9, 3, 1, 5, 8};
    selection2Sort(A, n, '1');
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}
