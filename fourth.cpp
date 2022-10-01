// There are two types of header files:
//  1.system header files: it comes with the compiler.
#include<iostream>
//  2.user defined header files: written by programmer.
// #include "prem.h"-------> such types of header files is created.if we create prem.h then by including #include "prem.h" it will not show any error message.
using namespace std;
int main()
{   
    int a=5,b=6;
    cout<<"TOPIC: HEADER FILE AND OPERATOR (#6)";
    cout<<"Operator in c++"<<endl; //end1 is used to go into a new line.
    //Arithematic operator:
    cout<<"The value of a+b is" <<a+b <<endl;

    cout<<"The value of a-b is" <<a-b <<endl;

    cout<<"The value of a*b is" <<a*b <<endl;

    cout<<"The value of a/b is" <<a/b <<endl;

    cout<<"The value of a++ is" <<a++ <<endl;

    cout<<"The value of a-- is" <<a-- <<endl;

    cout<<"The value of ++a is" <<++a <<endl;

    cout<<"The value of --a is" <<--a<<endl;

    //Assinment operator ----> =
    // Comparision operator
    cout<<"The value fo a==b is"<<(a==b)<<endl;

    cout<<"The value fo a!=b is"<<(a!=b)<<endl;

    cout<<"The value fo a>b is"<<(a>b)<<endl;

    cout<<"The value fo a<b is"<<(a<b)<<endl;

    cout<<"The value fo a<=b is"<<(a<=b)<<endl;

    cout<<"The value fo a>=b is"<<(a>=b)<<endl;

    //Logical operator
    cout<< "The value of this logical and operator {(a+b)&&(a-b)} is :"<<((a+b)&&(a-b))<<endl;

    cout<< "The value of this logical or operator {(a+b)||(a-b)} is :"<<((a+b)||(a-b))<<endl;
    
    cout<< "The value of this logical not operator {!(a=b)} is :"<<!(a==b)<<endl;


    return 0;
}
