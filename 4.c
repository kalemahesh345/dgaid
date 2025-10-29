# include <stdio.h>


   int main   ()
   {
     int e,b,m,p,c;

         printf("Enter the marc of english: ");
          scanf(" %d",&e);
           printf("Enter the marc of biology: ");
          scanf(" %d",&b);
          printf("Enter the marc of math: ");
          scanf(" %d",&m);
          printf("Enter the marc of physics: ");
          scanf(" %d",&p);
          printf("Enter the marc of chemistry: ");
          scanf(" %d",&c);
      float sum=e+b+m+p+c;
       float percentage=sum/5;  
        // printf("e+ b + m+ p+ c")/5;
          printf("percentage=%f %% ", percentage);
          return 0;
   }
    



   
