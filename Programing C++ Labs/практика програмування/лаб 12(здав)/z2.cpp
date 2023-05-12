#include <iostream>
#include <string>

using namespace std;
int main(){
    int i, j;
    setlocale(LC_ALL, "ukr");
    string word;
    cout << "Введіть слово : "<<endl; 
    cin>>word;
    for (i=0, j=word.size()-1; i<=j; i++, j--) 
        if (word[i]!=word[j])
        {
            cout<<"Не паліндром";
            return 0;
        }
        cout<<"Паліндром";
}

