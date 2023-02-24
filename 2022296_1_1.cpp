#include<iostream>
#include<string>
using namespace std;
static int count=0;
//enum education{Bachelors=1, Masters, Doctorate};
//created by Miran Kamran
struct person
{
string name;
int age;
string address;
string edu;
};
//enum department{ Electrical=1, Mechanical, Material, Civil, ESciences, MGSciences };
struct student
{
int rollno;
person info;
string dep;
};
struct teacher
{
person data;
int teacher_id;
int salary;
string dept;
};
struct course
{
string course_name;
int course_code;
int teacher_id;
int enrolled_stud[100];
int dropped_stud[100];
int graded_stud[100];
int no_enrolled=0;
int no_dropped=0;
int no_graded=0;
};
static student st[1000];
static teacher th[50];
course courses_in[50];
//int stud_enrolled=0;
//int stud_dropped=0;
//int stud_graded=0;

void Admin()

{
    bool flag=true;
    while(flag)
    {
    cout<<"\nWelcome to Admin Portal\n Please select the following options to continue\n 1) Add New student\n 2) Remove Student\n 3) Update Student detail\n 4) Check record of all students\n 5) Un-enroll student from course\n 6) Add a new teacher to system\n 7) Remove a Teacher from system\n 8) Update teacher detail\n 9) Check record of all teachers\n 10) Add a course in system\n 11) Remove course from system\n 12) Update course detail\n 13) Check record of all courses\n 14) Allocate a course to teacher\n 15) De-allocate a course from teacher\n 16) Exit Menu\n 17) Exit to main menu\n ";
    int a;
    cin>>a;
    int p=0;
    static int no;
    int plus=0;
    static int ans;
    switch(a)
    {
        case 1:
        
        for(int j=0;j<1000;j++)
        {
        cout<<"Enter student detail:\n";
        cout<<"Roll No:";
        cin>>st[j].rollno;
        cout<<"Enter Name of student:";
        cin>>st[j].info.name;
        cout<<"Enter the age of student:";
        cin>>st[j].info.age;
        cout<<"Enter your address:";
        cin>>st[j].info.address;
       // cout<<"Enter the level of Qualification:\n 1) Graduate\n 2) Masters\n 3)Doctorate\n";
       // cin>>st[i].info.edu;
       // cout<<"Enter the Department:\n 1) Electrical\n 2) Mechaical\n 3) Material\n 4) Civil\n 5) ESciences\n 6) MGSciences\n";
       // cin>>st[i].dep;
        count++;
        cout<<"Add new student:\n 1) YES\n 2) NO\n";
        
        cin>>ans;
        if(ans==1)
        {
            continue;
        }
        else if(ans==2)
        {
            break;
        }
        }
        break;
        case 2:
        cout<<"To remove a student please enter the roll no:";
        int no;
        cin>>no;
        for(int k=0; k<1000;k++)
        {
            if(no==st[k].rollno)
            {
                cout<<"Roll no:"<<st[k].rollno;
                cout<<"\nName:"<<st[k].info.name;
                cout<<"\nAge:"<<st[k].info.age;
                cout<<"\nAddress:"<<st[k].info.address;
                cout<<"\nPlease Confirm the details:";
                string input;
                cin>>input;
                if(input=="yes")
                {
                    st[k].rollno=0;
                    st[k].info.name.empty();
                    st[k].info.age=0;
                    st[k].info.address.empty();
                }
            }
        }
        case 3:
        cout<<"Enter student roll no:";
        cin>>no;
        for(int l=0;l<1000;l++)
        {
            if(no==st[l].rollno)
            {
                cout<<"Enter new student details:\n";
                int newroll;
                cout<<"Enter new roll no:";
                cin>>newroll;
                st[l].rollno=newroll;
                cout<<"\nEnter new name:";
                string newname;
                cin>>newname;
                st[l].info.name=newname;
                cout<<"\nEnter age:";
                int newage;
                cin>>newage;
                st[l].info.age=newage;
                cout<<"\nEnter address:";
                string newadr;
                cin>>newadr;
                st[l].info.address=newadr;

            }
        }
        break;
        case 4:
        cout<<"Displaying Student Records";
        for(int m=0;m<count;m++)
        {
        int c=m+1;
         cout<<"\nName of Student:"<<c<<":"<<st[m].info.name;
         cout<<"\nRoll no of Student:"<<st[m].rollno;
         cout<<"\nAge:"<<st[m].info.age;
         cout<<"\nAddress:"<<st[m].info.address;
         cout<<"\n------------------------------------------\n";
        }
        break;

        case 5:
        break;

        case 6:
        for(int t=0;t<50;t++)
        {
        cout<<"Enter Teacher detail:\n";
        cout<<"Name:";
        cin>>th[t].data.name;
        cout<<"Assign a Teacher ID:";
        cin>>th[t].teacher_id;
        cout<<"Enter Age of Teacher:";
        cin>>th[t].data.age;
        cout<<"Enter the address of teacher:";
        cin>>th[t].data.address;
        cout<<"Enter the education:";
        cin>>th[t].data.edu;
        cout<<"Enter the salary of teacher:";
        cin>>th[t].salary;
        cout<<"Enter the department of teacher:";
        cin>>th[t].dept;
        plus++;
        cout<<"Add new Teacher:\n 1) YES\n 2) NO\n";
        static int input;
        cin>>input;
        if(input==1)
        {
            continue;
        }
        else if(input==2)
        {
            break;
        }
        }

        break;

        case 7:
        cout<<"To remove a Teacher please enter the teacher ID:";
        cin>>no;
        for(int n=0; n<50;n++)
        {
            if(th[n].teacher_id==no)
            {
                cout<<"\nName:"<<th[n].data.name;
                cout<<"\nID:"<<th[n].teacher_id;
                cout<<"\nAge:"<<th[n].data.age;
                cout<<"\nAddress:"<<th[n].data.address;
                cout<<"\nSalary:"<<th[n].salary;
                cout<<"\nPlease Confirm the details:";
                string input;
                cin>>input;
                if(input=="yes")
                {
                    st[n].rollno=0;
                    st[n].info.name.empty();
                    st[n].info.age=0;
                    st[n].info.address.empty();
                }
            }
        }
        case 8:
        int teach_no;;
        cout<<"Enter Teacher ID:";
        cin>>teach_no;
        for(int l=0;l<50;l++)
        {
            if(th[l].teacher_id==teach_no)
            {
                cout<<"Enter new Teacher details:\n";
                cout<<"\nEnter new name:";
                string newteach_name;
                cin>>newteach_name;
                th[l].data.name=newteach_name;
                cout<<"\nEnter Teacher ID:";
                int newteach_id;
                cin>>newteach_id;
                th[l].teacher_id==newteach_id;
                cout<<"\nEnter age:";
                int newteach_age;
                cin>>newteach_age;
                th[l].data.age=newteach_age;
                cout<<"\nEnter address:";
                string newteach_adr;
                cin>>newteach_adr;
                th[l].data.address=newteach_adr;
                cout<<"Enter the education of teacher:";
                string newteach_edu;
                cin>>newteach_edu;
                th[l].data.edu=newteach_edu;
                cout<<"Enter the salary of teacher:";
                int newteach_salary;
                cin>>newteach_salary;
                th[l].salary=newteach_salary;
                cout<<"Enter the department of teacher:";
                string newteach_dept;
                cin>>newteach_dept;
                th[l].dept=newteach_dept;


            }
        }
        break;

        case 9:
        cout<<"Displaying Teacher Records";
        for(int m=0;m<plus;m++)
        {
        int d=m+1;
         cout<<"\nName of Teacher:"<<d<<":"<<th[m].data.name;
         cout<<"\nSalary of Teacher:"<<th[m].salary;
         cout<<"\nAge:"<<th[m].data.age;
         cout<<"\nAddress:"<<th[m].data.address;
         cout<<"\nDepartment of Teacher:"<<th[m].dept;
         cout<<"\nEducation of Teacher:"<<th[m].data.edu;
         cout<<"\n------------------------------------------\n";
        }
        break;

        case 10:
        cout<<"Enter the details of the course:";
        for(int y=0;y<50;y++)
        {
        cout<<"Course name:";
        cin>>courses_in[y].course_name;
        cout<<"Course Code:";
        cin>>courses_in[y].course_code;
        cout<<"Course Teacher ID:";
        cin>>courses_in[y].teacher_id;
        p++;
        cout<<"Add new Course:\n 1) YES\n 2) NO\n";
        static int inp;
        cin>>inp;
        if(inp==1)
        {
            continue;
        }
        else if(inp==2)
        {
            break;
        }
        }
        break;

        case 11:
        cout<<"Enter the following details to delete a course;";
        cout<<"\nEnter the Course code:";
        int cc;
        cin>>cc;
        for(int q=0;q<50;q++)
        {
         if(courses_in[q].course_code==cc)
         {
         cout<<"\nCourse name:"<<courses_in[q].course_name;
         cout<<"\nCourse Code:"<<courses_in[q].course_code;
         cout<<"\nCourse Teacher ID:"<<courses_in[q].teacher_id;
         cout<<"\nEnrolled student:"<<courses_in[q].no_enrolled;
         cout<<"\nDropped Students:"<<courses_in[q].no_dropped;
         cout<<"\nNo of Graded students:"<<courses_in[q].no_graded;
         cout<<"\nPlease confirm the details:\n 1)Yes \n2) No\n";
         int usr;
         cin>>usr;
         if(usr==1)
         {
            courses_in[q].course_name.empty();
            courses_in[q].course_code=0;
            courses_in[q].teacher_id=0;
            courses_in[q].no_enrolled=0;
            courses_in[q].no_dropped=0;
            courses_in[q].no_graded=0;
         }
         else if(usr==2)
         {
            return;
         }
         }
        }
        break;

        case 12:
        cout<<"To Update course detail enter the following details:";
        cout<<"\nEnter the course code:";
        int ccode;
        cin>>ccode;
        for(int code=0;code<50;code++)
        {
        if(courses_in[code].course_code==ccode)
        {
        cout<<"Enter updated details:\n";
        cout<<"Course name:";
        string newcourse_name;
        cin>>newcourse_name;
        courses_in[code].course_name=newcourse_name;
        cout<<"Course Code:";
        int newcourse_code;
        cin>>newcourse_code;
        courses_in[code].course_code=newcourse_code;
        cout<<"Course Teacher ID:";
        int newcourse_teachid;
        cin>>newcourse_teachid;
        courses_in[code].teacher_id=newcourse_teachid;
        }
        }
        break;

        case 13:
        cout<<"**********Courses Detail**********\n";
        for(int z=0;z<50;z++)
        {
        cout<<"---------------------------------------------------\n";
        cout<<"\nCourse name:"<<courses_in[z].course_name;
        cout<<"\nCourse Code:"<<courses_in[z].course_code;
        cout<<"\nCourse Teacher ID:"<<courses_in[z].teacher_id;
        cout<<"\nEnrolled student:"<<courses_in[z].no_enrolled;
        cout<<"\nDropped Students:"<<courses_in[z].no_dropped;
        cout<<"\nNo of Graded students:"<<courses_in[z].no_graded;
        cout<<"\n--------------------------------------------------\n";
        }
        break;

        case 14:
        break;

        case 15:
        break;

        case 16:
        flag=false;
        break;

        case 17:
        return;
        break;

    }
    }
}
void Student()
{
    bool start=true;
    while(start)
{
    cout<<"Welcome to Student Portal\n PLease select from the following options:\n 1) Check Details\n 2) Enroll in Course\n 3) Check Grade\n 4) Check Course Teacher\n 5) See list of enrolled courses\n 6) See list of dropped courses\n 7) See list of completed courses\n 8) exit Program\n 9) Exit to main menu\n";
    int s;
    cin>>s;
    static student std[1000];
    switch(s)
    {
        case 1:
        cout<<"\n To check details Please enter the credentials:\n";
        cout<<"\nStudent Roll No:";
        int stud_r;
        cin>>stud_r;
        for(int u=0;u<1000;u++)
        {
            if(st[u].rollno==stud_r)
            {
                cout<<"\nRoll no:"<<st[u].rollno;
                cout<<"\nName:"<<st[u].info.name;
                cout<<"\nAge:"<<st[u].info.age;
                cout<<"\nAddress:"<<st[u].info.address;
            }
        }

        break;

        case 2:
        cout<<"\nTo enroll in a course please select the courses:";
        cout<<"\nPlease enter your roll no:";
        int course_stud_roll;
        cin>>course_stud_roll;
        cout<<"\nPlease input the course code:";
        int stud_course;
        cin>>stud_course;
        for(int r=0;r<50;r++)
        {
            if(courses_in[r].course_code==stud_course)
            {
              cout<<"\nPLease Confirm The following details:\n";
              cout<<"---------------------------------------------------\n";
              cout<<"\nCourse name:"<<courses_in[r].course_name;
              cout<<"\nCourse Code:"<<courses_in[r].course_code;
              cout<<"\nCourse Teacher ID:"<<courses_in[r].teacher_id;
              cout<<"\nEnrolled student:"<<courses_in[r].no_enrolled;
              cout<<"\nDropped Students:"<<courses_in[r].no_dropped;
              cout<<"\nNo of Graded students:"<<courses_in[r].no_graded;
              cout<<"\n--------------------------------------------------\n";
              cout<<"\nDo you want to continue enrolling:\n1) Yes\n 2) No\n";
              int stud_ans;
              cin>>stud_ans;
              if(stud_ans==1)
              {
                courses_in[r].enrolled_stud[courses_in[r].no_enrolled]=course_stud_roll;
                courses_in[r].no_enrolled++;
                cout<<"\nCourse enrollment Successful\n";
              }
              else if(stud_ans==2)
              {
                return;
              }
              
            }
        }
        
        break;

        case 3:
        break;

        case 4:
        cout<<"To check course teacher please enter the credentials:";
        cout<<"Course ID:";
        int stud_course_id;
        cin>>stud_course_id;
        for(int f=0;f<50;f++)
        {
            if(courses_in[f].teacher_id==stud_course_id)
            {
                if(courses_in[f].teacher_id==th[f].teacher_id)
                {
                    cout<<"Teacher Name:"<<th[f].data.name;
                }
            }
        }
        break;

        case 5:
        break;

        case 6:
        break;

        case 7:
        break;

        case 8:
        start=false;
        break;

        case 9:
        return;
        break;

        }
    }
}   

