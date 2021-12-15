#include <bits/stdc++.h>

using namespace std;

void Zamijeni(string *prvi, string *drugi)
{
    string s = *prvi;
    *prvi = *drugi;
    *drugi = s;
}

void BubbleSortPoboljsani(string A[], int N, int smjer)
{
    int i, j;
    bool swapHappened = true;
    for (i = 0; swapHappened; i++)
    {
        swapHappened = false;
        for (j = 0; j < N - 1 - i; j++)
        {
            if (smjer == 1 && A[j + 1] < A[j] || smjer == 0 && A[j + 1] > A[j])
            {
                Zamijeni(&A[j], &A[j + 1]);
                swapHappened = true;
            }
        }
    }
}

int main()
{ // ode kaze da bi trialo alocirat rezervirat memoriju za string... nez kako to napravit
    int N = 4;
    //    string A[] =  {"Ivo", "Marko", "Juraj", "Pero"};
    string *A = new string[10]{"Ivo", "Marko", "Juraj", "Pero"};

    cout << "smjer == 1 ===> sorting A - > Z" << endl;
    BubbleSortPoboljsani(A, N, 1);
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";

    cout << endl
         << endl
         << "smjer == 0 ===> sorting Z -> A" << endl;
    BubbleSortPoboljsani(A, N, 0);
    for (int i = 0; i < N; i++)
        cout << A[i] << " ";
}