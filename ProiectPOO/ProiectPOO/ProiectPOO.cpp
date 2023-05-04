#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cstdlib>
using namespace std;

class Film {
public:
    string nume;
    string gen;
    double imdb_rating;
    long vizionari_cinema;
    double nota_critici;
    int durata_min;
    //constructor
    Film(string nume1 = " ", string gen1 = " ", double imdb_rating1 = 0, long vizionari_cinema1 = 0, double nota_critici1 = 0, int durata_min1 = 0)
        : nume(nume1), gen(gen1), imdb_rating(imdb_rating1), vizionari_cinema(vizionari_cinema1), nota_critici(nota_critici1), durata_min(durata_min1) {}
    //destructor
    ~Film() {
        cout << "Obiectul " << nume << " a fost distrus" << endl;
    }

    void citire();
    void afisare(const vector<Film>& filme) const;
    //functie friend
    friend void ordinea_rating(const vector<Film>& filme);
};

void Film::citire() {
    cout << "Introduceti numele filmului: ";
    if (cin.peek() == '\n') {                  //pentru a afisa numele cu spatiu si prima litera
        cin.ignore();
    }
    getline(cin, nume);
    cout << "Genul: ";
    cin >> gen;
    cout << "Ratingul imdb: ";
    cin >> imdb_rating;
    cout << "Vizionari cinema: ";
    cin >> vizionari_cinema;
    cout << "Nota critici: ";
    cin >> nota_critici;
    cout << "Durata filmului (min): ";
    cin >> durata_min;
    cout << endl << endl;
}

void Film::afisare(const vector<Film>& filme) const {
    string temp;
    for (size_t i = 0; i < filme.size(); i++) {

        cout << "Filmul numarul " << i + 1 << ": " << endl;
        cout << "Numele filmului: " << filme[i].nume << endl;
        cout << "Genul: " << filme[i].gen << endl;
        cout << "Ratingul imdb: " << filme[i].imdb_rating << endl;
        cout << "Vizionari cinema: " << filme[i].vizionari_cinema << endl;
        cout << "Nota critici: " << filme[i].nota_critici << endl;
        cout << "Durata filmului (min): " << filme[i].durata_min << endl;
        cout << endl << endl;
    }
    cout << "Inapoi (orice tasta):";
    cin >> temp;
    system("cls");
}


void calculeaza_vizionari_primele_2(const vector<Film>& filme) {
    string temp;
    long suma_vizionari = 0;
    for (size_t i = 0; i < filme.size() && i < 2; i++) {
        suma_vizionari += filme[i].vizionari_cinema;
    }
    cout << "Suma vizionarilor primelor 2 filme este de : " << suma_vizionari << endl << endl << endl;

    cout << "Inapoi (orice tasta):";
    cin >> temp;
    system("cls");
}


void ordinea_rating(const vector<Film>& filme) {
    cout << "Ordinea filmelor in functie de ratingul Imdb: " << endl;
    string temp;
    vector<size_t> indices(filme.size());
    for (size_t i = 0; i < filme.size(); ++i) {
        indices[i] = i;
    }

    sort(indices.begin(), indices.end(), [&filme](size_t i, size_t j) { return filme[i].imdb_rating < filme[j].imdb_rating; });

    for (size_t i = 0; i < filme.size(); i++) {
        cout << filme[indices[i]].nume << " - " << filme[indices[i]].imdb_rating << endl;
    }

    cout << endl << endl << "Inapoi (orice tasta):";
    cin >> temp;
    system("cls");

}

int main() {
    vector<Film> filme(3);
    
    int ok = 0;
    cout << "********************************PROIECT POO**************************************" << endl << endl;
    for (int i = 0; i < 3; i++) {

        cout << "Introduceti date pentru filmul numarul " << i + 1 << "." << endl;
        filme[i].citire();
    }
    system("cls");
    while (ok != 4)
    {
        cout << "Alegeti o optiune: " << endl << endl;
        cout << "1. Afisarea filmelor." << endl;
        cout << "2. Suma vizionarilor primelor 2 filme." << endl;
        cout << "3. Ordinea filmelor in functie de rating-ul IMDB." << endl;
        cout << "4. Iesirea din program si distrugerea obiectelor" << endl;
        cout << endl << "Optiunea: ";
        cin >> ok;

        if (ok == 1)
        {
            system("cls");
            filme[1].afisare(filme);
        }
        else if (ok == 2)
        {
            system("cls");
            calculeaza_vizionari_primele_2(filme);
        }
        else if (ok == 3)
        {
            system("cls");
            ordinea_rating(filme);
        }
        else if (ok == 4)
        {
            return 0;
        }
        else
            cout << "Pagina selectata nu exista! (Reintroduce-ti numarul paginii).";
    }



}
