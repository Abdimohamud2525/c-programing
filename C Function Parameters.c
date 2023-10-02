#include <stdarg.h>
//Palautusarvot
int myfuction(int x){
  return 20+x;

}
int main(){
  printf("tulos on%d",myfuction(10));
  return 0;
}

//Anna taulukot funktioparametreiksi .for loops
//void myfunction(int mynumbesr[5]){
//for(int i=0; i<5; i++){
  //  printf("%d\n",mynumbesr[i]);
//}

//}
//int main()
//{
 // int mynumbers[5]={10,20,40,40,50};
 // myfunction(mynumbers);
 // return 0;

//}



//Useita parametreja
///void myfunction(char name[], int age []){
 //   printf("Hello %s. you are %d year old\n",name,age);
//}

//int main()
//{
   // myfunction("maxamud" ,20);
   // myfunction("maxamed" ,19);
  //  myfunction("cabdi" ,28);
  //  return 0;
    
//}
//Parametrit ja argumentit
//void myfunction(char name[]){
    //printf("Hello %s\n",name);
//}
//int main()
//{
 // myfunction("maxamud");
 // myfunction("maxamed");
 // myfunction("cabdi");
 // return 0;
//}