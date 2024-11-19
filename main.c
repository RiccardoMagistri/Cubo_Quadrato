#include <stdio.h>
#include "prototipo.h"

    int main(void){
       char operazione;
       int ris, valore;

        printf("Inserisci [Q] per il quadrato \n"); 
        printf("Inserisci [C] per il cubo \n"); 
        scanf(" %c", &operazione);

        printf("Inserisci il valore da elaborare \n");
        scanf(" %d", &valore);

        printf("Inserisci il valore da elaborare \n");
        switch (operazione)
        {
        case 'q':
            ris = quadrato(valore);
            printf("%d * %d = %d\n", valore, valore, ris);
            break;
        case 'c':
            ris = cubo(valore);
            printf("%d * %d * %d = %d\n", valore, valore, valore, ris);
            break;
        default:
            printf("Nessuna operazione riconosciuta \n");
            break;
        }
        return 0;
    }

