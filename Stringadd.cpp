#include<iostream>
#include<cstring>
using namespace std;

class AddString{

    private:
        string data;
    
    public:
        AddString(const string& word) : data(word) {}

        AddString operator+(const AddString& other) const {
            AddString result = data + " " + other.data;
            return result;
        }
        void display() {
            cout << data << endl;
        }
};

int main(void) {

    AddString s1("Hello");
    AddString s2("World");

    AddString s3 = s1 + s2;
    s3.display();

}