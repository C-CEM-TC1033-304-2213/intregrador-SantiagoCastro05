#ifndef CARRITO_DE_COMPRAS_H
#define CARRITO_DE_COMPRAS_H
#include <vector>
#include "producto.h"
using namespace std;

class Carrito
{

private:
    vector<Producto>product_carro;
    string producto;
    int num_productos;
    double coste_total;

public:

    Carrito();
    void ver_carrito();
    void agregar_producto(Producto pro);
    string producto_compra(int product);
    int num_producto_compra(int num_product);

};

#endif