void Teacher()
{
    cout<<"\nWelcome to Teacher Portal\n Please select from the following options:\n 1) Check Data\n 2) See list of allocated courses\n 3) See list of all students enrolled in each course\n 4) Assign marks and grade to each student\n 5) Grade-wise division of students in course allocated\n 6) Exit to main menu\n";
    int t;
    cin>>t;
    switch(t)
    {
        case 1:
        cout<<"To check data please input following details:";
        cout<<"\nEnter teacher id:";
        int teacher_i;
        cin>>teacher_i;
        for(int w=0;w<50;w++)
        {
            if(th[w].teacher_id==teacher_i)
            {
                cout<<"\nName:"<<th[w].data.name;
                cout<<"\nAge:"<<th[w].data.age;
                cout<<"\nAddress:"<<th[w].data.address;
                cout<<"\nSalary:"<<th[w].salary;
            }
        }
        break;

        case 2:
        cout<<"To see list of allocated courses please enter the credentials:\n";
        cout<<"\nEnter your Teacher Id:";
        int t_id;
        cin>>t_id;
        cout<<"\nDisplaying Allocated Courses\n";
        for(int d=0;d<50;d++)
        {
            if(courses_in[d].teacher_id==t_id)
            {
              cout<<"---------------------------------------------------\n";
              cout<<"\nCourse name:"<<courses_in[d].course_name;
              cout<<"\nCourse Code:"<<courses_in[d].course_code;
              cout<<"\nCourse Teacher ID:"<<courses_in[d].teacher_id;
              cout<<"\nEnrolled student:"<<courses_in[d].no_enrolled;
              cout<<"\nDropped Students:"<<courses_in[d].no_dropped;
              cout<<"\nNo of Graded students:"<<courses_in[d].no_graded;
              cout<<"\n--------------------------------------------------\n";
            }
        }



        break;

        case 3:
        cout<<"\nTo see list of all student in a course:";
        cout<<"\nPlease enter course ID:";
        int teacher_course_id;
        cin>>teacher_course_id;
        for(int e=0;e<50;e++)
        {
            if(courses_in[e].course_code==teacher_course_id)
            {
              for(int g=0;g<courses_in[e].no_enrolled;g++)
              {
                for(int h=0;h<count;h++)
                {
                if(courses_in[e].enrolled_stud[g]==st[h].rollno)
                {
                    cout<<"\nName of enrolled Stud:"<<st[h].info.name;
                }
                }
              }
            }
        }

        break;

        case 4:
        break;

        case 5:
        break;

        case 6:
        return;
        break;

    }
    
}
int main()
{
bool cond=true;
while(cond)
{
int x;
cout<<"Welcome to GIKI portal\n Please select from the given menu:\n1) Admin\n2) Teacher\n3) Student\n";
cin>>x;

switch(x)
{
    case 1:
    Admin();
    break;

    case 2:
    Teacher();
    break;

    case 3:
    Student();
    break;

}
}
cout<<"\n*********************Created By Miran Kamran************************\n";
return 0;
}

    

