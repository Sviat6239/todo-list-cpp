#include <iostream>
#include <vector>
#include <string>
#include <functional>

using namespace std;

struct User
{
    int id;
    string name;
    string surname;
    string email;
    string login;
    string password_hash;
    string access_token;
    string role;
    bool is_registered;
};

vector<User> users;

hash<string> hasher;

// Auth system

void hash_password_func()
{
}

void check_password_func()
{
}

void register_func()
{
}

void login_func()
{
}

void logout_func()
{
}

// Admin side

void get_users()
{
}

void get_user()
{
}

void add_user()
{
}

void del_user()
{
}

void update_user()
{
}

void patch_user()
{
}

// main loop

int main()
{

    string s = "secret";

    size_t h = hasher(s);

    cout << h << "\n";

    User new_user;

    string name;
    string surname;
    string email;
    string login;
    string password;
    string role;

    int option;

    bool run = true;

    while (run == true)
    {
        cout << "Authentification system. Choose one option:\n"
             << "1. Login.\n"
             << "2. Register.\n"
             << "3. Logout. \n";
        cin >> option;
        if (option == 1)
        {
        }
        else if (option == 2)
        {
        }
        else if (option == 3)
        {
        }
    }
}
