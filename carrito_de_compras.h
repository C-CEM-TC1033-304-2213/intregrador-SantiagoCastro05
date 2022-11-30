#ifndef CARRITO_DE_COMPRAS_H
#define CARRITO_DE_COMPRAS_H
#include <vector>
#include "producto.h"
using namespace std;

class Carrito
{

private:
    vector<Producto>product_carro;
    vector<float>bought_items;

public:

    Carrito();
    void ver_carrito();
    void agregar_producto(Producto p);
    void num_producto_comprados(int num_product);
    void calcular_total();
};

#endif