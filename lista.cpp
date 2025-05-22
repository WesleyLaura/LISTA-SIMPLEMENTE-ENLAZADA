#include <iostream>
using namespace std;

struct Nodo{
	int info;
	Nodo *sig;
};

//crear por el inicio
void crear_i(Nodo *&p){
	char op;
	do{
		Nodo *q= new Nodo;
		cout<<"Dato: ";
		cin>>q->info;
		q->sig=p;
		p=q;
		cout<<"MAS DATOS(S|N): "; cin>>op;
		
	}while(op=='S' || op=='s');
}
// funcion crear por el final
void crear_f(Nodo *&p){
	char op;
	do{
		Nodo *q= new Nodo;
		Nodo *r;
		cout<<"Dato: ";
		cin>>q->info;
		q->sig=NULL;
		if(p==NULL){
			p=q;
		}else{
		r->sig=q;		
		}
		r=q;
		cout<<"MAS DATOS (S|N) : "; cin>>op;
	}while(op=='S' || op=='s');
	
}
//mostrar la los elementos de la lista
void mostrar_i(Nodo *&p){
	Nodo *q=p;
	if(q==NULL){
		cout<<"Lista vacia\n";
		return;
	}else{
		while(q!=NULL){
			cout<<q->info<<" ";
			q=q->sig;
		}
	}
}

//insertar por el inicio
menu(){
	Nodo *p=NULL;
	int dato,op;
	do{
		cout<<"\t\n---LISTAS SIMPLEMENTE ENLAZADAS"<<endl
			<<"1.- Crear por el inicio"<<endl
			<<"2.- Crear por el final"<<endl
			<<"3.- Insertar por el inicio"<<endl
			<<"4.- Insertar al final"<<endl
			<<"5.- Mostrar la lista por el inicio"<<endl
			<<"0.- SALIR"<<endl;
			cout<<"OPCION: "; cin>>op;
			switch(op){
				case 1:
					crear_i(p);
					break;
				case 2:
					crear_f(p);
					break;
				case 3:
					break;
				case 4:
					break;
				case 5:
					mostrar_i(p);
					break;		
				case 0:
					cout<<"Programa finalizado\n";
					break;
				default :
					cout<<"Opcion invalida\n";
									
			}
	}while(op != 0);
	
}
int main(){
	menu();
	return 0;
}