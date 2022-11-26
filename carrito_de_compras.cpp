#include <iostream>
#include "producto.h"
#include "inventario.h"
#include "carrito_de_compras.h"

using namespace std;

Carrito::Carrito()
{
    vector<Producto>product_carro;
}

void Carrito::ver_carrito()
{
    for(int i = 0;i<product_carro.size();i++)
    {
        //...
    }
    
}

void Carrito::agregar_producto(Producto pro,Inventario inv, int num)
{
    inv.to_string();
    inv.productos_inv[]
}