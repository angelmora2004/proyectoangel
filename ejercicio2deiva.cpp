/*2. Escribir un programa que de la entrada estandar el precio de un producto y muestre en la salida estandar 
el precio del producto al aplicarle el IVA. */
 #include <iostream>
 using namespace std; 
 int main()
 {
    float precio, iva, preciofinal; 
    cout<<"\nIntroduzca el precio del producto: ";
    cin>>precio; 
    iva = precio * 0.12;
    preciofinal = precio + iva;
    cout<<"\nEl precio del producto con IVA es: "<<preciofinal;
    return 0;
 }