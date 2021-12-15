#include <bits/stdc++.h>

using namespace std;

class Red
{
    static const int MAX = 10;
    double polje[MAX];
    int ulaz;
    int izlaz;

public:
    Red() : ulaz(0), izlaz(0){};
    ~Red() { cout << "ajbok"; }

    bool dodaj(double broj)
    {
        if ((ulaz + 1) % MAX == izlaz)
            return false;
        polje[ulaz] = broj;
        ulaz = (ulaz + 1) % MAX; //kad dodajes ulaz se dize
        return true;
    }

    bool skini(double *broj)
    {
        if (ulaz == izlaz)
            return false;

        *broj = polje[izlaz];
        izlaz = (izlaz + 1) % MAX; //kad skidas to radis s pocetka -> izlaz se podize
        return true;
    }
};

int main(void)
{
    int n = 10;
    Red r;
    double *x;

    for (int i = 0; i < n; i++)
    {
        r.dodaj(i + 1);
    } // dodaj brojeve od 1 do 10
    while (r.skini((x)))
        cout << *x << " "; //FIFO
}