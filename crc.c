#include<stdio.h>
#include<stdlib.h>
#include<string.h> 

int main(void){
    sender();
   // receiver();

}

sender(){
  int i,j,n,m;
  int databit[50];
  int poly[50];

  printf("Enter the number of data bits ");
  scanf("%d",&n);
  printf("Enter the data bits");
  for(i=0; i<n; i++){
      scanf("%d",&databit[i]);
  }

  printf("Enter the number of bit of genarator polynomial ");
  scanf("%d",&m);
  printf("Enter the data bits");
  for(i=0; i<m; i++){
      scanf("%d",&poly[i]);
  }
  
  for(i=n; i<n+m-1; i++){
   databit[i++]=0;
 
  }
for(i=0; i<n+m; i++){
   printf("%d",databit[i]);
  }   



      






} 