#include<iostream>
#include<string>
using namespace std;

struct Producto{
	string nombre;
	float precio;
};

struct Venta_producto{
	int idVenta;
	string producto;
	int cantidad;
	float oPrecio_Total;
};

int main(){
	char eleccion;
	cout << "==========================================================" << endl;
    cout << "            INVENTARIO DE PRODUCTOS Y VENTAS (MD)" << endl;
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
		cin>> eleccion;
		
		}while (eleccion != 's');
}