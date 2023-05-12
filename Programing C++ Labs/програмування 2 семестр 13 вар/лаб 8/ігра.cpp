#include <iostream>  
#include <time.h> 
#include <stdio.h> 
#include <windows.h> 
#include <conio.h>  
#include <Windows.h>
 
using namespace std;
 
 
 
HANDLE hConsole;

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
 
void GotoXY(int X, int Y)
{
    COORD coord = { X, Y };
    SetConsoleCursorPosition(hStdOut, coord);
} 

enum ConsoleColor
{
        Black         = 0,
        Blue          = 1,
        Green         = 2,
        Cyan          = 3,
        Red           = 4,
        Magenta       = 5,
        Brown         = 6,
        LightGray     = 7,
        DarkGray      = 8,
        LightBlue     = 9,
        LightGreen    = 10,
        LightCyan     = 11,
        LightRed      = 12,
        LightMagenta  = 13,
        Yellow        = 14,
        White         = 15
};
 
void SetColor(ConsoleColor text, ConsoleColor background)
{
    SetConsoleTextAttribute(hStdOut, (WORD)((background << 4) | text));
}
 
 
class Zmeja  // змейка 
{
    public:COORD *t; 
    public:int PCount; 
};
enum uprawlenie{LEFT,UP,RIGHT,DOWN}; 
class Game 
{
    public:
	Zmeja gaduka; 
    COORD jabloko; 
    int dx,dy; 
    int pause; 
    int nap; 
    
};
 
 
void PlusJabloko(Game &g) 
{
    int i,x,y;
    int n = g.gaduka.PCount;
    do
    {
        x = rand() % 56+3; 
        y = rand() % 19+3; 
        for(i = 0; i < n; i++)
        {
            if(x == g.gaduka.t[i].X && y == g.gaduka.t[i].Y) // проверка
                break;
        }
    }
    while(i < n);
    g.jabloko.X = x; 
    g.jabloko.Y = y; 
    SetConsoleCursorPosition(hConsole, g.jabloko); 
    SetConsoleTextAttribute(hConsole,0x0c); //колір  
    printf("*", 4); 
    
}
 
 
void skorostGame(Game &g) 
{
    system("cls");
    g.gaduka.PCount = 3; 
    g.gaduka.t = new COORD [3];
    for(int i = 0; i < 3; i++)
    {
        g.gaduka.t[i].X = 20 + i;
        g.gaduka.t[i].Y = 20;
        
    }
    g.dx = 1;
    g.dy = 0;
    g.pause = 100;
    PlusJabloko(g);
}


