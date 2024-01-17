#include <iostream>
#include <string>
using namespace std;

int vwl = 0;
void Cnt_Vowl(string x, int i)
{
    if (i < -1)
    {
        return;
    }

    if (x[i] == 'A' || x[i] == 'E' || x[i] == 'I' || x[i] == 'O' || x[i] == 'U' || x[i] == 'a' || x[i] == 'e' || x[i] == 'i' || x[i] == 'o' || x[i] == 'u')
    {
        vwl++;
    }
    Cnt_Vowl(x, i - 1);
}

int main()
{
    string inpt_line;
    getline(cin, inpt_line);
    int str_len = inpt_line.length();
    Cnt_Vowl(inpt_line, str_len - 1);
    cout << vwl << "\n";
    return 0;
}