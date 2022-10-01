#include<iostream>
using namespace std;
int c=96;  //Here c is declare globally 
int main()
{


    //      ***************BUILD IN DATA TYPES*************************



    int a ,b , c;
    cout<<"Enter any number";
    cin>>a;
    cout<<"Enter any number";
    cin>>b;
    c=a+b;
    cout<<"The value of c is "<<c;
    // Scope resolution operator (::)-----> it is used to access variable data as globally.
    cout<<"The vlaue of c is" <<::c <<endl;



    //*************FLOAT, DOUBLE AND LONG DOUBLE DATA TYPES*******************




    float man=67.86;//Here i write float before variable. But if i am going to pass 67.86 in any operation then by default it considered as double so what we have to do in order to make some float .......It is just simply add "f" after man=67.86f. similary we can also include l for long double. There is no restriction on capital letter.
    float prem=69.69f;
    long double women=96.256;
    cout<<"The value of man is "<<man;
    cout<<"prem value is"<<prem <<endl;
    cout<<"The size of 69.69 is "<<sizeof(69.69)<<endl;
    cout<<"The size of 69.69f is "<<sizeof(69.69f)<<endl;
    cout<<"The size of 69.69l is "<<sizeof(69.69l)<<endl;
    cout<<"The size of 69.69F is "<<sizeof(69.69F)<<endl;
    cout<<"The size of 69.69L is "<<sizeof(69.69L)<<endl;


    // ***************REFERENCE VARIABLE*************************

         // PREM SAGAR----->RAJA------>PREM------->SAGAR BUT THERE IS ONLY ONE PERSON.
    float var=100;
    float &y=var;
    cout<<"The value of var is:"<<var<<endl;
    cout<<"The value of y is:"<<y<<endl;
    


         //***************TYPE CASTING*********************

    int abc=1993;
    cout<<"The value of abc is: "<<(float)abc<<endl; //or we can write as cout<<"The value of abc is: "<<float(abc)<<endl;
    cout<<"The size of abc is:"<<sizeof((float)abc); 
    float bcd=1456.3;
    cout<<"The value of bcd is: "<<(int)bcd<<endl;
     cout<<"The size of bcd is:"<<sizeof(int(bcd)); 


    return 0;
}