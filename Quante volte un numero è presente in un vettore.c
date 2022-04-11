#include <stdio.h>
#include <stdlib.h>
#define N 10

int main()
{
    int vettore[N];
    int i;
    int x;
    int volte;
    
    for(i=0; i<N; i++)
    {
    printf("Inserisci un numero: ");
    scanf("%d", &vettore[i]);
    }
  volte=0;  
  printf("Quale numero vorresti controllare?: ");
  scanf("%d", &x);
    
    for(i=0; i<N; i++)
    {
        if(vettore[i]==x)
        {
            volte++;
        }
    }
    if(volte>=2 || volte==0)
    {
        printf("Il numero e' presente: %d volte", volte);
    }
    else if(volte=1)
    {
    printf("Il numero e' presente: %d volta", volte);
    }
}
