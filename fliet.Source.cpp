#include <iostream>
using namespace std;

int main() {

    cout << "Welcome to Royal Air " << endl;
    char  Airplane[13][6] = { "x" };

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            Airplane[i][j] = '*';
        }

    }


    for (int m = 1; m < 7; m++)
        cout << "     " << m << " ";
    cout << endl;

    for (int i = 0; i < 13; i++)
    {
        cout << i + 1 << "    ";
        for (int j = 0; j < 6; j++)
        {

            cout << Airplane[i][j] << "      ";

        }

        cout << endl;

    }


    while (true) {
        cout << "1 add  <> 2 prent  <> end 3" << endl;
        int b;
        cin >> b;

        if (b == 1) {



            cout << "entr valuo" << "   " << " first clas--> 1-2 seat  business- class--> 3-7seat   economy class-->8-13 seat   " << endl;


            int row = 1;
            int x = 1;
            cin >> row;

            if (row == 1 || row == 2)
            {

                cout << "first class Desired seat 1=>6" << endl;
                cin >> x;
                if (x <= 6 && x >= 0) {

                    if (Airplane[row - 1][x - 1] != 'x')
                    {

                        Airplane[row - 1][x - 1] = 'x';
                    }

                    else cout << "airplane is full +_+" << endl;
                }
                else if (row >= 3 || row <= 7)
                {
                    cout << "business class Desired seat 1=>6" << endl;
                    cin >> x;


                    if (x <= 6 && x >= 0)
                    {

                        if (Airplane[row - 1][x - 1] != 'x') 
                        {

                            Airplane[row - 1][x - 1] = 'x';
                        }

                        else cout << "airplane is full +_+" << endl;
                    }
                }


                else if (row >= 8 || row <= 13)
                {
                    cout << "economy class Desired seat 1=>6" << endl;
                    cin >> x;
                    if (x <= 6 && x >= 0)
                    {

                        if (Airplane[row - 1][x - 1] != 'x') 
                        {

                            Airplane[row - 1][x - 1] = 'x';
                        }
                        else cout << "airplane is full +_+" << endl;
                    }
                }

            }

        }
        else if (b == 2) {


            for (int m = 1; m < 7; m++)
                cout << "     " << m << " ";
            cout << endl;

            for (int i = 0; i < 13; i++)
            {
                cout << i + 1 << "    ";
                for (int j = 0; j < 6; j++) 
                {

                    cout << Airplane[i][j] << "      ";

                cout << endl;
            }

        }

        else if (b == 3) {

            return 0;
        }
    }

}