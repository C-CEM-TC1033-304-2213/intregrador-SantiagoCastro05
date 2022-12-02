#include <iostream>
#include "inventario.h"
#include "carrito_de_compras.h"

using namespace std;


Carrito::Carrito()
{
    vector<Producto>product_carro;
    vector<float>bought_items;
}

void Carrito::ver_carrito()
{
    cout<<"///////////////////////////////////////////////////////////////////////////////////////////"<<endl;
    cout<<"Tu carrito de compras tiene lo siguientes prodructos con su respectiva cantidad deseada"<<"\n"<<endl;
    int a = product_carro.size();
    for(int i = 0;i<a;i++)
    {
        cout<<product_carro[i].get_producto("nombre")<<"-----"<<bought_items[i]<<endl;
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
void Carrito::calcular_total()
{
    float total = 0;
    int pato = product_carro.size();
    for (int e = 0;e<pato;e++)
    {
        float pro = stof(product_carro[e].get_producto("precio"));
        total = total + (bought_items[e]*pro);
    }
    cout<<"El valor de su compra es de: "<<total<<"\n"<<"Garcias por su Compra :D"<<endl;
}
