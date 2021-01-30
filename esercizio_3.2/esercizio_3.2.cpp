/* SUP che prende una stringa dall'utente che può essere anche una frase, comprensiva quindi di spazi e
punteggiatura. Il programma ristampa la stessa stringa al contrario. */

#include <cstring>
#include <iostream>
using namespace std;
#define N 20
int main()
{
    char frase[N];
    cout << "inserire frase" << endl;
    cin.getline(frase, N);

    for (int i = strlen(frase); i >= 0; i--) {
        cout << frase[i];
    }

    return 0;
}
