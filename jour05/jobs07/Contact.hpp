#include <iostream>
using namespace std;

class Contact {
private:
    string name;
    int number;
    Contact& operator=(const Contact& other);
public:
    Contact(string name, int number);

    Contact(const Contact& other);

    void afficherContact() const;
    void setName(const string& name);
    string getName() const;
    void setNumber(int number);
    int getNumber() const;
};
