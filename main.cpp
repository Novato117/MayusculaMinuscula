#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Buscar caracter en una cadena 


char *CadBuscar(char *,char);
int main() {
	
	char cad[]="ESIME";
	cout<<"palabra"<<cad<<endl;
	cout<<"caracter encontrado.."<<CadBuscar(cad,'I')<<endl;
	return 0;;
}
char *CadBuscar(char *x,char c){
	
	while(*x){
		if(*x==c) return x;
		x++;
	}
	
	return NULL;
}
/* en pizarron 
int main(){
 char arr[100];
 cout<<"ingrese"<<endl;
 cin>>arr;
 if(CadBuscar(arr,'o')){
}esle{
 cout<<"no se encontro cadena"
}
}
*/
//Tarea BUscar cadena dentro de una cadena
//str
/*
char * strstr(char*,char*)
*/

