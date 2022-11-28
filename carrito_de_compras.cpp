#include <iostream>
#include "producto.h"
#include "inventario.h"
#include "carrito_de_compras.h"

using namespace std;


Carrito::Carrito()
{
    vector<Producto>product_carro;
    vector<int>bought_items;
}

void Carrito::ver_carrito()
{
    int a = product_carro.size();
    for(int i = 0;i<a;i++)
    {
        product_carro[i].get_todo_producto();
    }
}
void Carrito::num_producto_comprados(int num_product)
{
    bought_items.push_back(num_product);
}
void Carrito::agregar_producto(Producto p)
{
    product_carro.push_back(p);
}
float Carrito::calcular_total()
{
    float total;
    for (int i;i<=product_carro.size();i++)
    {
        total = (bought_items[i]*stof(product_carro[i].get_producto("precio")));
    }
}
