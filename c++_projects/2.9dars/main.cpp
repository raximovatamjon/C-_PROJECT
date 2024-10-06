#include <iostream>
#include <string>
using namespace std;

//1
class Restaurant
{
public:
    string menu;
    int chairs;
    string location;
    int number;
    string CEO;
    int howMuchStaffes;
    double price;
    int cameras;
    string timeTable;
    int rating;

    //construction

    Restaurant(string _menu,int _chairs, string _location, int _number,string _CEO,
               int _howMuchStaffes,int _price,int _cameras,string _timeTable,int _rating)
               {
                  menu= _menu;
                  chairs=_chairs;
                  location=_location;
                  number=_number;
                  CEO=_CEO;
                  howMuchStaffes=_howMuchStaffes;
                  price=_price;
                  cameras=_cameras;
                  timeTable=_timeTable;
                  rating=_rating;

               }
    Restaurant()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r             : "<< 1          <<endl;
        cout << "menu            : "<< menu          <<endl;
        cout << "chairs          : "<< chairs        <<endl;
        cout << "location        : "<< location      <<endl;
        cout << "CEO name        : "<< CEO           <<endl;
        cout << "how much staffs : "<< howMuchStaffes<<endl;
        cout << "price           : "<< price         <<endl;
        cout << "cameras         : "<< cameras       <<endl;
        cout << "timetable       : "<< timeTable     <<endl;
        cout << "number          : "<< number        <<endl;
        cout << "rating          : "<< rating        <<endl;


    }




};

//2
class MedicalClinic
{
public:
    string medname;
    int gadgets;
    string location;
    int number;
    string CEO;
    int doctors;
    double price;
    int ambulence;
    string timeTable;
    int rating;

    //construction

    MedicalClinic(string _medname,int _gadgets, string _location, int _number,string _CEO,
               int _doctors,int _price,int _ambulence,string _timeTable,int _rating)
               {
                  medname  = _medname;
                  gadgets  = _gadgets;
                  location = _location;
                  number   = _number;
                  CEO      = _CEO;
                  doctors  = _doctors;
                  price    = _price;
                  ambulence= _ambulence;
                  timeTable= _timeTable;
                  rating   = _rating;

               }
    MedicalClinic()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r             : "<< 2          <<endl;
        cout << "medname         : "<< medname       <<endl;
        cout << "gadgets         : "<< gadgets       <<endl;
        cout << "location        : "<< location      <<endl;
        cout << "CEO name        : "<< CEO           <<endl;
        cout << "doctors         : "<< doctors       <<endl;
        cout << "price           : "<< price         <<endl;
        cout << "amblence        : "<< ambulence     <<endl;
        cout << "timetable       : "<< timeTable     <<endl;
        cout << "number          : "<< number        <<endl;
        cout << "rating          : "<< rating        <<endl;


    }




};

//3
class School
{
public:
    string sname;
    int rooms;
    string location;
    int number;
    string CEO;
    int teachers;
    double price;
    int footboolA;
    string timeTable;
    int rating;

    //construction

    School(string _sname,int _rooms, string _location, int _number,string _CEO,
               int _teachers,int _price,int _footboolA,string _timeTable,int _rating)
               {
                  sname  = _sname;
                  rooms  = _rooms;
                  location = _location;
                  number   = _number;
                  CEO      = _CEO;
                  teachers  = _teachers;
                  price    = _price;
                  footboolA = _footboolA;
                  timeTable= _timeTable;
                  rating   = _rating;

               }
    School()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r             : "<< 3          <<endl;
        cout << "sname           : "<< sname       <<endl;
        cout << "rooms           : "<< rooms       <<endl;
        cout << "location        : "<< location      <<endl;
        cout << "CEO name        : "<< CEO           <<endl;
        cout << "teachers        : "<< teachers       <<endl;
        cout << "price           : "<< price         <<endl;
        cout << "footboolArea    : "<< footboolA     <<endl;
        cout << "timetable       : "<< timeTable     <<endl;
        cout << "number          : "<< number        <<endl;
        cout << "rating          : "<< rating        <<endl;


    }




};

//4
class Book
{
public:
    string bname;
    int ebook;
    string location;
    int number;
    string writer;
    int choopedY;
    double price;
    int pages;
    string tranlator;
    int rating;

    //construction

    Book(string _bname,int _ebook, string _location, int _number,string _writer,
               int _choopedY,int _price,int _pages,string _translator,int _rating)
               {
                  bname  = _bname;
                  ebook  = _ebook;
                  location = _location;
                  number   = _number;
                  writer      = _writer;
                  choopedY  = _choopedY;
                  price    = _price;
                  pages= _pages;
                  tranlator= _translator;
                  rating   = _rating;

               }
    Book()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r             : "<< 4          <<endl;
        cout << "bname           : "<< bname       <<endl;
        cout << "gadgets         : "<< ebook       <<endl;
        cout << "location        : "<< location      <<endl;
        cout << "writer          : "<< writer           <<endl;
        cout << "choped year     : "<< choopedY       <<endl;
        cout << "price           : "<< price         <<endl;
        cout << "pages           : "<< pages     <<endl;
        cout << "translator      : "<< tranlator     <<endl;
        cout << "number          : "<< number        <<endl;
        cout << "rating          : "<< rating        <<endl;


    }




};

