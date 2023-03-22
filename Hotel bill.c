#include<stdio.h>
#include<stdlib.h>
int main(){

//hotel bill 
 int dish ,plate,bill;
 while(1){
 printf("enter your favourite dish (a-f)\n");
 printf("a: Samosa\n");
  printf("b: Kachori\n");
   printf("c: Idli\n");
   printf("d: chana Poha\n");
     printf("e: Dosa\n");
      printf("f: Exit\n");


 scanf("%c",&dish);
 switch(dish){
  case 'a':printf("Samosa :)\n");


        printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=15 Rs\n\n");
       bill=plate*15;
        printf("Bill: %d\n\n",bill);

 break;
   case 'b':printf("kachori\n");


        printf("enter total plate::");
        scanf("%d",&plate);
        printf("price of one plate=15 Rs\n\n");
       bill=plate*15;
        printf("Bill: %d\n",bill);

   break;
   case 'c':printf("idli\n");


        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=20 Rs\n\n");
       bill=plate*20;
        printf("Bill: %d\n",bill);

   break;
   case 'd':printf("chana poha\n");


        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=25 Rs\n\n");
       bill=plate*25;
        printf("Bill: %d\n",bill);

   break;
   case 'e':printf("Dosa\n");


        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=30 Rs\n\n");
       bill=plate*30;
        printf("Bill: %d\n",bill);



    case 'f':
        printf("Exit\n");

   exit(0);
     break;



 }

 }

}
