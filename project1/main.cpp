
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string b = "         ";
int miej = 0;
int aiorno;
int vl;
int aik = 0;

void ekran(){
    cout << b[0] << "|" << b[1] << "|" << b[2] << endl;
    cout << b[3] << "|" << b[4] << "|" << b[5] << endl;
    cout << b[6] << "|" << b[7] << "|" << b[8] << endl;
    cout << " " << endl;
    cout << " " << endl;
}
void przyp(){
    cout << "0|1|2" << endl;
    cout << "3|4|5" << endl;
    cout << "6|7|8" << endl;
    cout << " " << endl;
    cout << " " << endl;
}
void sprawdz(){
    //wygrywa krzyrzyk
    if( b[0]=='X' && b[1]=='X' && b[2]=='X' || b[3]=='X' && b[4]=='X' && b[5]=='X' || b[6]=='X' && b[7]=='X' && b[8]=='X' || b[0]=='X' && b[3]=='X' && b[6]=='X' || b[1]=='X' && b[4]=='X' && b[7]=='X' || b[2]=='X' && b[5]=='X' && b[8]=='X' || b[0]=='X' && b[4]=='X' && b[8]=='X' || b[2]=='X' && b[4]=='X' && b[6]=='X' ){
        cout << "Wygrywa X!" << endl;
        exit(0);
    }
    //wygrywa kolko
    if( b[0]=='O' && b[1]=='O' && b[2]=='O' || b[3]=='O' && b[4]=='O' && b[5]=='O' || b[6]=='O' && b[7]=='O' && b[8]=='O' || b[0]=='O' && b[3]=='O' && b[6]=='O' || b[1]=='O' && b[4]=='O' && b[7]=='O' || b[2]=='O' && b[5]=='O' && b[8]=='O' || b[0]=='O' && b[4]=='O' && b[8]=='O' || b[2]=='O' && b[4]=='O' && b[6]=='O' ){
        cout << "Wygrywa O!" << endl;
        exit(0);
    }
}

void czyremis(){
    if(b[0]!=' ' && b[1]!=' ' && b[2]!=' ' && b[3]!=' ' && b[4]!=' ' && b[5]!=' ' && b[6]!=' ' && b[7]!=' ' && b[8]!=' '){
        sprawdz();
        cout << "Remis! Nikt nie wygra³!" << endl;
        exit(0);
    }
}

int main(){
    system( "cls" );
    cout << "0|1|2" << endl;
    cout << "3|4|5" << endl;
    cout << "6|7|8" << endl;
    cout << "" << endl;
    ekran();

    while(true){
        cout << "Kolko:";
        cin >> miej;
        if(b[miej] == ' '){
            b[miej] = 'O';
        }
        system( "cls" );
        przyp();
        ekran();
        sprawdz();
        czyremis();
        cout << "Krzyzyk:";
        cin >> miej;
        if(b[miej] == ' '){
            b[miej] = 'X';
        }
        system( "cls" );
        przyp();
        ekran();
        sprawdz();
        czyremis();
    }


    return 0;
}
