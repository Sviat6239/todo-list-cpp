#include <iostream>
#include <vector>

using namespace std;

struct todo
{
    int id;
    string title;
    string description;
    bool completed;
};

int main()
{
    vector<todo> todos;

    todo new_todo;

    string title;
    string description;
    int id;
    bool completed;

    int option;

    bool run = true;

    while (run == true)
    {
        cout << "What would you do today?\n"
             << "1.List of the todos. "
             << "2.Add new the todo. "
             << "3.Delete the todo. "
             << "4.Update the todo. "
             << "5.Mark todo as completed. "
             << "6.Mark todo as uncompleted. "
             << "7.Exit.\n>>>";
        cin >> option;

        if (option == 1)
        {
            for (size_t i = 0; i < todos.size(); i++)
            {
                cout << "Id: " << todos[i].id << "\n"
                     << "Title: " << todos[i].title << "\n"
                     << "Description: " << todos[i].description << "\n";
                if (todos[i].completed == 1)
                {
                    cout << "Is completed" << "\n";
                }
                else
                {
                    cout << "Isn`t completed" << "\n";
                }
            }
        }
        else if (option == 2)
        {
            cout << "Enter title of your new todo:\n>>>";
            cin >> title;

            cout << "Enter the description of your new todo:\n>>>";
            cin >> description;

            cout << "You have created new todo: " << title << " with description: " << description << "\n";

            new_todo.id = todos.size() + 1;
            new_todo.title = title;
            new_todo.description = description;
            new_todo.completed = false;

            todos.push_back(new_todo);

            continue;
        }
        else if (option == 3)
        {
            cout << "Enter an id of todo:\n>>>";
            cin >> id;

            bool found = false;

            for (auto it = todos.begin(); it != todos.end(); ++it)
            {
                if (it->id == id)
                {
                    todos.erase(it);
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Todo not found\n";
            }
        }
        else if (option == 4)
        {
            cout << "Enter an id of todo:\n>>>";
            cin >> id;

            todo *t = nullptr;

            for (auto &item : todos)
            {
                if (item.id == id)
                {
                    t = &item;
                    break;
                }
            }

            if (t == nullptr)
            {
                cout << "Todo not found\n";
                continue;
            }

            cout << "Enter title:\n>>>";
            cin.ignore();
            getline(cin, title);

            cout << "Enter description:\n>>>";
            getline(cin, description);

            t->title = title;
            t->description = description;
        }
        else if (option == 5)
        {
            cout << "Enter an id of todo:\n>>>";
            cin >> id;

            todo *t = nullptr;

            for (auto &item : todos)
            {
                if (item.id == id)
                {
                    t = &item;
                    break;
                }
            }

            t->completed = true;
        }
        else if (option == 6)
        {
            cout << "Enter an id of todo:\n>>>";
            cin >> id;

            todo *t = nullptr;

            for (auto &item : todos)
            {
                if (item.id == id)
                {
                    t = &item;
                    break;
                }
            }

            t->completed = false;
        }
        else if (option == 7)
        {
            cout << "Exiting..." << "\n";
            break;
        }
    }

    return 0;
}