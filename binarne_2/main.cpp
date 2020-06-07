#include <iostream>
#include <fstream>

using namespace std;

fstream l;
string a, b ,c;
int lin1=1, lin2=1;

void nm()
{
    l.open("liczby.txt", ios::in);
    while(l.good())
    {
        l>>a;
        b=c=a;
        for(int i=2;i<1001;i++)
        {
            l>>a;
            if(a.length()<b.length())
        {
            b=a;
            lin1=i;
        }
            else if(a.length()==b.length()) if(a<b)
            {
                b=a;
                lin1=i;
            }
        if(a.length()>c.length())
        {
            c=a;
            lin2=i;
        }
            else if(a.length()==c.length()) if(a>c)
            {
                c=a;
                lin2=i;
            }
        }
    }
    cout<<"Linia z najmniejsza liczba="<<lin1<<endl<<"Linia z najwieksza liczba="<<lin2<<endl;
    l.close();
}


int main()
{
    cout << "=======================================================" << endl;
    nm();
    cout << "=======================================================" << endl;

    return 0;
}
