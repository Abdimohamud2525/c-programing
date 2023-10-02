#include <stdio.h>
int main()
{
    int kokonaisluku;
    float liukuluku;

     //kysytään käytäjälle antamaan kokonaisluku
    printf("Anna kokonainen luku");
    scanf("%d", &kokonaisluku);
    
    //kystään käytäjälle antamaan liukuluku
    printf("Anna liukuluku");
    scanf("%f", &liukuluku);
    
    //Tulostetaan komentolla printf:
    printf("Annoit kokonaisluku %d ja liukuluku %f\n" , kokonaisluku ,liukuluku);
    return 0;





   // Tässä on toinen esimerkki miten  muutaja käytetään
   int kokonaisluku;
   float desimaaliluku;

    printf("Anna kokonaisluku:");
    scanf("%d", &kokonaisluku);

    printf("Anna desimaaliluku:");
    scanf("%f", &desimaaliluku);

   printf("Syöttämäsi kokonaisluku: %d\n", kokonaisluku);
   printf("Syöttämäsi desimaaliluku kahden desimaalin tarkkuudella: %.2lf\n",desimaaliluku);
    return 0;




    ///Tässä on kolmas ohjelma muutajista 
double markat;
double kertoin = 5.94573;
double eurot;


printf("Syötä jokin markkamäärä: ");
scanf("%lf", &markat);

eurot = markat / kertoin;

printf("Markat euroina: %.2lf\n", eurot);

return 0;

} 


