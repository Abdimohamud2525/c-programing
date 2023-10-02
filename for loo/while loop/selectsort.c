#include <stdio.h>
//Valintalajittelu on algoritmi, joka lajittelee taulukon etsimällä toistuvasti 
//minimielementin (nousevassa järjestyksessä) taulukon lajittelemattomasta osasta ja
//sijoittamalla sen sitten taulukon lajittelemattoman osan alkuun. 
// Tässä on esimerkki siitä, kuinka valintalajittelu voidaan toteuttaa C:ssä:
 
 // valintalajittelu  suorittava toiminto
void valintalajittelu(int array[],int size){

// Iteroi luettelon läpi  
for(int i=0; i<size-1;i++){
   int  min_index=i;
   for(int j=i+1;j<size; j++){
    if(array[j]<array[min_index]){
        min_index=j;
    }
   }
   int temp=array[i];
   array[i]=array[min_index];
   array[min_index]=temp;

}

}
int main()
{
    //testitaulukko
    int array[]={8,7,6,5,4,3,2,1};
    int size=sizeof(array)/sizeof array[0];
    
    //suorita haku
    valintalajittelu(array,size);
     
     //suorita tulos
    for(int i=0; i<size; i++){
        printf("%d\n",array[i]);
    }
    return 0;
}