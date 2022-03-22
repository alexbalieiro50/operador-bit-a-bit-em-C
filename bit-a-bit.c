 #include<stdio.h>

void bitA(int a){
	
	if(a==0){		
		printf("A= |%d|", a);	
	}		
	else{
		bitA(a/2);
		printf("%d|",a % 2);				
	}	 
}

void bitB(int b){
	
	if(b==0){		
		printf("B= |%d|", b);	
	}		
	else{
		bitB(b/2);
		printf("%d|",b % 2);				
	}	 
}
void bitC(int c){
	
	if(c==0){		
		printf("= |%d|", c);	
	}		
	else{
		bitC(c/2);
		printf("%d|",c % 2);				
	}	 
}

int main(){
	
	int a,b,c,d,e,opc,op2;
	char op1;
	
	
	do{
		printf("----MENU-----\n");		
		printf("1 - Bitwise: \n");
		printf("2 - Deslocamento: \n");
		printf("3 - Mascara: \n");
		printf("4 - Sair: \n");
		printf("------------\n");
		printf("Escolha uma Opcao: ");		
		scanf("%d",&opc);
		system("clear");
		
		switch(opc){
			case 1:
			printf("Digite um valor Decimal A: ");
			scanf("%d",&a);
		
			printf("Digite um valor Decimal B: ");
			scanf("%d",&b);
			printf("Escolha o Operador (|,&,^): ");
			scanf("%s",&op1);
			printf("\n");
		
			switch(op1){
					case '|':
						c = a | b;
						bitA(a);
						printf("\n");
						bitB(b);
						printf("\nA | B");
						bitC(c);
						printf("\n");
					break;
					case '&':
						c = a & b;
						bitA(a);
						printf("\n");
						bitB(b);
						printf("\nA & B");
						bitC(c);
						printf("\n");
					break;
					case '^':
						c = a ^ b;
						bitA(a);
						printf("\n");
						bitB(b);
						printf("\nA ^ B");
						bitC(c);
						printf("\n");
					break;
				}
			printf("HEX = %X\n",c);
			printf("DEC = %d\n",c);
			if(c & 1)
				printf("Impar\n");
			else
				printf("Par\n");
			break;
			case 2:
				printf("falta complementar\n\n");
				break;				
			case 3:
				printf("falta complementar\n\n");
				break;
			case 4:
				system("cls || clear");
				printf("Saindo...\n");
				break;
			default:                
                printf("Opcao invalida! Tente novamente.\n\n");
		}
	
	
	}while(opc != 4);
	
	
	return 0;
}
