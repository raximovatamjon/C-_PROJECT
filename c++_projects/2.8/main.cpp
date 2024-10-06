#include <iostream>

using namespace std;

string withoutX( string s)// @@xhix
{
    for(int i= 0; i < s.length();i++)
    {
        if (s[i]== '@')
        {
            s.erase(i,1);
            i--;

        }

    }



    return s;
}






int main()
{

    ///1 ta string berilgan. Shu stringdagi '@' belgilarini o'chirib qaytaruvchi funksiya tuzing.
    string s1;
    cout << "s1 kirit :";
    getline(cin,s1);



    cout << withoutX(s1);




    return 0;
}
