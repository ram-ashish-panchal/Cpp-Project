class Student{
    fstream file;
    string name;
    int id,year;
    string course,branch;
    char section;
public:
    Student(){
        file.open("student.txt",ios::in|ios::out|ios::app);

        cout<<"Enter the name of student :";
        cin>>name;
        file<<name<<"\t\t";
        cout<<"nter the id number aloted to student :";
        cin>>id;
        file<<id<<"\t\t";
        cout<<"Enter the year of addmission :";
        cin>>year;
        file<<year<<"\t\t";
        cout<<"Enter the course name :";
        cin>>course;
        file<<course<<"\t\t";
        cout<<"Enter the branch name :";
        cin>>branch;
        file<<branch<<"\t\t";
        cout<<"Enter the section of student :";
        cin>>section;
        file<<section<<"\t\t";
        file<<endl;
        file.close();
    }

    void showDetails(){

        cout<<"\n___________________________________Details of Student______________________________\n\n";
         cout<<"Name \t\t\t"<<name<<endl;
         cout<<"ID \t\t\t"<<id<<endl;
         cout<<"Year of addmission \t"<<year<<endl;
         cout<<"Course choosen \t\t"<<course<<endl;
         cout<<"Branch \t\t\t"<<branch<<endl;
         cout<<"Section \t\t"<<section<<endl;
    }
    

};