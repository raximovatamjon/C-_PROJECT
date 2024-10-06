#include <iostream>
#include <string>
#include <ctime>
#include <vector>
using namespace std;

bool tubmi(int son)
{
    int sanoq=0;
    for(int i = 1; i <= son ; i++)
    {
        if(son % i ==0)sanoq++;
    }
    if (sanoq == 2)return true;
    else return false;

}





int main()
{
    srand(time(0));
    ///n ta elementdan tashkil topgan arr massive berilgan. Massivedagi tub elementlarini 2 martaga oshiruvchi dastur tuzing.


    int n;
    cout <<"n soni : ";cin>> n;

    int arr[n];//4 5 7 8 6
               //4 10 14 8 6

    for (int i = 0; i < n; i++)
    {
        arr[i]= rand() % 10+2;
        cout << arr[i]<< " ";
    }
    cout<<endl;

    //logic

    for(int i =0;i<n;i++)
    {
        if(tubmi(arr[i]))arr[i]=arr[i]*2;
    }
    for(int i =0;i<n;i++)
    {
        cout << arr[i] << " ";

    }













    return 0;
}
