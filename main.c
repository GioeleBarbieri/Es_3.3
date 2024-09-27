#include <stdio.h>

int main(void)
{
    int eta;
    char nome;
    printf("inserisci l'iniziale del nome della persona e la sua eta': ");
    scanf("%s, %d",&nome,&eta);
    if ( eta >= 18){
        printf("%s e' maggiorenne", &nome);
    }
    else
    {
        printf ("%s e' minorenne", &nome);
    }
    return 0;
}
