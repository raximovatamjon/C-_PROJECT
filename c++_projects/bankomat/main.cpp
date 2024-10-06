#include <iostream>

using namespace std;

int main()
{

    double money=500,newmoney;
    string password="0000";
    string newPassword;
    string newPassword1;
    string newPassword2;
    string phoneNumber;

    int choice;
    int counter = 0;


    while (true )
    {
        cout << "enter the password : ";cin >> newPassword;
        if (password==newPassword)
        {
            while (true)
            {

                cout<< "1. Get cash        \n"  ;
                cout<< "2. See cash        \n"  ;
                cout<< "3. Change password \n"  ;
                cout<< "4. See password    \n"  ;
                cout<< "5. Connect to SMS  \n"  ;
                cout<< "6. Finish process  \n"  ;
                cout<< "Enter number : "; cin >> choice;


                switch(choice)
                {
                case 1 :
                    cout << " How much get you cash : "; cin >>newmoney;
                    if (money >= newmoney && newmoney > 0)
                    {
                        money = money - newmoney;
                        cout << "Cash was gotten \n" ;
                    }
                    else cout << "Error cash was unlikely get ! \n" ;

                break;

                case 2 :
                    cout << "your's balance : "<< money << endl;

                break;

                case 3 :
                    cout << "Enter the old password : \n";cin >> newPassword;
                    cout << "Enter the new password : \n";cin >> newPassword1;
                    cout << "Re-enter  new password : \n";cin >> newPassword2;
                    if (password==newPassword && newPassword1 == newPassword2)
                    {
                        password=newPassword1;
                        cout << "password has sucessfully changed !"<<endl;
                    }
                    else cout << "There is an error in the password or new password \n";

                break;
                case 4 :
                    cout << "Password :"<< password<<endl;

                break;
                case 5 :
                    cout << "Enter phone number : ";cin >> phoneNumber;
                    cout << "SMS has sucessfully connected ! \n";

                break;
                case 6 :
                    cout << "Thank,process finished ! \n";
                    return 0;
                break;

                }


            }
        }
        else
    {
        counter++;
        if ( counter == 3)
        {
            cout << "Card blocked \n";
        }
        else cout << "password is incorrect.Try again!!  \n";
    }


    }







    return 0;
}
