# include <iostream>
using namespace std;

int main(){
/* in c/c++  the array is itself the address 
for example , if we define an array
int marks[55];
then this marks is the address so, we want to make a pointer then we write
int *b=marks;         (This is correct)
int *b=&marks;         (This is wronggggggg)

so we can also give vlaue to array by the help of pointer
*(p)=66
*(++p)=65
*(++p)=5
*(p+1)=75
*(p+2)=675
and so on ...

formula pointer arthimetic
address(new)=address(current)+i*sizeof(data type)
*/
int marks[5]={5,4,48,96,1};
int *p=marks;
cout<<"The vlaue of marks[0] is "<<*(p)<<endl;
cout<<"The vlaue of marks[1] is "<<*(++p)<<endl;
cout<<"The vlaue of marks[2] is "<<*(p+1)<<endl;
cout<<"The vlaue of marks[3] is "<<*(p+2)<<endl;


    return 0;
}