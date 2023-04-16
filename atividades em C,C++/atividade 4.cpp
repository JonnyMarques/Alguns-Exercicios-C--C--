/******************************************************************************
1 Peça ao usuário que informe a medida de cada um dos três lados de um triângulo e informe se ele é equilátero, escaleno ou isósceles. Veja como é a classificação dos triângulos:

Equilátero: Três lados com a mesma medida;

Escaleno: Dois lados quaisquer com a mesma medida;

Isósceles: Três lados com medidas diferentes.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    
    cout << "Digite Lado A: " ;
    cin >> a ;
    
    cout<<"Digite Lado B: ";
    cin >> b ;
    
    cout<<"Digie Lado C: " ;
    cin >> c ;
    
    if ( (a==b) && (b==c) )
       cout <<"Equilátero\n";
       
    else if ( (a!=b) && (a!=c) && (b!=c))
       cout <<"Isósceles\n";
    else 
       cout <<"Escaleno\n";
    
    return 0;
}