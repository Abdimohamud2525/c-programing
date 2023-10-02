#include <stdarg.h>
int main()
{
   ///Pääsy taulukon elementteihin
    int array[]={10,20,40,50};
    printf("%d\n",array[0]);

    //muuttaaksesi taulukon kohdetta
    int mynumbers[]={40,30,60,90};
    mynumbers[0]=300;
    printf("%d\n", mynumbers[0]);

    //Silmukka taulukon läpi
    int mynumbers2[]={50,30,60,60};
    int i;
    for(int i=0; i<10; i++)
    printf("%d\n",mynumbers2[i]);

    //Aseta taulukon koko;
    int numerot[5];
    numerot[0]=100;
    numerot[1]=200;
    numerot[2]=300;
    numerot[3]=400;
    numerot[4]=500;
    printf("%d",numerot[4]);
}
