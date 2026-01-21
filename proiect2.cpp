#include <iostream>
using namespace std;
#define NMAX 100
// interfata programului
int min_salariu(int salarii[], int nr_angajati);
int max_salariu(int salarii[], int nr_angajati);
double medie_salariu(int salarii[], int nr_angajati);
void aranjare_salariu(int salarii[], int nr_angajati);
void rotire_salariu(int salarii[], int nr_angajati);
int cautare_salariu(int salarii[], int nr_angajati, int valoare); //intoarce pozitia, -1 daca nu e gasit
void inserare_salariu(int salarii[], int &nr_angajati, int valoare);
void stergere_salariu(int salarii[], int &nr_angajati, int valoare);
void clasificare_salariu(int salarii[], int nr_angajati);
int citire_salarii(int salarii[]);
void afisare_salarii(int salarii[], int nr_angajati);



int main() {
cleanscreen();
    int option;
    int nr_angajati =20;
    int salarii[NMAX] = {3000, 4500, 7000, 12000, 15000, 8000, 9500, 11000, 4000, 6000,
                           13000, 14000, 2000, 5000, 16000, 17000, 18000, 19000, 21000, 22000};
do {
    system("cls");
    cout << "Proiect #2, elaborat, st. gr. IS11R, Cojocari Mihai.";
    cout <<" \n 1„. De determinat cel mai mic si cel mai mare salariu." ;
    cout <<" \n 2„. media" ;
    cout <<" \n 3„. aranjare" ;
    cout <<" \n 4„. rotire" ;
    cout <<" \n 5„. cautare" ;
    cout <<" \n 6„. inserare" ;
    cout <<" \n 7. stergere" ;
    cout <<" \n 8. clasificare" ;
    cout <<" \n 0. stop";
    cout <<" \n\n\t Alege -->";
    cin >> option;

    switch (option) {
        case 1:
            cout << "Cel mai mic salariu este: " << min_salariu(salarii, nr_angajati) << endl;
            cout << "Cel mai mare salariu este: " << max_salariu(salarii, nr_angajati) << endl;
            break;
        case 2:
            cout << "Media salariilor este: " << medie_salariu(salarii, nr_angajati) << endl;
            break;
        case 3:
            aranjare_salariu(salarii, nr_angajati);
            cout << "Salariile au fost aranjate." << endl;
            break;
        case 4:
            rotire_salariu(salarii, nr_angajati);
            cout << "Salariile au fost rotite." << endl;
            break;
        case 5: {
            int valoare;
            cout << "Introduceti salariul de cautat: ";
            cin >> valoare;
            int pozitie = cautare_salariu(salarii, nr_angajati, valoare);
            if (pozitie != -1)
                cout << "Salariul gasit la pozitia: " << pozitie << endl;
            else
                cout << "Salariul nu a fost gasit." << endl;
            break;
        }
        case 6: {
            int valoare;
            cout << "Introduceti salariul de inserat: ";
            cin >> valoare;
            inserare_salariu(salarii, nr_angajati, valoare);
            cout << "Salariul a fost inserat." << endl;
            break;
        }
        case 7: {
            int valoare;
            cout << "Introduceti salariul de sters: ";
            cin >> valoare;
            stergere_salariu(salarii, nr_angajati, valoare);
            cout << "Salariul a fost sters daca exista." << endl;
            break;
        }
        case 8:
            clasificare_salariu(salarii, nr_angajati);
            break;
        case 0:
            cout << "Programul se opreste." << endl;
            break;
        default:
            cout << "Optiune invalida. Incercati din nou." << endl;
    }
} while (option);
    
    getchar();
    return 0;
}

int min_salariu(int salarii[], int nr_angajati) {

    return 1;
}


int max_salariu(int salarii[], int nr_angajati) {

    return 1;
}


double medie_salariu(int salarii[], int nr_angajati) {

    return 1;
}


void aranjare_salariu(int salarii[], int nr_angajati) {

}


void rotire_salariu(int salarii[], int nr_angajati) {

}


int cautare_salariu(int salarii[], int nr_angajati, int valoare) { //intoarce pozitia, -1 daca nu e gasit

    return 1;
}


void inserare_salariu(int salarii[], int &nr_angajati, int valoare) {

}


void stergere_salariu(int salarii[], int &nr_angajati, int valoare) {

}


void clasificare_salariu(int salarii[], int nr_angajati) {

}


int citire_salarii(int salarii[]) {

}


void afisare_salarii(int salarii[], int nr_angajati) {

}