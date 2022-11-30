#ifndef TIENDA_H
#define TIENDA_H

#include "carrito_de_compras.h"
#include "inventario.h"


class Tienda
{
private:
    Inventario inv;
    Carrito Carro;
public:
    void inicio_tienda();
    void generar_inv();
    void llamada_carrito();
    int opcion_menu_principal(int opcion);
    void terminar();
};
#endif