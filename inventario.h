#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <vector>
#include "producto.h"
using namespace std;

class Inventario
{

private:
    
public:
    vector<Producto>productos_inv;
    Inventario();
    void to_string();
    bool existencia_producto(int producto);
    int disminuir_producto(int num_producto);

};
#endif  