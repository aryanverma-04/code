class Mammels{    
    protected:
        int age;
        string type;
        string color;
        int code;
    
    public:
    Mammels(){
        this->age = 10000;
        this->code = 8474;
        this->type = "NOT SPECIFIED";
        this->color = "Black";
    }
        void getDetails(){
            cout<<"Age: "<<age<<" "<<" Type: "<<type<<" color: "<<color<<" code: "<<code<<endl;
        }
};
class herbivores: protected Mammels{
    private:
    string *animals = new string[10];

    public:

    herbivores(){
        this->type = "herbivores";
        this->code = 2311;
        this->color = "Mostly brown";
        this->age = this->age + 1344;
    }
    void getDetails(){
            cout<<"Age: "<<age<<" "<<" Type: "<<type<<" color: "<<color<<" code: "<<code<<endl;
    }
    void setExample(string *s, int n ){
        for (int i = 0; i < n; i++)
        {
            *(this->animals + i) =  s[i];
        }
    }
    void getExample(){
        for (int i = 0; i < animals->size(); i++)
        {
            cout<<animals[i]<<" ";
        }
        cout<<endl;
    }
    void voice(){
        cout<<"Talk"<<endl;
    }
};
class Human: public herbivores{
    public :
    int age;
    void getAge(){
        cout<<"Age of Human is: "<<age<<endl;
    }
};
class category{
    public:
    string category[4] = {"General", "OBC", "SC", "ST"};
    string c;
    public:
    void setCategory(){
        for (int i = 0; i < category->size(); i++)
        {
            cout<<category[i]<<" ";
        }
        cout<<endl;
        cout<<"Select One: ";
        int n; cin>>n;
        this->c = category[n+1];
    }
    void getCategory(){
        cout<<c<<endl;
    }
};
class Men: public category, public herbivores{
    public:

};