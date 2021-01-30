/* SUP che prende una stringa del tipo "923D" ed estrae il numero, convertendolo in int. La lettera D è
sempre alla ne della stringa. Vericare il funzionamento anche con numeri negativi. Esistono diversi
modi per fare questa conversione, ma probabilmente la soluzione più semplice è usare il metodo nativo
C++, che è la prima soluzione proposta dal sito. */

#include <iostream>
#include <cstdlib>  //libreria per usare f atoi o atof
using namespace std;

int main (int argc, char *argv[])
{
    char stringa [4];
    cout<<"insert 3 numbers followed by letter D"<<endl;
    cin>> stringa;

    if (argc!= 4) {
        cout<<"Errore! Numero di argomenti errato"<<endl;
    }

    /*while (stringa[4] != 'D') {
        cout<<"insert three numbers followed by letter D!!"<<endl;
    } */


    int val_1 = atoi( argv[1]);
    int val_2 = atoi (argv[2]);
    int val_3 = atoi (argv [3]);

    cout<<"number is "<<val_1<<val_2<<val_3<<endl;

    return 0;



}