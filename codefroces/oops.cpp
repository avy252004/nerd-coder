#include<iostream>
#include<vector>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    
};
vector<Student> stud;
void add_detail(){
    Student bachaa;
    cout<<"enter the name"<<endl;
    cin>> bachaa.name;
    cout<<"enter the roll number"<<endl;
    cin>>bachaa.roll;
    stud.push_back(bachaa);

}
void update(){
    int i,option;
    cout<<"entr the roll no"<<endl;
    cin>>i;
    cout<<"following option";
    cin>> option;
    string p;
    switch (option)
    {
    case 1: 
        
        cout<< "enter the new name"<<endl;
        cin>> p ; 
        break;
    
    default:
        break;
    }
    for(int k = 0;k<stud.size();k++){
        if(stud[k].roll==i){
            if (option ==1){
                stud[k].name = p;
                return;
            }

        }

    }
    cout<<"record not found";

}
void display(int roll){
    for(Student &p:stud){
        if(p.roll== roll){
            cout<<"name is"<<endl;
            cout<<p.name;
        }
    }
}