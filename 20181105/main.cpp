#include <iostream>
double DistanceConv( float);
void simon_1(void); //创建函数原型
void simon_2(void);
void Display_time(int,int);

using namespace std;


int main()
{

//    simon_1();
//    simon_1();
//
//    simon_2();
//    simon_2();
    int hours,minutes;
    cout << "Please enter hours: ";
    cin >> hours;

    cout << "Please enter minutes: ";
    cin >> minutes;

    Display_time(hours,minutes);


//    string address,name;
//
//    cout << "Please enter your own address: ";
//    cin >> address;
//    cout <<"My address is: " << address << "!" << endl;
//
//    cout << "Please enter your own name: ";
//    cin >> name;
//    cout <<"My name is: " << name << "!" << endl;
//
//    float Long_dis;double Mich;
//    cout << "Please enter Long_dis: ";
//    cin >> Long_dis;
//    Mich = DistanceConv(Long_dis);
//    cout <<"Reasult of converation is " << Mich << " Mich"<< endl;


    cout << "Hello world!" << endl;
    return 0;
}

double DistanceConv( float m)
{
    using namespace std;
    return ( m * 220);

}

void simon_1(void)
{
    using namespace std;
    cout <<"Three blind mice" <<endl;

}
void simon_2(void)
{
    using namespace std;
    cout <<"See how they run" <<endl;

}

void Display_time(int hours,int minutes)
{
    using namespace std;
    cout <<"Time: " <<hours <<":"<<minutes<<endl;

}


