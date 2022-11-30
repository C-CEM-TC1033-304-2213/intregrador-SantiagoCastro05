#include <iostream>
#include<sstream>

#include "producto.h"

using namespace std;

Producto::Producto(string id,string nom,string cant,string pre)
{
    precio = pre;
    cantidad = cant;
    ID = id;
    nombre = nom;
}
string Producto::get_producto(string select)
{
    if(select=="ID")
    {
        return ID;
    }
    else if (select=="nombre")
    {
        return nombre;
    }
    else if (select=="precio")
    {
        return precio;
    }
    else if (select=="cantidad")
    {
        return cantidad;
    }
    else
    {
        return "?";
    }
}
void Producto::get_todo_producto()
{
    cout<<ID<<" "<<nombre<<" "<<precio<<" "<<cantidad<<endl;
}
void Producto::get_menu()
{
    cout<<nombre<<" "<<"$"<<precio<<endl;
}
