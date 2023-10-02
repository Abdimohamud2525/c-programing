//Tee yksinkertainen laskinohjelma, joka laskee kahden luvun erotuksen,
// summan tai tulon. Ohjelma kysyy ensin mikä laskutoimitus suoritetaan.
//  Tämän jälkeen ohjelma kysyy luvut, suorittaa laskutoimituksen ja tulostaa
  // saadun tuloksen. Ohjelman valinta on tehtävä käyttämällä switch()-lausetta.
#include <stdio.h>
int main(void)
{
  int operator;
  double num1,num2;
   
   //kysytään käytäjelle valitsemaan toiminta
  printf("1:vähennys lasku,2: yhteen lasku 3: kertolasku:4: jakolasku)\n");
  printf("valitse toiminta");
  scanf("%d",&operator);
  
  
  //kysytään käytäjälle valitsemaan eka lukua
  printf("Anna eka luku");
  scanf("%lf",&num1);
  
  //tokam lukua
  printf("Anna toka luku");
  scanf("%lf",&num2);

  //nyt käytetään swich element niin if tai else tillal:
  switch (operator){
   case 1:
   printf("%.2lf-2lf= %.2lf\n",num1,num2,num1-num2) ;
   break;
   case 2:
   printf("%.2lf+2lf= %.2lf\n",num1,num2,num1+num2) ;
   break;
   case 3:
   printf("%.2lf*2lf= %.2lf\n",num1,num2,num1*num2) ;
   break;
   case 4:
   printf("%.2lf/2lf= %.2lf\n",num1,num2,num1/num2) ;
   break;
   default:
   printf("tarkista ohjelmasi ");
  }
  return 0;

} 




