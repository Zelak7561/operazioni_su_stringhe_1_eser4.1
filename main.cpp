/*
• Senza usare le funzioni di libreria string.h, scrivere un programma che
esegua le seguenti operazioni sulle stringhe.
   • Legga dallo stdin due stringhe s1 e s2 e le visualizzi.

   • Calcoli la lunghezza delle due stringhe.

   • Confronti s1 e s2 assegnando alla variabile risultato_confronto il valore <0
      se s1<s2, 0 se s1==s2, >0 se s1>s2.

   • Copi la stringa s1 nella stringa s3 e la stringa s2 nella stringa s4.

   • Concateni le stringhe s3 e s4.

NB: Si consideri una stringa come un array di caratteri che ha il carattere
terminale \0

 */

#include <iostream>

using namespace std;

int main() {
    char str1[20] = "";
    char str2[20] = "";

    //Stringhe copia
    char str3_1[20] = "";
    char str4_2[20] = "";

    //Stringa concatenata
    char str5[40] = "";

    int len1 = 0;
    int len2 = 0;
    int risultato_confronto = 0;

    //Input
    cout << "Inserire la str1 " << endl;
    cin >> str1;

    cout << "Inserire la str2 " << endl;
    cin >> str2;


    //Calcolo lunghezze
    for (int i = 0; str1[i] != '\0'; i++) {
        len1++;
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        len2++;
    }

    //controllo lunghezze
    if (len2 > len1) {
        risultato_confronto = -1;
    }
    if (len2 == len1) {
        risultato_confronto = 0;
    }
    if (len1 > len2) {
        risultato_confronto = 1;
    }


    //Copia stringhe
    for (int i = 0; str1[i] != '\0'; i++) {
        str3_1[i] = str1[i];
    }

    for (int i = 0; str2[i] != '\0'; i++) {
        str4_2[i] = str2[i];
    }


    //Concatene stringhe
    int i , j;
    for (i = 0; str3_1[i] != '\0'; i++) {
        str5[i] = str3_1[i];
    }

    for (j = 0; str4_2[j] != '\0'; j++) {
        str5[i + j] = str4_2[j];
    }

    //Stampa
    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa str1: " << str1 << " | Dimensione: " << len1 << endl;
    cout << "la stringa str2: " << str2 << " | Dimensione: " << len2 << endl;
    cout << "|------------------------------------------------------|" << endl;
    switch (risultato_confronto) {
        case -1:
            cout << "La stringa str2 e maggiore di str1" << endl;
            break;
        case 0:
            cout << "La stringa str1 e uguale a str1" << endl;
            break;
        case 1:
            cout << "La stringa str1 e maggiore di str2" << endl;
            break;
    }
    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa copia str1: " << str3_1 << endl;
    cout << "la stringa copia str2: " << str4_2 << endl;
    cout << "|------------------------------------------------------|" << endl;
    cout << "la stringa concatenata str5: " << str5 << endl;
    cout << "|------------------------------------------------------|" << endl;
    return 0;
}
