#include <iostream>
#include <string>

using namespace std;
int main(){
    int i, j;
    setlocale(LC_ALL, "ukr");
    string word;
    cout << "������ ����� : "<<endl; 
    cin>>word;
    for (i=0, j=word.size()-1; i<=j; i++, j--) 
        if (word[i]!=word[j])
        {
            cout<<"�� ��������";
            return 0;
        }
        cout<<"��������";
}

