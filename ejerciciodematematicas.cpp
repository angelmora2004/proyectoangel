/* escribe un progrmaa que lea de la entrada estandar dos numeros y muestre en la salida estandar su suma, resta, multiplicacion
y division. 
*/
#include <iostream>
using namespace std; 
int main ()
{
    int n1, n2, suma=0, resta=0, multiplicacion=0, division=0; 
    cout<<"Ingrese un numero: "; 
    cin>>n1;
    cout<<"Ingrese otro numero: ";
    cin>>n2; 
    
    suma = n1 + n2;
    resta = n1 - n2;
    multiplicacion = n1 * n2;
    division = n1 / n2;
    cout<<"\nEl resultado de la suma es: "<<suma;
    cout<<"\nEl resultado de la resta es: "<<resta;
    cout<<"\nEl resultado de la multiplicacion es: "<<multiplicacion; 
    cout<<"\nEl resultado de la division es: "<<division;
    return 0;
}