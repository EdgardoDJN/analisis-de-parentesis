#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
int main() {
    string cadena="(((())))";
    stack<char> pila;
    bool correcto=true;
    for(int i=0;i<cadena.length();i++){
        if(cadena[i]=='('){
            pila.push(cadena[i]);
        }
        else if(cadena[i]==')'){
            if(pila.empty()){
                correcto=false;
                break;
            }
            else{
                pila.pop();
            }
        }
    }
    if(pila.empty() and correcto){
        cout<<"Parentesis correctos"<<endl;
    }
    else{
        cout<<"Parentesis incorrectos"<<endl;
    }
    system ("pause");
    return 0;
}
