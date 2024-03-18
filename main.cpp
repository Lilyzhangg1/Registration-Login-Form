#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
#include <windows.h>
using namespace std;

const char* HOST = "localhost";
const char* USER = "root";
const char* PW = " ";
const char* DB = "mydb";

class Login {
    private:
        string Id, PW;
    public:
        Login(): Id(""), PW("") {}

        void setId(string id) {
            Id = id; 
        }

        void setPW (string pw) {
            PW = pw;
        }

        string getId() {
            return Id;
        }

        string getPW () {
            return PW;
        }
}

int main() {
    
    return 0;

}