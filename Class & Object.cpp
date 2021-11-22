// How to use and declare class & object
#include<iostream>
#include<conio.h>
using namespace std;
class student{
public :
        int roll;
        double cgpa;

};
int main()
{
    student tuli,khairul;

    tuli.roll =  101;
    tuli.cgpa =  3.84;
    khairul.roll =  102;
    khairul.cgpa =  3.24;


    cout<< tuli.roll <<  "  "<<tuli.cgpa << "  "<<endl;
    cout<< khairul.roll <<  "  "<<khairul.cgpa << endl;


    getch();
}





