#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
using namespace std;
int i,ok;
char  var,m[3][3],avar;
int ai,aj,pi,pj;
void clear_screen()
{
  printf( 
    "\033[2J"       // clear the screen
    "\033[1;1H" );  // move cursor home
}
void setup() {
    cout<<"X si 0";
    Sleep(5);
    cout<<"X sau 0?"<<endl;
    cin>>var;
    while (var!='X' && var!='x' && var!='0'){
        cout<<"invalid!"<<endl<<"X sau 0?"<<endl;
        cin>>var;
    }
    if(var=='X' || var=='x') avar='0';
    else avar='X';
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            m[i][j]='/';
        }
    }
}
void choose() {
    do{
        ai=rand()%3;
        aj=rand()%3;
    }while (m[ai][aj]!='X' && m[ai][aj]!='0');
    m[ai][aj]=avar;
}
void print () {
    clear_screen();
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Scrie indexul urmatoarei mutari";
}
void logic () {

}
int main () {
    setup();
    while (true){
        choose();
        print();
        Sleep(1000);
    }
    return 0;
}