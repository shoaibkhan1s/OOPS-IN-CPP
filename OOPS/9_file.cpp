#include<iostream>
#include <fstream>
using namespace std;

class Student{
    public: 
    char name[100];
    int age;
    char gender;
    int height,weight;

    void getData(){
        cout<<"enter name"<<endl;
        cin>>name;
        cout<<"enter age"<<endl;
        cin>>age;
        cout<<"enter gender(M/F)"<<endl;
        cin>>gender;
        cout<<"enter height(cm)"<<endl;
        cin>>height;
        cout<<"enter weight(kg)"<<endl;
        cin>>weight;

    }
    void showData(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"gender : "<<gender<<endl;
        cout<<"height : "<<height<<endl;
        cout<<"weight : "<<weight<<endl;
    }
};

int main(){
    Student s;

    
    ofstream outFile("student.dat");
    s.getData();
    outFile.write((char *)&s, sizeof(s));

    ifstream inFile("student.dat");
    inFile.read((char *)&s, sizeof(s));

    cout<<"data read from file : \n";
    s.showData();
}