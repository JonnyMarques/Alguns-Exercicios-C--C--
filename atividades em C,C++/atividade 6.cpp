/******************************************************************************
3- calcule imc 
*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    float massa,altura,imc;
    string sMsg1 ="Resultado: ", sMsg2;
    
    system("cls");    
    cout << "Calculo do Imc\n"<< endl;
    cout << "Informe o peso (kg): ";
    cin >> massa;
    cout << "Informe a altura (m): ";
    cin >> altura;
    
    imc = massa / (altura * altura);
    
    if (imc < 18.5)
    sMsg2 = "Você esá abaixo do peso normal.";
    
    else if ((imc >=18.5) && (imc <=25))
    sMsg2 =" O seu peso está na faixa normalidade,";
       
    else if ((imc >=25) && (imc <=30))
    sMsg2 =" Você está acima do seu peso normal.";
       
    else (imc >=30);
    sMsg2 = " você  precisa perde uns quilinhos.";
    
    cout <<sMsg1<<sMsg2<< "-IMC = "<< imc <<
    system("pause");
    return 0;
}