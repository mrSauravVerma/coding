 #include<iostream>
 using namespace std;
 int main()
 {
    int *p= new int(10);
    cout<<"value of ptr : "<<*p<<endl;

      //deallocate memory with the help of delet opreator
      delete p;

      cout<<"value of ptr : "<<*p<<endl;
      return 0;  
 }