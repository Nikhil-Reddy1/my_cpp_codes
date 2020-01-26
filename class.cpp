#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    private:
    int age,standard;
    string firstname;
    string lastname;
    public:
    void set_age(int x)
    {
        cin>>x;
        age=x;
    }
    void set_standard(int y)
    {
        cin>>y;
        standard = y;
    }
    string set_first_name(string first_name)
    {
        cin>>first_name;
        firstname = first_name;
    }
    string set_last_name(string last_name)
    {
        cin>>last_name;
        lastname = last_name;
    }
    int get_age()
    {
        return age;
    }
    string get_last_name();
    {
        return lastname;
    }
    string get_first_name()
    {
        return firstname;
    }
    int get_standard()
    {
        return standard;
    }
    void to_string()
    {
        cin << age<<"," << firstname <<","<< lastname<<","<< standard;
    }
}

int main() 
{
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}