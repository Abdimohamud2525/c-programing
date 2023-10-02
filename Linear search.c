#include <stdio.h>

// Lineaarisen haun suorittava toiminto
int linearsearch(int array[],int size[],int x[]){
// Iteroi luettelon läpi    
for(int i=0; i<size; i++){
if(array[i]==x){
    return i;
}  
    
}
// Palauta -1, jos elementtiä ei löydy
return -1;

}
int main()
{
    //testitaulukko
    int array[]={1,2,3,4,5,6,7};
    int size= sizeof(array)/sizeof array[0];
 
    // Haettava elementti
    int x=2;

    //suorita haku
   int result=linearsearch(array,size,x);
   if(result==-1){
    //tulosta tulos
    printf("Elementti ei ole luettelossa.\n");
   }else{
    //suorita tulos
    printf("valinta on luetelussa:%d",result);
   }
   //palauta 0 arvo
   return 0;


}
