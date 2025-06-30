#include<iostream>
#include<string>
using namespace std;
int cont=0;
const int Max=100;
int cant=0;

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


void Registro_de_Producto(Producto Cantidad[], int &cont){
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
    cout<<endl;
    cout<<"--------------------Producto agregado-----------------------"<<endl;
	cout<<endl;
}

void Lista(Producto Cantidad[], int &cont){
	cout << "==========================================================" << endl;
    cout << "                LISTA DE PRODUCTOS" << endl;
    cout << "==========================================================" << endl;
    if(cont!=0){
    	for (int i = 0; i < cont; i++){
            cout << i + 1 <<".- Nombre:";
			cout<<Cantidad[i].nombre;
			cout<<endl;
			cout<<"Precio: ";
			cout<<Cantidad[i].precio;
			cout<<endl;
	}
	}else {
    	cout<<endl;
        cout << "No hay registro de productos!!" << endl;
        cout<<endl;
    }
}

void Busqueda_Producto(Producto Cantidad[], int &cont){
	
	if(cont !=0){
   	
	string producto;
    cout << "==========================================================" << endl;
    cout << "                    BUSQUEDA DE PRODUCTO" << endl;
    cout << "==========================================================" << endl;
    cout<<"Ingrese el nombre del producto: ";
    cin.ignore();
    getline(cin,producto);
    
    bool busqueda=false;
    for(int i=0;i<cont;i++){
		if(Cantidad[i].nombre==producto){
		cout<<endl;
	    cout<<"-------------------Producto encontrado---------------------"<<endl;
	    cout<<endl;
	    cout<<"Nombre: "<<Cantidad[i].nombre<<endl;
	    cout<<"Precio: "<<Cantidad[i].precio<<endl;
	    cout<<endl;
	    
	    busqueda=true;
	    break;
	    }
    }
	if(busqueda==false){
		cout<<endl;
		cout<<"-------------------Producto no encontrado---------------------"<<endl;
		cout<<endl;
	    }
	    
    }else {
	cout<<endl;
    cout<<"No hay aun registro de productos para buscar!!"<<endl;
	cout<<endl;
    }
}
    
void Actualizar_Producto(Producto Cantidad[] ,int &cont){
	
	if(cont!=0){
		
	string producto;
    cout << "==========================================================" << endl;
    cout << "                ACTUALIZADOR DE PRODUCTOS" << endl;
    cout << "==========================================================" << endl;
	cout<<"Ingrese el nombre del producto que desea actualizar: ";
	cin.ignore();
    getline(cin,producto);
    cout<<endl;
    
    bool busqueda =false;
    for(int i=0;i<cont;i++){
		if(Cantidad[i].nombre==producto){
			cout<<endl;
			cout<<"Ingrese el nuevo nombre del producto: ";
			getline(cin, Cantidad[i].nombre);
			cout<<endl;
			cout<<"Ingrese el nuevo precio del producto: ";
			cin>>Cantidad[i].precio;
			cout<<endl;
			cout<<"-------------------Producto actualizado---------------------"<<endl;
	    busqueda=true;
	    break;
	    }
    }
    	if(busqueda==false){
		cout<<endl;
		cout<<"-------------------Producto no encontrado---------------------"<<endl;
		cout<<endl;
	    }
			
	}else {
    	cout<<endl;
        cout << "No hay registro de productos!!" << endl;
        cout<<endl;
	    }
    }
    
void Eliminar_Producto(Producto Cantidad[] ,int &cont){
	if(cont!=0){
		
	int numero;
	cout<<"==========================================================" << endl;
    cout<<"                   ELIMINAR PRODUCTO" << endl;
    cout<<"==========================================================" << endl;	
    cout<<"Ingrese el numero de orden del producto: ";
    cin.ignore();
    cin>>numero;
    
	numero=numero-1;	
	if(numero>=0 && numero<cont){
		for(int i=numero;i<cont-1;i++){
			Cantidad[i]=Cantidad[i+1];
		}
		cont --;
		cout<<endl;
	    cout<<"-------------------Producto eliminado---------------------"<<endl;
	    cout<<endl;
	}else{
		cout<<"No hay registro de este numero de orden "<<endl;
		cout<<endl;
	}
	}else { 
	cout<<endl;
    cout<<"No hay productos para eliminar!!"<<endl;
	cout<<endl;
    }
}

