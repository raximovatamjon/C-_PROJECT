#include <iostream>

using namespace std;

int main()
{

    ///Ikkita a va b soni berilgan. Berilgan sonlarni qaysi birini bo'luvchilari ko'pligini topuvchi dastur tuzing.

    /*
    int i,a,b,j,sanoqA,sanoqB;
    cout << "a ni kirit: ";
    cin >> a ;
    cout << "b ni kirit: ";
    cin >> b ;

    sanoqA = 0;
    i = 1;


    while ( i <= a)
    {
        if ( a % i == 0)

                  sanoqA ++;

        i++;
    }


    sanoqB = 0;
    j = 1;


    while ( j <= b)
    {
        if ( b % j == 0)

                  sanoqB ++;

        j++;
    }


    if (sanoqA > sanoqB)
    {
        cout << a <<" ning bo'luvchilari ko'p "<< sanoqA <<"ta"<<endl;
    }
    else
    {
        cout << b <<" ning bo'luvchilari ko'p "<< sanoqB<< "ta"<<endl;
    }
*/




    ///Ikkita a va b sonlari berilgan. a soni b dan kichik a dan b gacha bo'lgan sonlarni yeg'indisi aniqlovchi dastur tuzing. ( a va b  yegindiga kirmasin ).

    /*
    int i,a,b,summa;
    cout << "a ni kirit: ";
    cin >> a ;
    cout << "b ni kirit: ";
    cin >> b ;


    i = a;
    summa = 0;


    while ( i < b)
    {
        if ( a < b )
        {
            cout<< i << " ";
            summa += i;


        }



        i++;
    }
    cout<< "natija"<< summa <<endl;
    */

    return 0;
}
