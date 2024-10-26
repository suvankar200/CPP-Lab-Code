#include <iostream>
using namespace std;
class teacher_details
{
private:
    string name[100];
    float salary[100];
    int id[100];
    static int count;

public:
    int a = 0;
    void getteacherdetails();
    void displayteacherdetails();
    void total_count();
};
int teacher_details::count = 0;
void teacher_details::getteacherdetails()
{
    cout << "Enter the teacher name ";
    cin >> name[a];

    cout << "Enter the teacher salary ";
    cin >> salary[a];
    cout << "Enter the teache id ";
    cin >> id[a];
    count++;
    a++;
}

void teacher_details::displayteacherdetails()
{
    for (int i = 0; i < a; i++)
    {
        cout << "teacher name is  " << name[i] << endl;
        cout << "teacher salary is  " << salary[i] << endl;
        cout << "teacher id is  " << id[i] << endl;
    }
}
void teacher_details::total_count()
{
    cout << "Total count is" << count << endl;
}
int main()
{
    teacher_details t1;
    int x;
    do
    {
        cout << "1.Add Teacher\n2.print Teacher Detail\n3.Total count\nEnter your choice\t";
        cin>>x;
        switch (x)
        {
        case 1:
            t1.getteacherdetails();
            break;
        case 2:
            t1.displayteacherdetails();
            break;
        case 3:
            t1.total_count();
            break;
        default:
            break;
        }
    } while (x != 3);
    return 0;
}
