#include <iostream>
#include "taskfunction.h"
using namespace std;

int main(int argc, char *argv[])
{
    int m,n;
    if (argv[1][0] == '1')
    {
        cout << "Task 1" << endl;
        cin >> n;
        vector<int> vector(n);
        for(int i=0;i<n;i++)
        {
            cin >> vector[i];
        }
        task1(n, vector);
    }
    else
    if (argv[1][0] == '2')
    {
        cout << "Task 2" << endl;
        cin >> n;
        vector<int> vector(n);
        for(int i=0;i<n;i++)
        {
            cin >> vector[i];
        }
        task2(n, vector);
    }
    else
    if (argv[1][0] == '3')
    {
        if (argv[1][1] == 'a')
        {
            cout << "Task 3a" << endl;
            cin >> n;
            vector<int> vector(n);
            for(int i=0;i<n;i++)
            {
                cin >> vector[i];
            }
            task3a(n, vector);
        }

        if (argv[1][1] == 'b')
        {
            cout << "Task 3b" << endl;
            cin >> n;
            vector<int> vector(n);
            for(int i=0;i<n;i++)
            {
                cin >> vector[i];
            }
            task3b(n, vector);
        }
    }
    else
    if (argv[1][0] == '4')
    {
        cout << "Task 4" << endl;
        cin >> m;
        cin >> n;
        vector<vector<int> > matrix(m,vector<int> (n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matrix[i][j];
            }
        }
        task4(m,n,matrix);
    }
    else
    if (argv[1][0] == '5')
    {
        cout << "Task 5" << endl;
        cin >> m;
        cin >> n;
        vector<vector<int> > matrix(m,vector<int> (n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matrix[i][j];
            }
        }
        task4(m,n,matrix);
    }
    else
    if (argv[1][0] == '6')
    {
        cout << "Task 6" << endl;
        cin >> m;
        cin >> n;
        vector<vector<int> > matrix(m,vector<int> (n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin >> matrix[i][j];
            }
        }
        task4(m,n,matrix);
    }
    return 0;
}