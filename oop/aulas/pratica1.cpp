#include <iostream>
#include <vector>
#include <cctype>
#include <string>
#include <locale> 
#include <algorithm>


using namespace std;

int main(){
    int n,letras;
    vector<string> vtr;
    string read;
    locale loc;

    cout<<"Insira a quantidade de strings"<< flush <<"\n";
    cin >> n;



    for (int i = 0; i < n; i++)
    {
        
        cout <<"Insira a string na posicao " << i+1 <<"\n";  
        cin >> read;
        transform(read.begin(), read.end(), read.begin(), ::tolower);
        vtr.push_back(read);
    }
    for(int l = 0; l < vtr.size(); l++) {
    letras += vtr[l].size();
}

system("clear||cls");
    cout << "Total de caracteres: " << letras-6 << endl;
    sort(vtr.begin(), vtr.end());
    for(int j =0;j <n; j++){
        cout <<"Sua palavra na posicao "<<j+1 <<" : "<<vtr[j] << endl;
    }

   return 0;     
}
