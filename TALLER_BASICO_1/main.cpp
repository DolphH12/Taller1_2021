#include <iostream>

using namespace std;

string palabra_original = "La udea es la mejor";
string palabra_mostrar = "";
int vidas = 5;


void inicializar();
void ingresar(char a);
void mostrar();

int main()
{
    inicializar();
    mostrar();
    while(vidas > 0 && palabra_mostrar != palabra_original){
        char a;
        cout << "Ingrese letra: ";
        cin >> a;
        system("cls");
        ingresar(a);
        mostrar();
    }
    if(vidas > 0) cout << "Ganaste!!"<<endl;
    else cout << "Perdiste :(, la palabra era: " << palabra_original << endl;
    return 0;
}

void mostrar(){
    cout << vidas << endl;
    cout << palabra_mostrar << endl;
}

void inicializar(){
    for(int i=0;i<int(palabra_original.length());i++){
        if(palabra_original[i] >= 'A' && palabra_original[i] <= 'Z'){
            palabra_original[i] += 32;
        }
    }
    for(int i=0;i<int(palabra_original.length());i++){
        if(palabra_original[i] >= 'a' && palabra_original[i] <= 'z'){
            palabra_mostrar += '-';
        }
        else{
            palabra_mostrar += palabra_original[i];
        }
    }

}

void ingresar(char a){
    bool perdiVidas = true;
    if(a >= 'A' && a <= 'Z'){
        a += 32;
    }
    for(int i=0;i<int(palabra_original.length());i++){
        if(a == palabra_original[i]){
            palabra_mostrar[i] = a;
            perdiVidas = false;
        }
    }

    if(perdiVidas == true){
        vidas--;
    }
}















