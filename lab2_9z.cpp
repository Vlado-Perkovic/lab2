#include <bits/stdc++.h>

using namespace std;

struct Zapis
{
    int postBroj;
    char placeName;
};

void insertionSort(Zapis A[], int n, bool smjer)
{
    int i, j;
    Zapis tmp;

    for (i = 1; i < n; i++)
    {
        tmp = A[i];
        if (smjer)
        {
            for (j = i; j >= 1 && A[j - 1].postBroj < tmp.postBroj; j--)
            {
                A[j] = A[j - 1];
            }
        }
        else
        {
            for (j = i; j >= 1 && A[j - 1].postBroj > tmp.postBroj; j--)
            {
                A[j] = A[j - 1];
            }
        }
        A[j] = tmp;
    }
}

int main()
{
    int n;
    cin >> n;
    Zapis a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].postBroj >> a[i].placeName;
    }

    cout << "smjer?" << endl;
    bool smjer;
    cin >> smjer;
    insertionSort(a, n, smjer);

    for (int i = 0; i < n; i++)
    {

        cout << a[i].postBroj << " " << a[i].placeName << endl;
    }
}