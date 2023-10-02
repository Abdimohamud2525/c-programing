#include <stdio.h>
int main(void) {
char kirja;
  int määrä;

  printf("luotko kirjoja(k/e)");
  scanf("%c",&kirja);
  printf("kuinka monta kirja luet kuukaudessa");
  scanf("%d", &määrä);

  if(kirja=='k'){
  if(määrä>0 &&määrä<=2){
   printf("Yritä luke enemmän kirjoja");
  }else if(määrä>2 &&määrä<=5){
   printf("Hyvää luet kirjoja ");
  }else if(määrä>=5 &&määrä<=10){
   printf("olet nörtti luet paljon kirjoja, jatka sama malli");
  }else{
   printf("ohjelmasi ei toimii oikein, yritä seurata ohjeet");
  }
  }else if(kirja=='e'){
    printf("ooh noo, oletko tosissa yritä nyt luke kirja ");
  }else{
   printf("ohjelmasi ei toimii oikein");
  }
 return 0;
}


  int operation;
  int num1, num2;
  int result;

  printf("1: vähennyslasku\n2: yhteenlasku\n3: kertolasku\n");
  printf("Valitse toiminto: ");
  scanf("%d", &operation);

  printf("Anna eka luku: ");
  scanf("%d", &num1);

  printf("Anna toka luku: ");
  scanf("%d", &num2);

  switch (operation) {
    case 1:
      result = num1 - num2;
      printf("%d - %d = %d\n", num1, num2, result);
      break;
    case 2:
      result = num1 + num2;
      printf("%d + %d = %d\n", num1, num2, result);
      break;
    case 3:
      result = num1 * num2;
      printf("%d * %d = %d\n", num1, num2, result);
      break;
    default:
      printf("Virheellinen valinta\n");
      break;
  }

  return 0;
}

