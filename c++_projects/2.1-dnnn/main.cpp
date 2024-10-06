#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;

int getRandomNumber( int start, int finish ) /// 10 : 50
{
    int number = rand() % (finish-start+1) + start;
    return number;
}

bool toqmi (int son)
{
    if (son %2 != 0)return true;

    return false;
}

bool juftmi (int son)
{
    if (son %2 == 0)return true;

    return false;
}

bool ikkiXonalimi(int son)
{
    if (son >=10 && son <=99)return true;

    return false;
}

bool kattami(int son1,int son2)
{
    if (son1 > son2)return true;

    return false;
}
bool kichikmi(int son1,int son2)
{
    if (son1 < son2)return true;

    return false;
}






int main()
{
    srand(time(0));

    ///n ta butun sonlardan iborat massiv berilgan. Massivdagi har bir juft sonni birinchi uchragan juft songa orttiruvchi programma tuzilsin.


    /*
    int n;
    cout << "n ="; cin >> n;

    int arr[n];



    for( int i = 0; i < n; i++ )
    {
       arr[i]=getRandomNumber(10,50);
       cout << arr[i] << " ";
    }

    cout << endl;



    /// logic



    for (int i =0;i < n-1;i++)
    {
        if (juftmi(arr[i]) && juftmi(arr[i+1]))cout << arr[i]*arr[i+1];
    }
    */





    ///n ta butun sonlardan iborat massiv berilgan. Massivdagi har bir toq sonni oxirgi toq songa orttiruvchi programma tuzilsin.

    /*
    int n;
    cout << "n ="; cin >> n;

    int arr[n];

    for( int i = 0; i < n; i++ )
    {
        cout << i <<" :";cin >>arr[i];

    }

    cout << endl;

    /// logic



    for (int i =0;i < n+1;i++)
    {
        if (toqmi(arr[i]) * arr[n-1] ) cout << arr[i];

    }
    */



    ///n ta elementdan tashkil topgan massiv berilgan. Massivning juft indeksli elementlari orasidan kichigini aniqlovchi programma tuzilsin. min(a0, a2, a4, ...)



    int n;
    cout << "n ="; cin >> n;

    int arr[n];

    for( int i = 0; i < n; i++ )
    {
        cout << i <<" :";cin >>arr[i];

    }

    cout << endl;

    /// logic

    int j[n] ;
    int topdim = j[0];
    int kichik = INT_MIN;

    for (int i =0;i < n;i++)
    {
        if (juftmi(arr[i]) )
        {
            j[i]=arr[i];

        }
        if (j[i] < kichik)
        {
            kichik = j[i];
        }

    }
    cout << "natija :"<< kichik<< endl;









    return 0;
}
