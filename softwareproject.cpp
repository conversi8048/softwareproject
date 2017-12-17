
#include <vector>
#include <iostream>
using namespace std;




class studentAccount{
public:
const string password;
int choies;
void enterpassword()
{
// enter password and checked hear
}
void Desplaychoies()
{
//desplay options menu for account
}
};

class LectureAccount{
public:
const string password;
int choies;
void enterpassword()
{
// enter password and checked hear
}
void Desplaychoies()
{
//desplay options menu for account
}
};
class StudentsEvents {
private:
string EventType;
string Massage;
float Time;
float Date;
public:
float EnterEvent()
{
//Enter your event hear
}
};
class PublicEvents {
private:
string Massage;
float Time;
float Date;
public:
float EnterEvent()
{
//Enter your event hear
}
};
class LectureEvents {
private:
string EventType;
string Massage;
float Time;
float Date;
public:
float EnterEvent()
{
//Enter your event hear
}
};
class ClassWideEvents {
private:
string ClassWideEvent;
string Massage;
float Time;
float Date;
public:
float Setreminder()
{
//set a reminder in private student calendar
}
};
class Reminder {
public:
float time;
float date;
string massage;
int SortEvent(){
//sort events by time and date
};
float EventConfiict{
//detect event conflicts on calendar
};
};
class StudentCalendar{
public :
void DesplayCalendar()
{
    //Desplay blank calendar
}
void SortStudentEvents()
{
    //sort student events into desplayed calendar
}
void SortReminders()
{
    //sort reminders in to desplaed calendar
}
void SortClssWideEvents()
{
   //sort class wide events in to calendar
}
};
class LectureCalendar{
public :
void DesplayCalendar()
{
    //Desplay blank calendar
}
void SortStudentEvents()
{
    //sort student events into desplayed calendar
}
void SortReminders()
{
    //sort reminders in to desplaed calendar
}
void SortClssWideEvents()
{
   //sort class wide events in to calendar
}
};
class Calendar {
public:
float time;
float date;
string massage;
};
int main()
{

}
