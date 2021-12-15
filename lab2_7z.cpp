#include <bits/stdc++.h>

using namespace std;

class Red
{
    struct Cvor
    {
        Cvor *next;
        double broj;
    };

    Cvor *ulaz;
    Cvor *izlaz;

public:
    Red() : ulaz(nullptr), izlaz(nullptr){};
    ~Red() { cout << "ajbok"; }

    bool dodaj(double broj)
    {
        Cvor *c = new (nothrow) Cvor{nullptr, broj};
        if (!c)
            return false;

        if (ulaz == nullptr)
            izlaz = c;

        else
            ulaz->next = c;

        ulaz = c;

        return true;
    }

    bool skini(double *broj)
    {
        if (!izlaz)
            return false;
        *broj = izlaz->broj;
        Cvor *tmp = izlaz;
        izlaz = izlaz->next;
        if (!izlaz)
            ulaz = nullptr;
        delete tmp;
        return true;
    }
};

int main()
{
    int n;

    Red r;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        double broj;
        cin >> broj;
        r.dodaj(broj);
    }
    double *x;
    while (r.skini(x))
        cout << *x << " ";
}