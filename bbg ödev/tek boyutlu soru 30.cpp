#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  char cumle[100];
  char isaret[]={'.',',',':',';','!','\'','-','()','?'};
  int i,k=1;
  
  printf("Cumleyi yaziniz:");
  gets(cumle);
  
  for(i=0; cumle[i]!='\0';i++)
  {
  	for(int m=0; m<8;m++){
  	if(cumle[i]==isaret[m])
  	k++;
  }
  }
  
  
  printf("Girilen cumlede %d tane noktalama isareti vardir..",k);
    
return 0;
}