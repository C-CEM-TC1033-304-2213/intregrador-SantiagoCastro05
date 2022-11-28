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

    Producto(string,string,string,string);
    string get_producto(string);
    void get_todo_producto();

};
#endif