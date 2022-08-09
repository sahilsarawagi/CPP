# include <iostream>
using namespace std;
inline  int product(int a, int b){
    return a*b;
}
float moneyRecieved(int money,float factor=1.04){
    return money*factor;
}
//constant
// int strlen(const char *p){

// }
int main(){
    int a,b;
    cout<<"Enter the value of a and b respectively"<<endl;
    cin>>a>>b;
    cout<<"THe product of a and b is "<<product(a,b)<<endl;

    for (int i = 0; i < 5; i++)
    {
        static int c=0 ;        //this will run only for once
         c=c+1;

        cout<<c<<endl;
    }

    // example of default argument
    int money=100000;
    cout<<"if you keep your "<<money<<" in our bank, you will get "<<moneyRecieved(money)<<" after one year"<<" but if you are a VIP then you will get "<<moneyRecieved(money,1.1)<<endl;
    

    return 0;
}


/* when to use inline function
answer - when the function is too small and we want to use it repetively
In case of static variable and recurssion never use inline function
*/
/*  whta is static variable 
answer- the static variable is the variable which runs only once
suppose if we put static variavel inside loop then it will run once after that code will not read that line*/
