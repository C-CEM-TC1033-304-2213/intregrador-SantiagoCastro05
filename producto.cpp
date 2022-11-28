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
string Producto::get_producto(string x)
{
    if(x=="ID")
    {
        return ID;
    }
    else if (x=="nombre")
    {
        return nombre;
    }
    else if (x=="precio")
    {
        return precio;
    }
    else if (x=="cantidad")
    {
        return cantidad;
    }
    else
    {
        return 0;
    }
}
void Producto::get_todo_producto()
{
    cout<<ID<<" "<<nombre<<" "<<cantidad<<" "<<precio<<endl;
}

