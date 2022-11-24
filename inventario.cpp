#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>
#include <string>

#include "inventario.h"
#include "producto.h"


using namespace std;
Producto pro;
Inventario::Inventario()
{
    ifstream archivo;
    archivo.open("inventario.txt");
    string linea;
    while (getline(archivo, linea))
    {
        stringstream token(linea);
        string ID;
        string name;
        string precio;
        string stock;
        getline(token,ID,',');
   
        getline(token,name,',');
 
        getline(token,precio,',');

        getline(token,stock,',');
     

        pro.set_producto(ID,name,stock,precio);
        Inventario::productos_inv.push_back(pro);
    }
string Inventario::to_string(productos_inv)
{
    for(int i = 0;i<productos_inv.size();i++)
    {
        cout<<productos_inv[i]<<endl;
    }
}
}