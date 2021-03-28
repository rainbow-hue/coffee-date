#include <iostream>
#include <string>

using namespace std;

class Date
{
    private:
        string name;
        string age;

    public:
        Date()
        {
            cout << "Hola ! Hello ! Satshriakal ! Namaste ! " << endl;
            cout << "\nEnter your name, por favour : ";
            cin >> name;
            cout << "How old are you ? : ";
            cin >> age;

            cout << "\nHi," << name << " <3." << endl;
        }

        ~Date()
        {
            cout << "\nNvm Bye, I already miss you :)";
        }
};

void loop1()
{
    for (int i = 0; i < 69; i++)
    {
        cout << "=";
    }
    cout << endl;
    return;
}

int main()
{
    Date date;

    char YorN;
    cout << "Should we continue?" << endl;
    cout << "Enter Y for YES or N for NO (please say yes) : " << endl;
    cin >> YorN;

    if(YorN == 'Y')
    {
        loop1();
        cout << "|| X || Coffee Date                                                ||" << endl;
        loop1();
        cout << "||                                                                 ||" << endl;
        cout << "||                                                                 ||" << endl;
        cout << "||               CAN YOU BE MY FOREVER COFFEE DATE ?               ||" << endl;
        cout << "||                                                                 ||" << endl;
        cout << "||               In case you haven't figured it out,               ||" << endl;
        cout << "||                      I like you a latte.                        ||" << endl;
        cout << "||                                                                 ||" << endl;
        cout << "||                           ========                              ||" << endl;
        cout << "||                           || <3 ||                              ||" << endl;
        cout << "||                           ========                              ||" << endl;
        cout << "||                                                                 ||" << endl;
        loop1();
    
    cout << "\nSo, would like to go out on a coffee ;) ? " << endl;
    cout << "Enter Y for Yes or N for no *fingers crossed* : ";
    cin >> YorN;
    
    if(YorN == 'Y')
    {
        cout << "\nYAY !, I am so exicted and really looking forward to it <3." << endl;
        cout << "Now all we got to do is choose a feasible date and time. YAYAYAYAYAY !";
    }
    else
    {
        cout << "okay. -_-";
    }
    }

    cout << "\nEnter any letter to exit : ";
    cin >> YorN;

    return 0;
}