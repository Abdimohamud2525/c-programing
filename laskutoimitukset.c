//Tee ohjelma, joka kysyy käyttäjältä kaksi kokonaislukua ja tulostaa lukujen 
//summan, erotuksen ja tulon näytölle.  
#include <stdio.h>
int main()
{
    int num1,num2;

    //kysytään käytäjältä syötämään kokonaislukuaprintf
    printf("Anna kokonaisluku:");
    scanf("%d",&num1);
    printf("Anna toinen kokonaisluku:");
    scanf("%d",&num2);
   
   //lasketaan summa erotuksen ja kertoin
   int summa=(num1+num2);
   int erotukset=(num1-num2);
   int tuloa=(num1*num2);

   //tulostetaan näytöllä tulosta;
   printf("%d-%d=%d\n",num1,num2,summa);
   printf("%d-%d=%d\n",num1,num2,erotukset);
   printf("%d-%d=%d\n",num1,num2,tuloa);


   //tehtävä2
   //tee ohjelma, joka pyytää käyttäjältä kokonaisluvun ja tarkistaa, onko luku 
   //parillinen vai pariton. Jos syötetty luku on parillinen, tulostetaan arvo 0, 
   //jos luku on pariton, tulostetaan arvo 1.
   
   int number;

   printf("Anna  kokonaisluku");
   scanf("%d",&number);

   if(number%2==0)
   {
      printf("tulos on 0\n");
   }else
   {
     printf("tulos on 1\n");
   }
   
   return 0;

}
