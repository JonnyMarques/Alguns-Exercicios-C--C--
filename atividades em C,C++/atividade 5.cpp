/******************************************************************************
O Jockey Clube está organizando uma competição de hipismo e criou as seguintes categorias:

INFANTIL – competidores entre 7 e 12 anos;

JUVENIL – competidores entre 13 e 17 anos;

ADULTO – competidores entre 18 e 49 anos;

SENIOR – competidores com 50 anos ou mais.

Para ajudar na classificação correta, crie um código capaz de informar a categoria do competidor a partir de sua idade.
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int idade;
    
    cout << "Coloque sua idade aqui: " ;
    cin >> idade ;
    
    
    
    if ( (idade >=7) && (idade <=13 ))
       cout <<idade<< " anos! ,infantil.";
       
    else if ( (idade>=13 ) && (idade<=18 ))
       cout <<idade<< " anos! ,juvenil.";
       
    else if ( (idade >=18) && (idade <=50 ))
       cout <<idade<< " anos! ,Adulto.";
       
    else if ( (idade >=50))
       cout <<idade<< " anos! ,senior.";
       
    else if ((idade <7))
       cout<<idade<< " anos! ,participante inválido.";    
       
    return 0;
}