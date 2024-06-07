#include <iostream>
#include <Windows.h>
using namespace std;

class student 
{
    public:
    unsigned age;
    string name;
    int mark[3];
    void get_average_mark() {
        average_mark = (float)(mark[0] + mark[1] + mark[2]) / 3;
    }
    void get_data() 
    {
        cout << "Имя - ";
        cin >> name;
        cout << "Возраст - ";
        cin >> age;
        for (int i = 0; i < 3; ++i) {
            cout << "Оценка " << i + 1 << "= ";
            cin >> mark[i];
        }
        get_average_mark();
    }
    void display_data() {
        cout << endl << "Данные студентов" << endl;
        cout << "Имя - " << name << endl;
        cout << "Возраст - " << age << endl;
        for (int i = 0; i < 3; ++i)
        {
            cout << "Оценка " << i + 1 << "=" << mark[i] << endl;
        }
        cout << "Средняя оценка=" << average_mark << endl;
        if (average_mark > 8)
        {
            cout << "Отлично" << endl << endl;
        }
        if ((6 <= average_mark) && (average_mark < 8))
        {
            cout << "Хорошо" << endl << endl;
        }
        if ((4 <= average_mark) && (average_mark < 6))
        {
            cout << "Удовлетворительно" << endl << endl;
        }
        if (average_mark < 4)
        {
            cout << "Неудовлетворительно" << endl << endl;
        }
    }
private:
    float average_mark;
};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    const int n = 4;
    student student[n];
    for (int i = 0; i < n; i++) {
        student[i].get_data();
    }
    for (int i = 0; i < n; i++) {
        student[i].display_data();
    }
    return 0;
}