#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int N;
    double score1, score2;
    string stuName;
    ofstream ofs;

    // TODO: open "students.txt" for writing
    ofs.open("Students.txt");

    // TODO: check if file opened successfully; print error and exit if not
    if (!ofs.is_open()){
        cerr << "Error opening file!" << endl;
        return 1;
    }

    cout << "Enter the total number of students:";

    // TODO: read N from cin, write N to ofs
    cin >> N;
    ofs << N << endl;

    for (int i = 0; i < N; i++)
    {
        cout << "Enter the student name and two scores: ";
        // TODO: read stuName, score1, score2 from cin; write them to ofs
        cin >> stuName >> score1 >> score2;
        ofs << stuName << " " << score1 << " " << score2 << endl;
    }
    // TODO: close ofs
    ofs.close();
    return 0;
}
