#include <iostream>

using namespace std;

class Choineczka
{
    private:
    int ilosc;
    public:
    void Ustaw (int ile)
     {
         ilosc = ile;
     }
    void Narysuj()
    {

    for (int i=1 ; i<=ilosc ; i++)
        {
        for (int j=1 ; j<=ilosc-i; j++)
            cout << " ";
        for (int k=1; k<=(2*i)-1; k++)
            cout << "*";
                cout << endl;



        }
    }
};


int main(int argc, char* argv)
{
   Choineczka p;
   int ilosc;
   cin >> ilosc;
   p.Ustaw(ilosc);
   p.Narysuj();
    return 0;
}
