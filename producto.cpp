#include <iostream>
#include <vector>
#include<sstream>

#include "inventario.h"
#include "producto.h"

using namespace std;

    void Producto::set_producto(string id,string nom,string cant,string pre)
    {
        precio = pre;
        cantidad = cant;
        ID = id;
        nombre = nom;
    }


