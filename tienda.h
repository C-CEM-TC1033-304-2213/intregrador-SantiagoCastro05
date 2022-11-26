#ifndef TIENDA_H
#define TIENDA_H

#include "inventario.h"

using namespace std;

class Tienda
{
private:
    Inventario inv;
public:
    int opcion_menu_principal(int opcion);
    void opcion_cancelar(int opcion_cancelar);
};
#endif