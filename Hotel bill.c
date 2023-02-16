#include<stdio.h>
int main(){

//hotel bill
 int dish ,plate,bill;
 printf("enter your favourite dish (a-e)\n");
 scanf("%c",&dish);
 switch(dish){
 case 'a':printf("samosa\n");

    {
        printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=15 Rs\n\n");
       bill=plate*15;
        printf("Bill: %d",bill);
    }
   break;

   case 'b':printf("kachori\n");

    {
        printf("enter total plate::");
        scanf("%d",&plate);
        printf("price of one plate=15 Rs\n\n");
       bill=plate*15;
        printf("Bill: %d",bill);
    }
   break;
   case 'c':printf("idli\n");

    {
        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=20 Rs\n\n");
       bill=plate*20;
        printf("Bill: %d",bill);
    }
   break;
   case 'd':printf("chana poha\n");

    {
        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=25 Rs\n\n");
       bill=plate*25;
        printf("Bill: %d",bill);
    }
   break;
   case 'e':printf("Dosa\n");

    {
        printf("enter total plate: ");
        scanf("%d",&plate);
        printf("price of one plate=30 Rs\n\n");
       bill=plate*30;
        printf("Bill: %d",bill);
    }
   break;



 }

}
