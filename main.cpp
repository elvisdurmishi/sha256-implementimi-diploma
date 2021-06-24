#include <iostream>
#include "sha256.h"

using std::string;
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    string input = "informatike";
    string output = "";
    int MAX_LIMIT = 10000000;
    string celesi = "";
    string vlera_hyrese = "";
    for(int i=0; i < MAX_LIMIT; i++){
        celesi = std::to_string(i);
        vlera_hyrese = input + celesi;
        output = sha256(vlera_hyrese);
        if(output.substr(0,5) == "00000"){
            cout << "##############\n";
            cout << "Prova e pare me pese 0\n";
            cout << "Vlera e inputit: " << vlera_hyrese << "\n";
            cout << "Vlera hash eshte: " << output << "\n";
            cout << "Vlera u gjet!\n\n";
        }
        if(output.substr(0,6) == "000000"){
            cout << "##############\n";
            cout << "Prova e dyte me gjashte 0\n";
            cout << "Vlera e inputit: " << vlera_hyrese << "\n";
            cout << "Vlera hash eshte: " << output << "\n";
            cout << "Vlera u gjet!";
            return 0;
        }
        vlera_hyrese = "";
    }
    return 0;
}
