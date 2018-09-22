#include <conio.h>
#include <stdio.h>

int A[5];
int *pA;

//int res=0;
 
 main(){
	 printf("Ingrese valores");
	 gets(A);
	 printf("%d\n",A);
	 for(int i=4; i>=0; i--){
		 *pA=&A[i];
		 printf("%c", *pA);
		}
		getch();
	}
	

