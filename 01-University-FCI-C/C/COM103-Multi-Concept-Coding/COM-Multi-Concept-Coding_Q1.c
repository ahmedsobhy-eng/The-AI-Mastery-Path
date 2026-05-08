#include <stdio.h>

struct product{
       int id;
       int price;
};

void sortproducts(struct product pp[],int n){

       for (int i = 0; i < n - 1;i++){
              for (int j = 0; j < n - i - 1;j++){

                     if (pp[j].price>pp[j+1].price){
                            struct product temp=pp[j];
                            pp[j] = pp[j+1];
                            pp[j + 1] = temp;
                     }
              }
       }
}

void savetofile(struct product pp[],int n){

       FILE *ftpr = fopen(" inventory.txt ", "w");
       if (ftpr==NULL){
              printf("error opening file \n");
              return;
       }
       fprintf(ftpr, "Id\tprice\n");
       for (int i = 0; i < 3;i++){
              fprintf(ftpr, "%d\t%d\n", pp[i].id, pp[i].price);
       }
       fclose(ftpr);
}

int main(){

       struct product p[3];
       printf("enter your id product then price \n");
       for (int i = 0; i < 3;i++){

              scanf("%d%d",&p[i].id,&p[i].price);
       }
       sortproducts(p, 3);
       savetofile(p, 3);
       return 0;
}