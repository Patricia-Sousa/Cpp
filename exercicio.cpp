#include <iostream> // Trabalhar com a consola
#include <locale>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    
    srand(time(NULL));

    int numSecreto = rand() % 101; //[0 a 100]
    int numUtl = 0;
    
    for (int tentativas = 4; tentativas >= 0; tentativas--){

        int res = abs(numSecreto - numUtl);

        cout << "Este jogo tem um numero secreto [0 a 100]. Tente encontrar. O seu palpite:\n";
        cin >> numUtl;

        if (numSecreto == numUtl) {
            cout << "Acertou. O numero secreto e: " << numSecreto << ".\n";
            break;
        }
        else if(res < 5) 
            cout << "A escaldar.\n";
        else if (res < 10) 
            cout << "Muito quente.\n";
        else if (res < 15) 
            cout << "Quente.\n";
        else
            cout << "Frio.\n";
    
        cout << "Tem " << tentativas << " tentativas.\n\n";
    }
}