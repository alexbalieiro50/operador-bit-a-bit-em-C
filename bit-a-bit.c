#include<stdio.h>

void bitA(int a){
	
	if(a==0){		
		printf("BIN A= |%d|", a);	
	}		
	else{
		bitA(a/2);
		printf("%d|",a % 2);				
	}	 
}

void bitB(int b){
	
	if(b==0){		
		printf("BIN B= |%d|", b);	
	}		
	else{
		bitB(b/2);
		printf("%d|",b % 2);				
	}	 
}
void bitC(int c){
	
	if(c==0){		
		printf("BIN C= |%d|", c);	
	}		
	else{
		bitC(c/2);
		printf("%d|",c % 2);				
	}	 
}

int main(){
	
	int a,b,c;
	
	printf("Digite um valor Decimal A: ");
	scanf("%d",&a);
	
	printf("Digite um valor Decimal B: ");
	scanf("%d",&b);
	printf("\n");
	
	c = a & b;	
	
	
	
	bitA(a);
	printf("\n");
	bitB(b);
	printf("\n");
	bitC(c);
	printf("\n");
	
	printf("HEX = %X\n",c);
	printf("DEC = %d\n",c);
	if(c & 1)
		printf("Impar\n");
	else
		printf("Par\n");
	return 0;
}
