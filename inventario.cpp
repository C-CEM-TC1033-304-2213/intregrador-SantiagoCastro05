#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "inventario.h"
#include "producto.h"

std::string enteroACadena(int entero)
    {
        std::string numeroComoCadena = "";
        std::stringstream ss;
        ss << entero;
        ss >> numeroComoCadena;
        return numeroComoCadena;
    }

Inventario::Inventario()
{
    ifstream archivo;
    archivo.open("inventario.csv");
    string linea;
    while (getline(archivo, linea))
    {
        stringstream token(linea);
        string ID,name,precio,stock;

        getline(token,ID,',');
   
        getline(token,name,',');
 
        getline(token,precio,',');

        getline(token,stock,',');
     

        Producto p1(ID,name,stock,precio);
        productos_inv.push_back(p1);
    }
}
void Inventario::to_string_menu()
{
    int a = productos_inv.size();
    for(int i = 0;i<a;i++)
    {
        cout<<i<<") ";productos_inv[i].get_menu();
    }
}

void Inventario::to_string()
{
    int a = productos_inv.size();
    for(int i = 0;i<a;i++)
    {
        cout<<productos_inv[i].get_producto("cantidad");
    }
}

Producto Inventario::get_vector(int num)
{
    return productos_inv[num];
}
int Inventario::tamaño_vector()
{
    return productos_inv.size();
}
int Inventario::existencia_producto(int producto_solicitado, int cantidad_solicitada)
{
    int producto_existente = stoi(productos_inv[producto_solicitado].get_producto("cantidad"));

    if (producto_existente < cantidad_solicitada)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
void Inventario::disminuir_producto(int producto_solicitado, int cantidad_solicitada)
{
    int producto_existente = stoi(productos_inv[producto_solicitado].get_producto("cantidad"));

    int nuevo_producto_existente = producto_existente - cantidad_solicitada;

    

    Producto p1 = productos_inv[producto_solicitado];

    Producto nuevo (p1.get_producto("ID"),p1.get_producto("nombre"),(enteroACadena(nuevo_producto_existente)),p1.get_producto("precio"));
    
    productos_inv[producto_solicitado] = nuevo;

}

