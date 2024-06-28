class Teacher{
    public:
    string name ;
    int age;
    Teacher(string name,int age){
        this->name=name;
        this->age=age;
    }
    void Details(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};