#include <iostream>

using namespace std;

int main()
{
    int saldo = 100000;
    int opc, ingreso, retiro,contador = 0;
    int a[] = {50000,20000,10000};
    bool verdad = true;

    while(verdad){
        system("cls");
        cout << "Bienvenido a su cajero sexy virtual" << endl;
        cout << "Escoja una opcion: " << endl;
        cout << "1. Depositar dinero" << endl;
        cout << "2. Retiro de dinero" << endl;
        cout << "3. Consultar saldo" << endl;
        cout << "0. Salir" << endl;
        cout << endl;
        cin >> opc;

        switch (opc) {
        case 1:
            cout << "Cuanto desea depositar: " << endl;
            cin >> ingreso;
            saldo += ingreso;
            cout << "\nCantidad de dinero en la cuenta: " << saldo << endl;
            break;

        case 2:
            cout << "Cuanto desea retirar: " << endl;
            cin >> retiro;
            if(retiro>saldo){
                cout <<"Su saldo es insuficiente!!!" << endl;
            }
            else if(retiro%10000!=0){
                cout <<"Cantidad erronea, solo multiplos de 10000" << endl;
            }
            else{
                saldo -= retiro;
                for(int i=0;i<3;i++){
                    while(retiro>=a[i]){
                        contador++;
                        retiro-=a[i];
                    }
                    cout << "Billetes de " << a[i] << "son:" << contador << endl;
                    contador = 0;
                }
                cout << "\nCantidad de dinero en la cuenta: " << saldo << endl;
            }
            break;

        case 3:
            cout << "\nCantidad de dinero en la cuenta: " << saldo << endl;
            break;

        case 0:
            cout << "Gracias por utilizar nuestros servicios"<< endl;
            verdad = false;
            break;

        default:
            cout << "Opcion incorrecta...."<<endl;
            break;
        }
        system("PAUSE");

    }

    return 0;
}