void STENA_2() 
{

  
    GotoXY(64,3);cout <<  "Яблука:0" << endl ; 
    GotoXY(64,4); cout <<  "Довжина:3"<< endl; 
    GotoXY(64,5); cout <<  "Швидкість:0" << endl; 

                {SetColor(LightRed , Black);
                // стінки
                GotoXY(2,2); 
                int m = 0;
                for(m = 0; m < 60; m++)
                {
                    printf("-");
                }
                }
                
                {
                    GotoXY(2,24); 
                    int m = 0;
                    for(m = 0; m < 60;m++)
                    {
                        printf("-");
                    }
                }
                {   
                    GotoXY(2,3); cout << "l"<<endl;
                    GotoXY(2,4); cout << "l"<<endl;
                    GotoXY(2,5); cout << "l"<<endl;
                    GotoXY(2,6); cout << "l"<<endl;
                    GotoXY(2,7); cout << "l"<<endl;
                    GotoXY(2,8); cout << "l"<<endl;
                    GotoXY(2,9); cout << "l"<<endl;
                    GotoXY(2,10); cout << "l"<<endl;
                    GotoXY(2,11); cout << "l"<<endl;
                    GotoXY(2,12); cout << "l"<<endl;
                    GotoXY(2,13); cout << "l"<<endl;
                    GotoXY(2,14); cout << "l"<<endl;
                    GotoXY(2,15); cout << "l"<<endl;
                    GotoXY(2,16); cout << "l"<<endl;
                    GotoXY(2,17); cout << "l"<<endl;
                    GotoXY(2,18); cout << "l"<<endl;
                    GotoXY(2,19); cout << "l"<<endl;
                    GotoXY(2,20); cout << "l"<<endl;
                    GotoXY(2,21); cout << "l"<<endl;
                    GotoXY(2,22); cout << "l"<<endl;
                    GotoXY(2,23); cout << "l"<<endl;
                }
                {   
                    GotoXY(61,3); cout << "l"<<endl;
                    GotoXY(61,4); cout << "l"<<endl;
                    GotoXY(61,5); cout << "l"<<endl;
                    GotoXY(61,6); cout << "l"<<endl;
                    GotoXY(61,7);cout << "l"<<endl;
                    GotoXY(61,8); cout << "l"<<endl;
                    GotoXY(61,9); cout << "l"<<endl;
                    GotoXY(61,10); cout << "l"<<endl;
                    GotoXY(61,11); cout << "l"<<endl;
                    GotoXY(61,12); cout << "l"<<endl;
                    GotoXY(61,13); cout << "l"<<endl;
                    GotoXY(61,14); cout << "l"<<endl;
                    GotoXY(61,15); cout << "l"<<endl;
                    GotoXY(61,16); cout << "l"<<endl;
                    GotoXY(61,17); cout << "l"<<endl;
                    GotoXY(61,18); cout << "l"<<endl;
                    GotoXY(61,19); cout << "l"<<endl;
                    GotoXY(61,20); cout << "l"<<endl;
                    GotoXY(61,21); cout << "l"<<endl;
                    GotoXY(61,22); cout << "l"<<endl;
                    GotoXY(61,23); cout << "l"<<endl;
                }
}
 
 
//фінкція дя руху
enum {KONEC, STENA,  PLUS, MOVE};
int Move(Game &g)
{
    int & n = g.gaduka.PCount;
    COORD head = g.gaduka.t[n - 1]; //голова
    COORD tail = g.gaduka.t[0]; //хвіст
    COORD next;
    next.X = head.X + g.dx;
    next.Y = head.Y + g.dy; 
 
    if(next.X < 3 || next.Y < 3 || next.X > 60 || next.Y > 23)// стіна удар
        return STENA;
 
    if(n > 4)
    {
        for(int i = 0; i < n; i++)
            if(next.X == g.gaduka.t[i].X && next.Y == g.gaduka.t[i].Y) //сама в себе
                return KONEC;
    }
 
    if(next.X == g.jabloko.X && next.Y == g.jabloko.Y)
    {
        COORD*temp = new COORD[ ++n ]; 
        for(int i = 0; i < n; i++)
            temp[i] = g.gaduka.t[i]; 
        temp[n - 1] = next; 
        delete [] g.gaduka.t;
        g.gaduka.t = temp;
 
        SetConsoleCursorPosition(hConsole,head);
        SetConsoleTextAttribute(hConsole, 0x0a); 
        printf("*");
        SetConsoleCursorPosition(hConsole,next);
        SetConsoleTextAttribute(hConsole,0x0a);
        printf("*",1);
        PlusJabloko(g);
        return PLUS;
    }
 
    for(int i = 0; i < n - 1; i++)
        g.gaduka.t[i] = g.gaduka.t[i + 1];
    g.gaduka.t[n - 1] = next;
    SetConsoleCursorPosition(hConsole,tail);
    printf(" ");
 
    SetConsoleCursorPosition(hConsole,head);
    SetConsoleTextAttribute(hConsole, 0x0a);
    printf("*");
    SetConsoleCursorPosition(hConsole,next);
    SetConsoleTextAttribute(hConsole,0x0f); 
    printf("*",1);
 
    return MOVE;
}
 
 
int main()
{
	setlocale(LC_ALL, "");
	
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
 
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE); 

    int key = 0, count = 0;
    bool Pause=false;
    Game g;
    skorostGame(g);
    STENA_2();
    srand(time(0));
    bool pause = false;
    while(key != 27)
    {
        while(!kbhit())
        {
            if(Pause==true)
            {
                Sleep(1); 
                continue;
            }
 
            switch (Move(g))
            {
 
            case PLUS:
                ++count;
                g.pause-=1;
                SetColor(LightRed , Black);

                GotoXY(64,3); cout << "Яблука:" <<count << endl;
                GotoXY(64,4); cout << "Довжина:" <<g.gaduka.PCount << endl;
                GotoXY(64,5); cout << "Швидкість:" <<g.pause<< endl;
                
     
                if (count == 50) 
                {
                    SetColor(White , Black);
                    GotoXY(24,1); cout << "Перемога" <<endl; 
                    getch();
                    return(0);
                }
                break;
 
            case STENA:
 
            case KONEC:
                GotoXY(23,1); printf("Програш\t\t"); 
                getch();
                break;
            }
 
            Sleep(g.pause); 
        }
    key = getch();
 
        if(key==0||key==224)
        {
            key=getch();
            
            if(key == 72 && g.nap != DOWN)
            {
                g.nap = UP;
                g.dx = 0;
                g.dy = -1;
            }
            else if(key == 80 && g.nap != UP)
            {
                g.nap = DOWN;
                g.dx = 0;
                g.dy = 1;
            }
            else if(key == 75 && g.nap != RIGHT)
            {
                g.nap = LEFT;
                g.dx = -1;
                g.dy = 0;
            }
            else if(key == 77 && g.nap != LEFT)
            {
                g.nap = RIGHT;
                g.dx = 1;
                g.dy = 0;
            }
        }
    }
}
