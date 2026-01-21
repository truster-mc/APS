 #include <iostream>
#include <string>
#define IMP_VENIT 0.12
#define FOND_SOCIAL 0.24
#define ASIG_MEDICALA 0.09


using namespace std;

int main() {


    int nr_angajati;
    string nume_angajat;
    string prenume_angajat;
    int salariu;
    int maxim, minim;
    double med;
    int valoare = 10000, mici, egale, mari, de_mai_adaugat_ceva_pentru_nota_mai_mare;
    double salariu_net;
    double profit;

    // clasificare salarii
    // 

    cout << "Proiect #1, elaborat, st. gr. IS11R, Cojocari Mihai." << endl;
    cout << "Tema: Salariul angajatilor" << endl;



    cout << "==================START======================" << endl;
    cout << "Introduceti numarul de angajati: " << endl;
    cin >> nr_angajati;
    cout << "========================================" << endl;
    cout << "Introduceti numele angajatului" << endl;
    cout <<"========================================" << endl;
    cin >> nume_angajat;

    cout << "Introduceti prenumele angajatului" << endl;
    cin >> prenume_angajat;

    cout << "========================================" << endl;
    cout << "Introduceti salariul angajatului" << endl;
    cin >> salariu;

    cout << "========================================" << endl;
    cout << "Salariul angajatului " << nume_angajat << " " << prenume_angajat << " este de " << salariu << endl;

    if (salariu <= 10000) {
        cout << "Salariul este mic." << endl;
    }
    else if (salariu == 10000) {
        cout << "Salariul este egal cu 10000." << endl;
    }
    else {
        cout << "Salariul este mai mare." << endl;
    }

    return 0;
}   