#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Convertir los caracteres alñfanumericos mayusculas en minusculas*/
int esMayusqs(char c);
char *CadMinuscula(char *x);
int esMinuscula(char c);
char *CadMayuscula(char *x);
int main() {
	char cad[]="eSiMe";
	cout<<"cadena original..."<<cad<<endl;
	CadMinuscula(cad);
	cout<<"cadena convertida a minuscula..."<<cad<<endl;
	
	cout<<"convertida a mayuscula"<<endl;
	cout<<"convertir "<<cad<<" a mayuscula"<<endl;
	CadMayuscula(cad);
	cout<<"cadena convertida..."<<cad<<endl;
	return 0;
}
int esMayusqs(char c){
	return c>= 'A' && c<='Z';
}
int esMinuscula(char c){
	return c>='a' && c<='z';
}
//convertir minuscula
char *CadMinuscula(char *x){
	char *aux;
	while(*x){
		if(esMayusqs(*x)){
			*x=*x+('a'-'A');
		}
		x++;
	}
	return aux;
}
//convertir minuscula
char *CadMayuscula(char *x){
	char *aux;
	while(*x){
		if(esMinuscula(*x)){
			*x=*x+('A'-'a');
		}
		x++;
	}
	return aux;
}