//5
class Student
{
public:
    string sname;
    int age;
    string location;
    int number;
    string job;
    int schoolN;
    double salery;
    int familyM;
    string hobbies;
    int brthday;

    //construction

    Student(string _sname,int _age, string _location, int _number,string _job,
               int _schoolN,int _salery,int _familyM,string _hobbies,int _brthday)
               {
                  sname  = _sname;
                  age  = _age;
                  location = _location;
                  number   = _number;
                  job      = _job;
                  schoolN  = _schoolN;
                  salery    = _salery;
                  familyM = _familyM;
                  hobbies= _hobbies;
                  brthday   = _brthday;

               }
    Student()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r               : "<< 5          <<endl;
        cout << "sname             : "<< sname       <<endl;
        cout << "age               : "<< age       <<endl;
        cout << "location          : "<< location      <<endl;
        cout << "job               : "<< job           <<endl;
        cout << "school number     : "<< schoolN       <<endl;
        cout << "salary            : "<< salery         <<endl;
        cout << "family members    : "<< familyM     <<endl;
        cout << "hobbies           : "<< hobbies     <<endl;
        cout << "number            : "<< number        <<endl;
        cout << "brthiday          : "<< brthday        <<endl;


    }




};
//6
class Job
{
public:
    string jname;
    int gadgets;
    string location;
    int number;
    string CEO;
    int workers;
    double price;
    int cars;
    string timeTable;
    int rating;

    //construction

    Job(string _jname,int _gadgets, string _location, int _number,string _CEO,
               int _workers,int _price,int _cars,string _timeTable,int _rating)
               {
                  jname  = _jname;
                  gadgets  = _gadgets;
                  location = _location;
                  number   = _number;
                  CEO      = _CEO;
                  workers  = _workers;
                  price    = _price;
                  cars= _cars;
                  timeTable= _timeTable;
                  rating   = _rating;

               }
    Job()
    {

    }

    void DisplayInfo()
    {
        cout << "T/r             : "<< 6          <<endl;
        cout << "jname           : "<< jname       <<endl;
        cout << "gadgets         : "<< gadgets       <<endl;
        cout << "location        : "<< location      <<endl;
        cout << "CEO name        : "<< CEO           <<endl;
        cout << "workers         : "<< workers       <<endl;
        cout << "price           : "<< price         <<endl;
        cout << "cars            : "<< cars     <<endl;
        cout << "timetable       : "<< timeTable     <<endl;
        cout << "number          : "<< number        <<endl;
        cout << "rating          : "<< rating        <<endl;


    }




};





int main()
{
    /*
    Quyidagilarga class yarating.
    Har biri uchun kamida 10 tadan hususiyati bo'lsin.
    Har biri uchun 2 tadan constructor bo'lsin.
    1 chisi malumot qabul qilmaydigan
    2 chisi hamma malumotni qabul qiladigan.
    Har birida DisplayInfo() nomli method bo'lsin
    1.Restaurant
    2.MedicalClinic
    3.School
    4.Book
    5.Student
    6.Job
    */

    Restaurant r1 = Restaurant("osh",12,"Samarkand",932349999,"Gulchap chap",150.000,200.000,10,"everyday 9 am to 8pm",1);
    r1.DisplayInfo();

    cout<<endl;

    MedicalClinic m1 = MedicalClinic("ko'p tarmoqli",23,"toshkent",932346262,"sherxon",121,50.000,3,"everyday 8 am to 11pm",3);
    m1.DisplayInfo();

    cout<<endl;

    School s1 = School("ois",65,"surxandaryo",662315555,"m.i.g",27,300000,2,"monday to saturday 8 am to 5pm",123);
    s1.DisplayInfo();

    cout<<endl;

    Book b1 = Book("ikki gai",1,"overseas",513,"alisher Navoiy",2016,25.000,182,"abdula avloniy muqumiy ",8);
    b1.DisplayInfo();

    cout<<endl;

    Student sS1 = Student("ko'p tarmoqli",23,"toshkent",932346262,"sherxon",121,50.000,3,"everyday 8 am to 11pm",3);
    sS1.DisplayInfo();

    cout<<endl;

    Job j1 = Job("police",67,"urgench",102,"sherobod 5",1000,500.000,200,"24/7",188);
    j1.DisplayInfo();

    cout<<endl;



    return 0;
}
