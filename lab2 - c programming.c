#include <stdio.h>

int main() {

   int rows, j, i;
   /*get value*/
   printf("input an integer value :") ;
   scanf("%d",&rows);

   if(rows>12) {
       printf("Please put an integer value less than 12");
   }

    else if(rows<5) {
        /*rows*/
        for(i=1;i<=rows;i++) {
            /*columns*/
            for(j=1;j<=i;j++) { /*print*/
                printf("%d",rows);
            } /*spaces*/
            for(j=i;j<rows;j++) {
                printf(" ");
            } /*next line*/
            printf("\n");
        }
    }

    else { /*rows*/
      for(i=1;i<=rows;i++) {
          /*columns*/
          for(j=1;j<=rows;j++) { /*print*/
              printf("%d",rows);
          } /*next line*/
          printf("\n");
      }
    }


  return 0;

}
