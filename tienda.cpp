#include "tienda.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

Inventario inv;
Carrito car;
void Tienda::generar_inv()
{
    inv.generar_inv();
}
void Tienda::inicio_tienda()
{
    
    cout<<"//////////////////// Menu Principal ////////////////////"<<"\n"<<endl;
    cout<<"1) Seleccionar Producto a Comprar :p"<<endl;
    cout<<"2) Ver Carrito de Compras :o"<<endl;
    cout<<"3) Terminar Compra O.o"<<endl;
    cout<<"4) Salir :D"<<endl;
    cout<<"\n";
    cout<<"Ingresa la opcion deseada"<<endl;
    int opcion;
    cin>>opcion;
    int num = 0;
while (num == 0)
    {
        if (opcion == 1)
        {
            llamada_carrito();
            break;
            
        }
        if (opcion == 2)
        {
            car.ver_carrito();
            inicio_tienda();
            break;
            
        }
        if (opcion == 3)
        {
            car.calcular_total();
            abort();
            break;
        }
        if (opcion == 4)
        {
            cout<<"Gracias, no vuelva a pronto (bromita) :D"<<endl;
            abort();
            break;
        }
        else
        {
            cout<<"Ingresa un valor correspondiente correcto"<<endl;
            cin>>opcion;
        }
    }
}   
void Tienda::llamada_carrito()
{
    cout<<"//////////////////// Menu de Compras ////////////////////"<<"\n"<<endl;
    inv.to_string_menu();
    cout<<"Ingresa el numero del producto correspondiente para seleccionarlo (-1 para cancelar)"<<endl;
    int producto_desado;
    cin>>producto_desado;
    cout<<"//////////////////// ---------------- ////////////////////"<<"\n"<<endl;
    while (producto_desado > (inv.tamaño_vector()-1))
    {
        cout<<"Ingrese un producto que realmente pertenezca al inventario (-1 para cancelar)"<<endl;
        cin>>producto_desado;
    }
    if (producto_desado == -1)
    {
        inicio_tienda();
    }

//-------------------------------------------------------------------------------------------
    cout<<"Ingresa la cantidad que deaseas del producto (-1 para cancelar)"<<endl;
    float cantidad_deseada;
    cin>>cantidad_deseada;

    if (cantidad_deseada == -1)
    {
        inicio_tienda();
    }

    Producto p1 = inv.get_vector(producto_desado);
    car.agregar_producto(p1);
    

    int condi = inv.existencia_producto(producto_desado,cantidad_deseada);

    while (condi == 0) //usalo bien xd
    {
        cout<<"Ingresa otra cantidad ya que no hay suficiente stock en el inventario D:"<<endl;
        cin>>cantidad_deseada;
        condi = inv.existencia_producto(producto_desado,cantidad_deseada);
    }

    inv.disminuir_producto(producto_desado,cantidad_deseada);
    car.num_producto_comprados(cantidad_deseada);
    //cout<<inv.get_vector(producto_desado).get_producto("cantidad");
    inicio_tienda();
}