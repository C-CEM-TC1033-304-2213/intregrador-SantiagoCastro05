#ifndef PRODUCTO_H
#define PRODUCTO_H
#include <string>
using namespace std;

class Producto
{

private:

    string precio;
    string cantidad;
    string ID;
    string nombre;

public:

    Producto();
    string get_producto();
    void set_producto(string,string,string,string);

};
#endif