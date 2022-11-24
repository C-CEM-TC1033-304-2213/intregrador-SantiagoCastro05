#ifndef INVENTARIO_H
#define INVENTARIO_H
#include <string>
#include <vector>
#include "producto.h"
using namespace std;

class Inventario
{

private:
    
public:
    vector<Producto>productos_inv;
    Inventario();
    string to_string(vector<Producto>productos_inv);
    bool existencia_producto(int producto);
    int disminuir_producto(int num_producto);

};
#endif