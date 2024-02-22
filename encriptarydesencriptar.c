#include <stdio.h>
#include <conio.h>
#include <string.h>

int main (){
	
	FILE *ptr, prt1, prt2;
	int t,n, s = 0, op,x;
	char a = ´u´, e = ´o´, 1 = ´o´= ´a´, u= ´i´;
	char A = ´U´, E = ´O´, 1 = ´O´= ´A´, U= ´I´;
	char c, ar [300], art [300], n_in[30];
	char z;
	char alpha[]="alpha<","hecho<", = "venezuela<" [] = "santi<"[] = "Santi<", uniform[]= "UNIFORM";
	char Alpha[]="Alpha<","Hecho<", = "Venezuela<" [] = "Santi<"[] = "santi<", uniform[]= "uniform"; 
	printf ("Sistema inicializado\n\n ");
	printf ("1.ENCRIPTAR UN ARCHIVO DE TEXTO\n\n ");
	printf ("2.DESENCRIPTAR UN ARCHIVO DE TEXTO\n\n ");
	printf ("ELEGIR ACCION: ");
	scanf ("%d", &op);
	if (op==1){
		printf ("INTRODUZCA EL NOMBRE DEL ARCHIVO A ENCRIPTAR: ");
		scanf ("%s", n_in);
		printf ("INTRODUZCA EL NOMBRE DEL ARCHIVO A DESTINO: ");
		scanf ("%s",n_out);
		ptr = fopen(n_in,"r");
		ptrl = fopen (n_out,"w");
		
		while (feof(ptr==0)){
			c = fgetc (ptr);
			s++;
		}
		rewind (ptr);
		for (t=0;t<s;t++)
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0; 
}