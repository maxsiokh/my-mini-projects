#include <bits/stdc++.h>
#include <Windows.h>
#include <time.h>
#include <unistd.h>

using namespace std;




void download (){
	cout << "������������";
 
    for (int i; i<1; i++) {
        sleep(1);
        cout << "." << flush;
        sleep(1);
        cout << "." << flush;
        sleep(1);
        cout << "." << flush;
        
    }
}


class bird {
	public:
		string text;
		
		void reading(){
			cout << "������� �����";
			for (int i; i<1; i++) {
	        sleep(1);
	        cout << "." << flush;
	        sleep(1);
	        cout << "." << flush;
	        sleep(1);
	        cout << "." << flush;
	        
	    }

			ifstream open ("file.txt");
			
			if (!open)cout << "���� �� ��������!"<<endl;
			else {
				cout << "\n���� �������!"<<endl;
				
				download ();
				cout << "\n\n---------����� ���� ��� � ����---------"<<endl;
				cout << endl;
				while (getline(open,text)){
					cout << text<<endl;
				}
				
			}	
			open.close();
			
			
			
		}
		void sorting(){
			cout << endl;
			cout<< "---------����������---------"<<endl;
			sort(text.begin(), text.end());
			for (int i = text.size()-1; i>=0; i--){
				if (text[i+1]==text[i])
					text.erase(i,1);
			}
			cout << "\n\n"<<text;
}
};


int main (){
	
	setlocale(LC_ALL, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	bird name;
	name.reading();
	name.sorting();	
	
}
