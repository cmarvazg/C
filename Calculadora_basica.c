#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main (){
    char op;
	float n1,n2,re;
    setlocale(LC_ALL, "spanish");
    printf("\n\t\tCALCULADORA B�SICA.\n");
    printf("\n\tS� los dos n�meros son 0 la calculadora se cierra.");
    printf("\n\nDigite el primero n�mero: ");scanf("%f",&n1);
    fflush(stdin);
	printf("\nDigite un operador: ");scanf("%c",&op);
	printf("\nDigite el segundo n�mero: ");scanf("%f",&n2);
	
	if(n1!=0){
    switch (op){
	case '+': re=n1+n2;printf("\n%.2f %c %.2f = %.2f",n1,op,n2,re);break;
    case '-': re=n1-n2;printf("\n%.2f %c %.2f = %.2f",n1,op,n2,re);break;
    case '*': re=n1*n2;printf("\n%.2f %c %.2f = %.2f",n1,op,n2,re);break;
    case '/': if(n2==0){do{
    	printf("\nLa divisi�n entre cero no est� definida.");
		printf("\n\nDigite otro n�mero: ");scanf("%f",&n2);    	
    }while(n2==0);
    re=n1/n2;printf("\n%.2f %c %.2f = %.2f",n1,op,n2,re);break;
    }else{
    	re=n1/n2;printf("\n%.2f %c %.2f = %.2f",n1,op,n2,re);break;}  
    } 
	}
	
	if(n1==0 && n2==0){
		printf("\nFin del la calculadora...");
		getch();
	}
		
		
 
    return 0;
}
