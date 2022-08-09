# include <iostream>
using namespace std;
class Employee{
    int id ;
    int salary;
    public:
    void setId(void){

        cout<<"Enter the id of employee"<<endl;
        cin>>id;
    }
    void getId(void){
        cout<<"the id of this employee is"<<id<<endl;
    }
};

int  main(){   
    
    // Employee Madara,Hashirama,Tobirama,Minato;
    // Madara.setId();
    // Madara.getId();
    // Hashirama.setId();
    // Hashirama.getId();
    // Tobirama.setId();
    // Tobirama.getId();
    // Minato.setId();
    // Minato.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
        

    return 0; 
}