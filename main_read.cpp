#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    int N;
    double score1, score2, sum, avg;
    string stuName;
    ifstream ifs;

    // TODO: open "students.txt" for reading
    ifs.open("Students.txt");

    // TODO: check if file opened successfully; print error and exit if not
    if (!ifs.is_open()){
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // TODO: read M from ifs, print "Total M students"
    ifs >> N;

    for (int i = 0; i < N; i++)
    {
        // TODO: read stuName, score1, score2 from ifs
        ifs >> stuName >> score1 >> score2;

        // TODO: compute sum = score1 + score2, avg = sum / 2.0
        sum = score1 + score2;
        avg = sum / 2.0;
        
        // TODO: print Student Name, score1, score2, Sum, Avg
        cout << stuName << " " << score1 << " " << score2
            << " " << sum << " " << avg << endl;
    
    }
    ifs.close();
    return 0;
}
