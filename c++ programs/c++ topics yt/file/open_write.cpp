#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string name = "my name is saurav verma";
    ofstream out("myfile.txt");
    out<< name ;
    return 0;
}