// Student Class
// James Sacco

#include <iostream>
#include <sstream>
using namespace std;

class Student {
    class Student{
    int age, standard;
    string first_name, last_name;
    private:
        int age;
    public:
        void set_age(int a) {
            age = a;
        }
        int get_age() {
            return age;
        }
    // first name
    private:
        string first_name;
    public:
        void set_first_name(string f) {
            first_name = f;
        }
        int get_first_name() {
            return first_name;
        }
};

int main() {
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
