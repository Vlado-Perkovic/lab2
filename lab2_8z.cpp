#include <bits/stdc++.h>

using namespace std;

struct Cvor
{
    double data;
    Cvor *next;
};

class Red
{

private:
    Cvor *izlaz;
    Cvor *ulaz;

public:
    Red() : izlaz(nullptr), ulaz(nullptr) {}
    ~Red() {}
    bool dodaj(double broj)
    {
        Cvor *c = new (nothrow) Cvor{broj, nullptr};
        if (!c)
            return false;
        if (!ulaz)
            izlaz = c;
        else
            ulaz->next = c;
        ulaz = c;
        return true;
    }

    //    bool skini (double *broj) {
    //        if (!izlaz) return false;
    //        *broj = izlaz->data;
    //        Cvor *c = izlaz;
    //        izlaz = izlaz->next;
    //        if (!izlaz) ulaz = nullptr;
    //        delete c;
    //        return true;
    //    }
    bool poljeURed(double polje[], int n)
    {
        if (n == 0)
            return true;
        cout << polje[n - 1] << " ";
        if (!this->dodaj(polje[n - 1]))
            return false;
        poljeURed(polje, n - 1);
    }
};