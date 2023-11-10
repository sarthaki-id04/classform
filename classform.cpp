#include <iostream>
using namespace std;
class form
{
string name;
char gender;
float sscmarks;
float hscmarks;
long int phoneno;
};
int main()
{ 
    form student;
    student.name="sarthaki";
    student.gender='F';
    student.sscmarks=98.00;
    student.hscmarks=87.50;
    student.phoneno=7385830570;

    cout<<student.name<<"\n"<<student.gender<<"\n"<<student.sscmarks<<"\n"<<student.hscmarks<<"\n"<<student.phoneno<<"\n";
}
