/******************************************************************************

Uma fábrica de veículos novos necessita de um sistema para o cálculo do preço de 
um automóvel 0 km que varia de acordo com os opcionais que o cliente deseja.
Há 4 possibilidades:

*******************************************************************************/

#include <iostream>

using namespace std;

int main () 
{
    float Valorfabrica,ValorIPI,ValorOpcionais=0,valorTotal,valorDesconto,
    valorTotalD;
    int opcionais;
    
    cout<<"Digite o valor de fábrica (sem IPI):";
    cin>>Valorfabrica;
    
    ValorIPI = Valorfabrica*0.08  ;
    
cout <<"\nEscolha os opcionais \n";
cout << "1- Trio eletrico\n";
cout << "2- Ar Condicionado\n";
cout << "3- Direcao hidraulica\n";
cout << "4- Completo (Trio + Ar + Direcao)\n";
cout << "0-nenhum opcional:\n";
cout << "Opção Escolhida:";
cin >>opcionais;

//opcionais    

    switch(opcionais){
      case 1:
        ValorOpcionais+=Valorfabrica *0.02;
         break;
      case 2:
         ValorOpcionais+=Valorfabrica *0.02;
         break;
      case 3:
         ValorOpcionais+=Valorfabrica *0.02;
         break;
      case 4:
         ValorOpcionais+=(Valorfabrica *0.02) *3;
         break;
    default:
         break;
    }
    valorTotal=Valorfabrica+ValorIPI+ValorOpcionais;
    
    if(opcionais==4)
    valorDesconto=valorTotal* 0.03;
    valorTotalD=valorTotal-valorDesconto;
    
    cout <<endl<<"\nValor de fábrica:R$"<<Valorfabrica<<endl;
    cout <<"Valor do IPI:R$"<<ValorIPI<<endl;
    cout <<"Valor dos opcionais:R$"<<ValorOpcionais<<endl;
    cout <<"valorTotal:R$" <<valorTotal<<endl;
    cout <<"valorDesconto:R$" <<valorDesconto<<endl;
    cout <<"valor Total com Desconto:R$" <<valorTotalD<<endl;
    return 0;
}