#include <iostream>

#include"inventario.h"
#include "producto.h"
#include "carrito_de_compras.h"
#include "tienda.h"

using namespace std;

int main()
{
 Tienda tien;
tien.generar_inv();
tien.inicio_tienda();

/* Inventario inv;
Carrito Car;
//-------------------------------------------------------------------------------------------------
cout<<"Ingresa numero asignado para el producto que deseas :D"<<endl;
int producto_desado;
cin>>producto_desado;

Producto p1 = inv.get_vector(producto_desado);
Car.agregar_producto(p1);

cout<<"Ingresa la cantidad que deaseas del producto"<<endl;
int cantidad_deseada;
cin>>cantidad_deseada;

int condi = inv.existencia_producto(producto_desado,cantidad_deseada);

while (condi == 0) //usalo bien xd
{
    cout<<"Ingresa otra cantidad ya que no hay suficiente stock en el inventario D:"<<endl;
    int cantidad_deseada;
    cin>>cantidad_deseada;
    condi = inv.existencia_producto(producto_desado,cantidad_deseada);
}

inv.disminuir_producto(producto_desado,cantidad_deseada);
inv.to_string();









//-------------------------------------------------------------------------------------------------

Car.ver_carrito();

 */
}