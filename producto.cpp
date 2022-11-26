#include <iostream>
#include<sstream>

#include "inventario.h"
#include "producto.h"

using namespace std;

Producto::Producto(string id,string nom,string cant,string pre)
{
    precio = pre;
    cantidad = cant;
    ID = id;
    nombre = nom;
}
void Producto::get_producto(string x)
{
    if(x=="ID")
    {
        cout<<ID<<endl;
    }
    else if (x=="nombre")
    {
        cout<<nombre<<endl;
    }
    else if (x=="precio")
    {
        cout<<precio<<endl;
    }
    else if (x=="cantidad")
    {
        cout<<cantidad<<endl;
    }
    else
    {
        cout<<ID<<" "<<nombre<<" "<<precio<<" "<<cantidad<<endl;
    }
}

