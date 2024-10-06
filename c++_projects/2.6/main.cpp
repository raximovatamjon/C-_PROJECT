#include <iostream>
#include <ctime>
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

    ///

    string s;
    cout <<"s ni kirit:";//hello
    getline(cin,s);

    int a=s.length()*2;
    char b=s[s.length()-1] ;

    s.resize(a,b);

    cout << "natja:"<<s <<endl;





    ///n ta butun sonlardan iborat massiv berilgan. Massivdagi har bir toq sonni oxirgi toq songa orttiruvchi programma tuzilsin.

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

    int summa=0;//58

    for (int i =0;i < n;i++)
    {
        if (arr[i] % 2 != 0)
        {
            summa += arr[i];
        }
        for (int j=0; j< n-1;j++)
        {
            cout << summa + arr[n-1]<< " ";break;
        }


    }
    */




    ///n ta elementdan tashkil topgan massiv berilgan. Massivning juft indeksli elementlari orasidan kichigini aniqlovchi programma tuzilsin. min(a0, a2, a4, ...)


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
    cout << "natija "<< endl;// 12 6 5 7


    int indexjuft = arr[0] ;
    int indexkichik = arr[0] ;



    for (int i =0;i < n;i++)
    {

        if (arr[i] % 2 == 0)
        {
            indexjuft = arr[i];
            if (indexkichik > arr[i])
                indexkichik=arr[i];
        }
    }
    cout << "natija :" << indexkichik<< endl;
    */








    return 0;
}
