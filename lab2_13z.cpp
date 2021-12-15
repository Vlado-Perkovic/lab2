#include <bits/stdc++.h>

using namespace std;

class Vozilo
{
private:
    string model;
    int god;

public:
    Vozilo(const string &model, int god) : model(model), god(god) {}

    Vozilo() : model("?"), god(0) {}

    ~Vozilo() {}

    const string &getModel() const
    {
        return model;
    }

    void setModel(const string &model)
    {
        Vozilo::model = model;
    }

    int getGod() const
    {
        return god;
    }

    void setGod(int god)
    {
        Vozilo::god = god;
    }

    bool operator<(const Vozilo &other) const
    {
        int i = model.compare(other.model);
        if (i == 0)
            i = god - other.god;
        if (i < 0)
            return true;
        return false;
    }
};

void Zamijeni(Vozilo &prvi, Vozilo &drugi)
{
    Vozilo v = prvi;
    prvi = drugi;
    drugi = v;
}

template <typename T>
static void SelectionSort(T A[], int N)
{
    int i, j, min;
    for (i = 0; i < N; i++)
    {
        min = i;
        for (j = i + 1; j < N; j++)
        {
            if (A[j] < A[min])
                min = j;
        }
        Zamijeni(A[i], A[min]);
    }
}

int main()
{
    int N = 5;
    Vozilo A[] = {{"Pauegot", 1981}, {"Pauegot", 1983}, {"Ranulet", 1967}, {"Fait", 1972}, {"BWM", 1985}, {"Merdesec", 1983}};
    for (int i = 0; i < N; i++)
        cout << A[i].getModel() << ", " << A[i].getGod() << endl;
    cout << endl
         << "sorting" << endl;
    SelectionSort(A, N);
    for (int i = 0; i < N; i++)
        cout << A[i].getModel() << ", " << A[i].getGod() << endl;
}
