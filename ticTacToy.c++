#include <iostream>
using namespace std;

class TicTacToy
{
public:
    int toyArray[9];
    int k = 0;
    int win = 0;
    void setTicToyElement()
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << "Enter the value for [" << i << "][" << j << "]: ";
                cin >> toyArray[k++];
            }
        }
    }

    void looseWin()
    {

        if (toyArray[0] == toyArray[1] == toyArray[2])
        {
            cout<<"1"<<endl;
            win = 1;
        }
        else if (toyArray[3] == toyArray[4] == toyArray[5])
        {
            cout<<"2"<<endl;
            win = 1;
        }
        else if (toyArray[6] == toyArray[7] == toyArray[8])
        { 
            win = 1;
        }
        else if (toyArray[0] == toyArray[3] == toyArray[6])
        {
            cout<<"4"<<endl;
            win = 1;
        }
        else if (toyArray[1] == toyArray[4] == toyArray[7])
        {
            cout<<"5"<<endl;
            win = 1;
        }
        else if (toyArray[2] == toyArray[5] == toyArray[8])
        {
            cout<<"6"<<endl;
            win = 1;
        }
        else if (toyArray[0] == toyArray[4] == toyArray[8])
        {
            cout<<"7"<<endl;
            win = 1;
        }
        else if (toyArray[2] == toyArray[4] == toyArray[6])
        {
            win = 1;
            cout<<"8"<<endl;
        }
        else
        {
            win = 0;
        }


    }

    void displayTicToyElement()
    {
        for (int i = 0; i < 9; i++)
        {
            cout << toyArray[i] << " ";
            if (i % 3 == 2)
            {
                cout << endl;
            }
        }

        if(win){
            cout<<"\nYou Win!"<<endl;
        }else{
            cout<<"\nYou Loose!"<<endl;
        }
    }
};

int main()
{

    TicTacToy ticTacToy;
    ticTacToy.setTicToyElement();
    ticTacToy.looseWin();
    ticTacToy.displayTicToyElement();

    return 0;
}