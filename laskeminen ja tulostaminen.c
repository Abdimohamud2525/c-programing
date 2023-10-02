#include <stdio.h>
int main()
{
    
    int eka,toka,summa;
    
    //annetaan käytäjälle syötä lukua
    printf("Anna luku:");
    scanf("%d", &eka);

    //annetaan käytäjälle syötä toinen lukua
    printf("Anna  toinen luku:");
    scanf("%d", &toka);

    //lasketaan yhteen eka ja toka 
    summa= (eka+toka);
    printf("yhteensä se on %d ",summa );
    return 0;


}