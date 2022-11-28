#ifndef CARRITO_DE_COMPRAS_H
#define CARRITO_DE_COMPRAS_H
#include <vector>
#include "producto.h"
using namespace std;

class Carrito
{

private:
    vector<Producto>product_carro;
    vector<int>bought_items;
    string producto;
    int num_productos;
    double coste_total;

public:

    Carrito();
    void ver_carrito();
    void agregar_producto(Producto p);
    void num_producto_comprados(int num_product);
    float calcular_total();
};

#endif