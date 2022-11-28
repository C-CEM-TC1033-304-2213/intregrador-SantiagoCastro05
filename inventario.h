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
    void to_string();
    Producto get_vector(int);
    int existencia_producto(int,int);
    void disminuir_producto(int,int);

};
#endif  