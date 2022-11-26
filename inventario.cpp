#include <iostream>
#include <sstream>
#include <fstream>
#include <string>

#include "inventario.h"
#include "producto.h"


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
void Inventario::to_string()
{
    //int a = productos_inv.size();
    productos_inv[0].get_producto("");
    /*for(int i = 0;i<a;i++)
    {
        productos_inv[i].get_producto("");
    }*/
}