Venta_producto Venta[Max];
void Registro_Venta(Venta_producto Venta[], int &cant, Producto Cantidad[], int cont ){
	
	int CV;
	if (cont !=0){
	string producto;
	int aux;
	cout << "==========================================================" << endl;
    cout << "                REGISTRO DE VENTA" << endl;
    cout << "==========================================================" << endl;
    cout<<endl;
    cout<<"Ingrese el nombre del producto: ";
	cin.ignore();
    getline(cin,producto);
    cout<<endl;
    
    bool busqueda=false;
    for(int i=0; i<cont; i++){
			if(producto == Cantidad[i].nombre){
				aux = i;
				busqueda = true;
				break;
			}
		}
	if(busqueda==false){
	cout<<"El producto no fue registrado!! "<<endl;
	
	}else{
	cout<<"Ingrese la cantidad vendida: ";
	cin>>CV;
	Venta[cant].idVenta = cant+ 1;
	Venta[cant].producto = Cantidad[aux].nombre;
	Venta[cant].cantidad = CV;
	Venta[cant].Precio_Total = Cantidad[aux].precio*CV;
		
    cout<<"--------------------Venta registrada-----------------------"<<endl;
	cout<<endl;
	
 cant++;   }
}else {
    	cout<<endl;
        cout << "No hay registro de productos!!" << endl;
        cout<<endl;
	    }	
}

void Lista_ventas(Venta_producto Venta[], int &cant){
	cout << "==========================================================" << endl;
    cout << "                LISTA DE VENTAS" << endl;
    cout << "==========================================================" << endl;
    	for (int i = 0; i < cant; i++){
    		cout<<endl;
    		cout<<"ID venta: "<< Venta[i].idVenta <<endl;
            cout << "Producto: " << Venta[i].producto << endl;
			cout << "Cantidad: " << Venta[i].cantidad << endl;
			cout << "Total: S/. " <<Venta[i].Precio_Total << endl;
			cout<<endl;
}
}

int main(){
	char eleccion;
	
	cout << "==========================================================" << endl;
    cout << "          INVENTARIO DE PRODUCTOS Y VENTAS (MD)" << endl;
    cout << "==========================================================" << endl;
    
    do{
    	cout<<endl;
    	cout<<"------------------------OPCIONES-------------------------"<<endl;
    	cout<<endl;
    	cout<<"a) Registrar un nuevo producto "<<endl;
    	cout<<"b) Lista de productos registrados "<<endl;
		cout<<"c) Buscar un producto por nombre " <<endl;
		cout<<"d) Actualizar los datos de un producto "<<endl;
		cout<<"e) Eliminar un producto "<<endl;
		cout<<"f) Registrar una venta "<<endl;
		cout<<"g) Lista de ventas realizadas " <<endl;
		cout<<"h) Calcular el total de ventas realizadas "<<endl;
		cout<<"s) Salir del programa"<<endl;
		cout<<"Seleccione una alternativa: ";
		cin>> eleccion;
		cout<<endl;
		system("cls");
		
		switch (eleccion) {
			case 'a':{
				Registro_de_Producto(Cantidad, cont);
				break;
			}
				
			case 'b':{
				Lista(Cantidad, cont);
				break;
			}
			
			case 'c':{
				Busqueda_Producto(Cantidad, cont);
				break;
			}
				
			case 'd':{
				Actualizar_Producto(Cantidad, cont);
				break;
			}
			
			case 'e':{
				Eliminar_Producto(Cantidad, cont);
				break;
			}
			
			case 'f':{
				Registro_Venta(Venta, cant, Cantidad, cont);
				break;
			}
				
			case 'g':{
				Lista_ventas(Venta, cant);
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