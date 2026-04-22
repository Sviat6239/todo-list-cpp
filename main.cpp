#include <iostream>
#include <vector>

using namespace std;

bool run = true;

struct todo
{
    int id;
    string title;
    string description;
};

int main()
{
    vector<todo> todos;

    todo new_todo;

    string title;
    string description;

    cout << "enter title of your new todo:\n>>>";
    cin >> title;

    cout << "enter the description of your new todo:\n>>>";
    cin >> description;

    new_todo.id = todos.size() + 1;
    new_todo.title = title;
    new_todo.description = description;

    todos.push_back(new_todo);

    for (size_t i = 0; i < todos.size(); i++)
    {
        cout << "id: " << todos[i].id << "\n"
             << "title: " << todos[i].title << "\n"
             << "description: " << todos[i].description << "\n";
    }

    return 0;
}