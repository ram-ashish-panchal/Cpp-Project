#include<iostream>
#include<sstream>
#include<fstream>
using namespace std;
#include "Classes/Student.cpp"


int main(){
    char choice,info;
     cout<<"\n____________________________Student Management System ____________________________\n"<<endl;
     cout<<"For entering detail of student press 1 :\n";
    
     cout<<"For exit press 0 : \n";
     cout<<"For getting detail of existing student press 2 : \n";
     cout<<"Your choice : ";
     cin>>choice;

    switch(choice){
        case '1' : 
        {Student student1;
        student1.showDetails();
        break;}
        case '2':{
            int ID;
            fstream file;
            file.open("student.txt",ios::in|ios::out|ios::app);
            cout<<"Enter id of student : ";
            cin>>ID;
            cin.ignore(2,'\n');
            string line;
            while(getline(file,line)){
                stringstream ss(line);
                string name,course,branch;
                char section;
                int id,year;
                ss>>name>>id>>year>>course>>branch>>section;
                if(id==ID){
                    cout<<line<<endl;
                    break;
                }
            };
            file.close();
            
            break;
        }
        case '0':{
            cout<<"Exit";
        }
    }


     

   
                
    return 0;
}