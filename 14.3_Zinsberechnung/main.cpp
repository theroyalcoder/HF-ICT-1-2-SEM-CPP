#include <iostream>
using namespace std;

double zinsberechnung(double *betrag, double *zins, double *rueckzahlung, double *zinsbetrag, double *zinstot, int *anzJahre){
    for (int i = 0; i < *anzJahre; i++) {
        *zinsbetrag = *betrag / 100 * *zins;   //Jahreszins
        *betrag -= *rueckzahlung;
        *zinstot += *zinsbetrag;  //Totalen Zins nach n Jahren

        cout << "Schuldbetrag " << i + 1 << ". Jahr: CHF " << *betrag << ". Ergibt: CHF " << *zinsbetrag << " Zins" << endl;
    }
    return *betrag;
}

int main() {
    double betrag(200), zins(12), rueckzahlung(10), zinsbetrag(0), zinstot(0);
    int anzJahre(8);

    double *pBetrag, *pZins, *pRueckzahlung, *pZinsbetrag, *pZinstot;
    int *pAnzJahre;

    pBetrag = &betrag;
    pZins = &zins;
    pRueckzahlung = &rueckzahlung;
    pZinsbetrag = &zinsbetrag;
    pZinstot = &zinstot;
    pAnzJahre = &anzJahre;

/*
    double betrag(0), zins(0), rueckzahlung(0), zinsbetrag(0);
    int anzJahre(0);

    cout << "Kreditbetrag in CHF: ";
    cin >> betrag;

    cout << "Laufzeit in Jahren: ";
    cin >> anzJahre;

    cout << "Zins pro Jahr in %: ";
    cin >> zins;

    cout << "Rü̈ckzahlung pro Jahr in CHF: ";
    cin >> rueckzahlung;
*/
    zinsberechnung(pBetrag, pZins, pRueckzahlung, pZinsbetrag, pZinstot, pAnzJahre);

    cout << "Der totale Zins über die gesamte Laufzeit beträgt: " << zinstot << endl;
    cout << "Der totale Rückzahlungsbetrag des Kunden beträgt: " << betrag + (rueckzahlung * anzJahre) + zinstot << endl;

    return 0;
}