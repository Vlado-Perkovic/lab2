#include <bits/stdc++.h>

using namespace std;

struct zapis
{
    int mealPass;
    string mealName;
};

bool operator>(const zapis &a, const zapis &b)
{
    return a.mealPass > b.mealPass;
}

void swap(zapis &z1, zapis &z2)
{
    zapis tmp = z1;
    z1 = z2;
    z2 = tmp;
}

void obicanBubbleSort(zapis A[], int n, char smjer)
{
   int i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (smjer == '0' ? A[j + 1] > A[j] : A[j] > A[j + 1])
            {
                swap(A[j + 1], A[j]);
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    zapis arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i].mealPass >> arr[i].mealName;
    char s;
    cin >> s;
    obicanBubbleSort(arr, n, s);
    for (int i = 0; i < n; i++)
        cout << arr[i].mealPass << " " << arr[i].mealName << endl;
    return 0;
}
