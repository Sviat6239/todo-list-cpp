#include <iostream>
#include <vector>

using namespace std;

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

    int option;

    bool run = true;

    while (run == true)
    {
        cout << "What would you do today?\n"
             << "1.List of the todos. "
             << "2.Add new the todo. "
             << "3.Delete the todo. "
             << "4.Update the todo. "
             << "5.Exit.\n>>>";
        cin >> option;

        if (option == 1)
        {
            for (size_t i = 0; i < todos.size(); i++)
            {
                cout << "id: " << todos[i].id << "\n"
                     << "title: " << todos[i].title << "\n"
                     << "description: " << todos[i].description << "\n";
            }
        }
        else if (option == 2)
        {
            cout << "enter title of your new todo:\n>>>";
            cin >> title;

            cout << "enter the description of your new todo:\n>>>";
            cin >> description;

            cout << "You have created new todo: " << title << " with description: " << description << "\n";

            new_todo.id = todos.size() + 1;
            new_todo.title = title;
            new_todo.description = description;

            todos.push_back(new_todo);

            continue;
        }
        else if (option == 3)
        {
        }
        else if (option == 4)
        {
        }
        else if (option == 5)
        {
            cout << "Exiting...";
            break;
        }
    }

    return 0;
}