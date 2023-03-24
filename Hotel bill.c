#include<stdio.h>
#include<stdlib.h>
int main(){
    int option,plate,bill;

   // char ch;
    while(1)
    {

        printf("select any one dish ");
        printf("\n1.samosa\n2.kachori");
          printf("\n3.idli\n4.dosa");
           printf("\n5.Exit\n");
            printf("Choose one option:\n");
            scanf("%d",&option);
            switch(option)
            {
            case 1:
                printf("samosa\n");
                printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=15 Rs\n\n");
       bill=plate*15;
        printf("Bill: %d\n\n",bill);
        break;

            case 2:
                printf("Kachori\n");
      printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=20 Rs\n\n");
       bill=plate*20;
        printf("Bill: %d\n\n",bill);
        break;
                case 3:
                    printf("idli\n");
                printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=25 Rs\n\n");
       bill=plate*25;
        printf("Bill: %d\n\n",bill);
        break;

                case 4:
             printf("dosa\n");
              printf("enter total plate:");
        scanf("%d",&plate);
        printf(" price of one plate=30 Rs\n\n");
       bill=plate*30;
        printf("Bill: %d\n\n",bill);
        break;
                case 5:
                printf("exited\n");

                exit(0);
                break;

          }
    }

}


