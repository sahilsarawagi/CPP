# include <iostream>
using namespace std;
class Complex{
     int a,b;
     public :
        void setNumber(int n1,int n2){
            a=n1;
            b=n2;
        }
        friend Complex SumByocom(Complex o1 ,Complex o2);  //This line mean that sumbycomplex function is allowed to do anything with my private members
        void printData(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl; 
        }
};
Complex SumByocom(Complex o1,Complex o2){
    Complex o3;
    o3.setNumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
int main(){
    Complex c1,c2,sum;
    c1.setNumber(4,6);
    c1.printData();
    c2.setNumber(5,3);
    c2.printData();
    sum=SumByocom(c1,c2);
    sum.printData();

    return 0;
}
/*
poperties of friend is_function
1. not in the scope of class
2.since it is not in the socpe of the class, it cannot be called from the object of that class. c1.sumByComplex() == Invalid
3. Can be involved without the help of any object
4. usually contain the object as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the member directly by their naems and need object_name.member_name to access any member.  
*/ 