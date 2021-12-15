#include <bits/stdc++.h>

using namespace std;

template <typename T>
void insertionSort(T A[], size_t n)
{
    size_t i, j;
    T tmp;
    for (i = 1; i < n; i++)
    {
        tmp = A[i];
        for (j = i; j >= 1 && tmp < A[j - 1]; j--)
        {
            A[j] = A[j - 1];
        }
        A[j] = tmp;
    }
}

class Osoba
{
    string name;
    unsigned short int age;

public:
    Osoba(string name, unsigned short int age) : name(name), age(age) {}
    Osoba() : name("?"), age(0) {}
    ~Osoba() {}

    const string &getName() const
    {
        return name;
    }
    unsigned short getAge()
    {
        return age;
    }

    bool operator<(const Osoba &other) const
    {
        int i = other.age - age;
        if (i == 0)
            i = other.name[0] - name[0];
        if (i < 0)
            return false;
        return true;
    }
};

int main()
{
    int N = 5;
    Osoba A[] = {{"Ana", 20}, {"Ivo", 9}, {"Marko", 9}, {"Lidija", 22}, {"Pero", 19}};
    for (int i = 0; i < N; i++)
        cout << A[i].getAge() << ", " << A[i].getName() << endl;
    cout << endl
         << "sorting" << endl;
    insertionSort(A, N);
    for (int i = 0; i < N; i++)
        cout << A[i].getAge() << ", " << A[i].getName() << endl;
}