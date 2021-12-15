#include <bits/stdc++.h>

using namespace std;

// void selection2Sort(int A[], int n, char smjer)
// {
//     for (int i = 0; i < n / 2; i++)
//     {
//         int min = i, max = n - 1 - i, tmin, tmax;
//         for (int j = i; j < n - i; j++)
//         {
//             if (A[min] > A[j])
//                 min = j;
//             if (A[max] < A[j])
//                 max = j;
//         }
//         int smaller = smjer == '0' ? i : n - 1 - i;
//         int larger = smjer == '0' ? n - 1 - i : i;
//         tmin = A[min];
//         tmax = A[max];
//         A[min] = A[smaller];
//         A[max] = A[larger];
//         A[smaller] = tmin;
//         A[larger] = tmax;
//     }
// }

void selection2Sort(int A[], int n, char smjer)
{
    int i, j, min, max;
    for (i = 0; i < n / 2; i++)
    {
        min = i;
        max = n - 1 - i;
        int tmin, tmax;
        for (j = i; j < n - i; j++)
        {
            if (A[j] < A[min])
                min = j;
            if (A[j] > A[max])
                max = j;
        }
        //swap
        // int tmp = A[i];
        // A[i] = A[min];
        // A[min] = tmp;

        // tmp = A[n - 1 - i];
        // A[n - 1 - i] = A[max];
        // A[max] = tmp;
        int smaller = smjer == '0' ? i : n - 1 - i;
        int larger = smjer == '0' ? n - 1 - i : i;
        tmin = A[min];
        tmax = A[max];
        A[min] = A[smaller];
        A[max] = A[larger];
        A[smaller] = tmin;
        A[larger] = tmax;
    }
}

int main()
{
    int n = 5;
    int A[n]{9, 3, 1, 5, 8};
    selection2Sort(A, n, '0');
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}