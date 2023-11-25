#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

// There can be atmost 10 tasks
class Task
{
    bool completed;
    string name;

public:
    Task()
    {
        completed = false;
    }
    Task(string n)
    {
        this->name = n;
        this->completed = false;
    }
    void setName(string n)
    {
        this->name = n;
    }
    bool getComplete()
    {
        return this->completed;
    }
    void setComplete()
    {
        this->completed = true;
    }
    string getName()
    {
        return this->name;
    }
};
class Todo
{
    vector<Task> arr;

public:
    void addTask(string task)
    {
        if (arr.size() == 10)
        {
            cout << "Task can not be added." << endl;
            return;
        }
        Task t(task);
        arr.push_back(t);
    }
    string getFirstTask()
    {
        if (arr.size() == 0)
        {
            cout << "No tasks." << endl;
            return "";
        }
        return arr[0].getName();
    }
    void setComplete(string n)
    {
        int i = 0;
        for (; i < arr.size(); i++)
        {
            string a=arr[i].getName();
            transform(a.begin(),a.end(),a.begin(),::tolower);
            transform(n.begin(),n.end(),n.begin(),::tolower);
            if (a == n)
            {
                break;
            }
        }
        if (i == arr.size())
        {
            cout << "Task not found."<<endl;
            return;
        }
        arr[i].setComplete();
        cout << "Task \"" << arr[i].getName() << "\" is set Completed";
    }
    void removeTask(string n)
    {
        int i = 0;
        for (; i < arr.size(); i++)
        {
            string a=arr[i].getName();
            transform(a.begin(),a.end(),a.begin(),::tolower);
            transform(n.begin(),n.end(),n.begin(),::tolower);
            if (a == n)
            {
                break;
            }
        }
        cout << "The task \"" << arr[i].getName() << "\" is removed from the list.";
        arr.erase(arr.begin() + i);
    }
    void display()
    {

        cout << endl
             << "All Tasks:" << endl;
        for (int i = 0; i < arr.size(); i++)
        {
            string str;
            str = arr[i].getComplete() ? "YES" : "NO";
            cout << arr[i].getName() << "  " << str << endl;
        }
    }
};
int main()
{
    Todo t;
    int n;
    cout << "type 1 to add task" << endl
         << "type 2 to set task completed" << endl
         << "type 3 to remove a task" << endl
         << "type 4 to display all tasks" << endl
         << "type 5 to display first task" << endl
         << "type 6 to end the loop." << endl;

    while (true)
    {
        string str;
        cout << endl
             << "Enter n:" << endl;
        cin >> n;
        cin.ignore();
        if (n == 1)
        {
            cout << "Adding a task to the list" << endl
                 << "Enter the task you want to add" << endl;
            // cin >> str;
            getline(cin, str);
            t.addTask(str);
        }
        else if (n == 2)
        {
            cout << "Setting a task to be completed" << endl
                 << "Enter the task that is completed" << endl;
            // cin >> str;
            getline(cin, str);

            t.setComplete(str);
        }
        else if (n == 3)
        {
            cout << "Remving a task" << endl
                 << "Enter the task which needs to be removed:" << endl;
            // cin >> str;
            getline(cin, str);
            t.removeTask(str);
        }
        else if (n == 4)
        {
            cout << "Displaying all tasks." << endl;
        }
        else if (n == 5)
        {
            cout << "Getting the first task" << endl;
            cout << endl
                 << t.getFirstTask() << endl;
        }
        else if (n == 6)
        {
            break;
        }
        else
        {
            cout << "**************Invalid Input**************" << endl;
        }
        t.display();
    }
    return 0;
}