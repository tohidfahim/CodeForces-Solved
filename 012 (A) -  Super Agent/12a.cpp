#include<iostream>
using namespace std;

int main()
{
    char ch[9];
    for (int i=0; i<9; i++)
    {
        cin >> ch[i];
    }

    if(ch[0]==ch[8] && ch[1]==ch[7] && ch[2]==ch[6] && ch[3]==ch[5]) cout << "YES" << endl;
    else cout << "NO" << endl;
}
