#include <stdlib.h>
#include <stdio.h>
int main()
{
   // Heksadesimaalilukujärjestelmä on lukujärjestelmä, joka käyttää kantalukua 16,
     //toisin kuin desimaalijärjestelmässä käytettävä 10 kantalukujärjestelmä. 
    // Heksadesimaalilukuja ovat numerot 0–9 sekä kirjaimet A, B, C, D, E ja F.

    //char hex_string[]="2a8";
    //long int desimal;
    //desimal=strtol(hex_string,NULL,16);
    //printf("%ld",desimal);
    //return 0;


    //2.C-ohjelmoinnissa osoitin on muuttuja, joka tallentaa toisen muuttujan 
    //muistiosoitteen. Osoittimien avulla voit käsitellä muistia suoraan, 
    //mikä voi olla hyödyllistä monenlaisissa tehtävissä, kuten dynaamisessa
    // muistin varaamisessa ja tietorakenteiden, kuten linkitettyjen luetteloiden
    // ja puiden, hallinnassa.
    //Osoitin ilmoitetaan asettamalla tähti (*) muuttujan nimen eteen, kuten:
    
    //int n=5;
    //int *pointer;
    //pointer=&n;
    //printf("value of n%i",*pointer);



    

    typedef int MyType;
    MyType x = 5;
    typedef struct {
    double x;
    double y;
   } Point;
   Point p1,p2;
   p1.x = 1;
   p1.y = 2;
   Point *ptr;
 ptr = &p1;
 printf("%lf, %lf", ptr->x, ptr->y);
 typedef int (*FuncPtr)(int, int);
FuncPtr add = &add;








}

    