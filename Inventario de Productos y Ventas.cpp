#include<iostream>
#include<string>
using namespace std;
int cont=0;
const int Max=100;

struct Producto{
	string nombre;
	float precio;
};

struct Venta_producto{
	int idVenta;
	string producto;
	int cantidad;
	float Precio_Total;
};

Producto Cantidad[Max];

void Registro_de_producto(Producto Cantidad[], int &cont){
	cout << "==========================================================" << endl;
    cout << "                REGISTRO DE PRODUCTO" << endl;
    cout << "==========================================================" << endl;
    cout<<endl;
    cout<<"Ingrese el nombre del producto: "<<endl;
    cout<<cont+1<<".-: ";
	cin.ignore();
    getline(cin,Cantidad[cont].nombre);
    cout<<endl;
    
    cout<<"Ingrese el precio del producto: ";
    cin>>Cantidad[cont].precio;
    
    cont++;
    cout<<"--------------------Producto agregado-----------------------"<<endl;
	cout<<endl;
}

void Lista(Producto Cantidad[], int &cont){
	cout << "==========================================================" << endl;
    cout << "                LISTA DE PRODUCTOS" << endl;
    cout << "==========================================================" << endl;
    if(cont!=0){
    	for (int i = 0; i < cont; i++){
            cout << i + 1 <<".- Nombre:"<<Cantidad [i].nombre<<endl;
			cout<<"Precio: "<<Cantidad [i].precio<<endl;
			cout<<endl;
	}
	}else {
    	cout<<endl;
        cout << "No hay registro de productos!!" << endl;
        cout<<endl;
    }
}


int main(){
	char eleccion;
	
	cout << "==========================================================" << endl;
    cout << "          INVENTARIO DE PRODUCTOS Y VENTAS (MD)" << endl;
    cout << "==========================================================" << endl;
    
    do{
    	cout<<"a) Registrar un nuevo producto "<<endl;
    	cout<<"b) Listar los productos registrados "<<endl;
		cout<<"c) Buscar un producto por nombre " <<endl;
		cout<<"d) Actualizar los datos de un producto "<<endl;
		cout<<"e) Eliminar un producto "<<endl;
		cout<<"f) Registrar una venta "<<endl;
		cout<<"g) Listar las ventas realizadas " <<endl;
		cout<<"h) Calcular el total de ventas realizadas "<<endl;
		cout<<"s) Salir del programa"<<endl;
		cout<<"Seleccione una alternativa: ";
		cin>> eleccion;
		cout<<endl;
		
		switch (eleccion) {
			case 'a':{
				Registro_de_producto(Cantidad, cont);
				break;
			}
				
			case 'b':{
				Lista(Cantidad, cont);
				break;
			}
			
			case 'c':{
				break;
			}
				
			case 'd':{
				break;
			}
			
			case 'e':{
				break;
			}
			
			case 'f':{
				break;
			}
				
			case 'g':{
				break;
			}
			
			case 'h':{
				break;
			}
				
			case 's':{
				cout<<endl;
				cout<<"Saliendo del programa ... ";
				cout<<endl;
				break;
			}
				
			default:{
				cout<<endl;
				cout<<"-------Alternativa invalida--------"<<endl;
				cout<<endl;
				break;
			}
					
		}
	}while (eleccion != 's');
	
	return 0;
}