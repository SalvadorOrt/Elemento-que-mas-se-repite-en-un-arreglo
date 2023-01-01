
#include <iostream>
#include<conio.h>
using namespace std;
int main() {
    int arreglo[] = {1,2,5,4,4,5,5,5,5,5};
    int c = 0, max = 0,i = 0;      
    bool band = false;
    int copia[15];
    for (int i = 0; i < 10; i++) {
        c = 0;
        for (int j = 0; j < 10; j++) {
            if (arreglo[i] == arreglo[j])
                c++;
        }
        copia[i] = c;
    }
    for (int i = 0; i < 10; i++)
        cout << copia[i]<<" ";
    for (int i = 0; i < 10; i++) {
        if (max == 0 || copia[i] > max)
            max = copia[i];
    }
    cout <<"mayor " << max << endl;
    i = 0;
    while (band == false && i < 10) {
        if (copia[i] == max)
            band = true;
        i++;
    }
    cout <<"pos: " << arreglo[i-1];
    return 0;
}

