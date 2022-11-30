#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include "producto.h"
using namespace std;

class Inventario
{

private:
   vector<Producto>productos_inv;
public:
    
    Inventario();
    void generar_inv();
    void to_string();
    void to_string_menu();
    Producto get_vector(int);
    int tamaño_vector();
    int existencia_producto(int,int);
    void disminuir_producto(int,int);

};
#endif  