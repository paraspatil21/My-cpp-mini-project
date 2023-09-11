//  || Om shree ganeshay namah: ||

#include <iostream>
#include <cstring>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;
char pass[11] = "@Paras21";

int sign_in();        // Function calling 1
int watch_password(); // Function calling 2
int change();         // Function calling 3

int edit_patient();   // Function calling 4
int edit_doctor();    // Function calling 5
int view_patient();   // Function calling 6
int view_doctor();    // Function calling 7
int special_doctor(); // Function calling 8

int Neurology();         // Function calling 9
int Orthopedics();       // Function calling 10
int Internal_Medicine(); // Function calling 11
int Dermatology();       // Function calling 12
int Pediatrics();        // Function calling 13
int General_Surgery();   // Function calling 14
int Radiology();         // Function calling 15
int Radiology();         // Function calling 16
int Family_Medicine();   // Function calling 17
int Pathology();         // Function calling 18
int Anesthesia();        // Function calling 19
int ENT_Specialist();    // Function calling 20

int second(); // Function calling 21
int third();  // Function calling 22

int god();

class reception // class function 1
{
public:
    char p_name[15], blood_grp[15], gender[15];
    int id, age, weight, bill;
    int mob_no;

    case_paper() // Defalt Construtor -----> [  Stictly do not have return type  ]
    {
        ofstream cwrite;
        cwrite.open("Patientdatabase1.txt");
        if (!cwrite)
        {
            cout << "Error while creating the file";
        }
        else
        {
            reception obj1;
            cout << "File created successfully\n\n";

            cout << "Enter the patient name: \n";
            cwrite << "\n\nPatient name is: \n";
            cin >> p_name;
            cwrite << p_name;

            cout << "\nWhat is the blood group of patient ?\n";
            cwrite << "\nPatient blood group is: \n";
            cin >> blood_grp;
            cwrite << blood_grp;

            cout << "\nWhat is the gender of the patient ?\n";
            cwrite << "\nPatient gender is: \n";
            cin >> gender;
            cwrite << gender;

            cout << "\nWhat is the age of the patient ?\n";
            cwrite << "\nPatient age is: \n";
            cin >> age;
            cwrite << age;

            cout << "\nWhat is the weigth of the patient ? \n";
            cwrite << "\nPatient weight is: \n";
            cin >> weight;
            cwrite << weight;

            cout << "\nWhat is the contact number of the patient ?\n";
            cwrite << "\nPatient contact number is: \n";
            cin >> mob_no;
            cwrite << mob_no;

            cout << "\nWhat is the Bill of the patient ?\n";
            cwrite << "\nPatient bill is: \n";
            cin >> bill;
            cwrite << bill;

            int p;

            cout << "Do you want to add one more patient information if yes press 1:\n";

            cin >> p;

            if (p == 1) // Here we should always use "="   NOT "==";
            {
                cwrite.close();
                second();
            }
            else // Here we should always use "="   NOT "==";
            {
                cwrite.close();
                cout << "\nIt's ok, First patient file saved successfully\n";
            }
        }
    }
};

// class data_of_patient : public reception // class 2
// {
// public:
//     memory()
//     {
//         ofstream cwrite("View patient.txt");
//         cwrite << "Here are the list of the doctors:\n";
//         if (!cwrite)
//         {
//             cout << "Error while creating the file\n";
//         }
//         else
//         {
//             cwrite << "\nPatient name is: \n";
//             cout << p_name;
//             cwrite << "\nPatient blood group is: \n";
//             cout << blood_grp;
//             cwrite << "\nPatient gender is: \n";
//             cout << gender;
//             cwrite << "\nPatient age is: \n";
//             cout << age;
//             cwrite << "\nPatient weight is: \n";
//             cout << weight;
//             cwrite << "\nPatient contact number is: \n";
//             cout << mob_no;
//             cwrite << "\nPatient bill is: \n";
//             cout << bill;
//         }
//     }
// };

class dean : public reception // Inheritance and also class 3
{
public:
    int degree()
    {

        ofstream cwrite("Doctor data base.txt");
        cwrite << "Here are the list of the doctors:";
        if (!cwrite)
        {
            cout << "Error while creating the file";
        }
        else
        {
            reception obj1;
            cout << "File created successfully\n\n";

            cout << "Enter the Doctor name: \n";
            cin >> p_name;
            cwrite << "\n\n The Doctor name: \n";
            cwrite << p_name;

            cout << "\nWhat is eductation of the doctor?\n";
            cwrite << "\nWhat is eductation of the doctor??\n";
            cin >> blood_grp;
            cwrite << blood_grp;

            cout << "\nHow namy work experience does the doctor have ?\n";
            cwrite << "\nHow namy work experience does the doctor have \n";
            cin >> gender;
            cwrite << gender;

            cout << "\nWhat is the age of the doctor?\n";
            cwrite << "\nWhat is the age of the doctor?\n";
            cin >> age;
            cwrite << age;

            cout << "\nWhat is the weight of the doctorr? \n";
            cwrite << "\nWhat is the weight of the doctorr?\n";
            cin >> weight;
            cwrite << weight;

            cout << "\nWhat is the contact number of the doctor?\n";
            cwrite << "\nWhat is the contact number of the doctor?\n";
            cin >> mob_no;
            cwrite << mob_no;

            cout << "\nWhat is the income of the doctor per month?\n";
            cwrite << "\nWhat is the income of the doctor per month?\n";
            cin >> bill;
            cwrite << bill;
        }
    }
};

int god()
{

    int option;

    cout << "______________________________________________________________________________________________________________________\n\n";
    cout << "                                        Welcome to the PATIL hospital                                                \n";
    cout << "______________________________________________________________________________________________________________________\n";

    do
    {

        cout << "\nEnter the option that you want from the below:\n1)Login (sign in)\n2)watch Password\n3)change\n4)Back\n5)Exit\n\n";
        cin >> option;

        switch (option) // switch
        {
        case 1:
        {

            sign_in();
            break;
        }

        case 2:
        {
            watch_password();
            break;
        }

        case 3:
        {
            change();
            break;
        }

        case 4:
        {
            system("CLS");
            god();
            break;
        }

        case 5:
        {
            system("CLS");
            break;
        }

        default:

            cout << "You have entered Invalid input";

            break;
        }
    } while (option != 5);
}

second_switch() // switch 2
{
    int ch;
    cout << "______________________________________________________________________________________________________________________\n";
    cout << "\n                                    Welcome to the main menu                                               \n";
    cout << "______________________________________________________________________________________________________________________\n";
    cout << "\n\nEnter the option that you want : \n";
    cout << "1)Enter new patient details: \n";
    cout << "2)Enter new doctor details: \n";
    cout << "3)View the patient details: \n";
    cout << "4)View the doctor details: \n";
    cout << "5)View the special doctors: \n";
    cout << "6)Back\n";
    cout << "7)Exit\n\n";

    cin >> ch;

    switch (ch)
    {
    case 1:
    {
        edit_patient();
        break;
    }
    case 2:
    {
        edit_doctor();
        break;
    }
    case 3:

    {
        view_patient();
        break;
    }

    case 4:
    {
        view_doctor();
        break;
    }
    case 5:
    {
        special_doctor();
        break;
    }

    case 6:
    {
        system("CLS");
        god();

        break;
    }

    case 7:
    {

        system("CLS");
        break;
    }

    default:
        cout << "You have entered Invalid input";
        break;
    }
}

int sign_in() // function defination 1
{

    int f;
    char arr[5];
    cout << "\nEnter the password max 5 characters : \n";
    cin >> arr;
    system("CLS");

    f = strcmp(arr, pass);
    if (f == 0)
    {
        cout << "_________________________________________________________";
        cout << "\nLogin is successful\n";
        cout << "_________________________________________________________\n";
        second_switch();
    }
    else

    {
        cout << "_________________________________________________________\n";
        cout << "Invalid password\n";
        cout << "_________________________________________________________";
        system("CLS");
        sign_in();
    }
    // system("CLS");
}

int watch_password() // function defination 2
{
    cout << "\nYour current password is :\n";
    cout << "_________________________________________________________\n";
    cout << pass;
    cout << "\n_________________________________________________________\n";
}

int change() // function defination 3
{
    cout << "Enter new password:";
    cin >> pass;
    cout << "Password changed successfully\n\n";
}

int edit_patient() // function defination 4
{
    reception obj1;
    obj1.case_paper();
    // obj1.display();
    second_switch();
}

int view_patient() // function defination 5
{
    int num;
    cout << "Enter what number between 1 to 3 you want to see: \n";
    cin >> num;
    switch (num)
    {
    case 1:
    {
        ifstream cread;
        string p_name;
        cread.open("Patientdatabase1.txt");
        while (cread.eof() == 0)
        {
            getline(cread, p_name);
            cout << p_name << endl;
        }

        break;
    }
    case 2:
    {
        ifstream cread;
        string p_name;
        cread.open("Patientdatabase2.txt");
        while (cread.eof() == 0)
        {
            getline(cread, p_name);
            cout << p_name << endl;
        }

        break;
    }
    case 3:
    {
        ifstream cread;
        string p_name;
        cread.open("Patientdatabase3.txt");
        while (cread.eof() == 0)
        {
            getline(cread, p_name);
            cout << p_name << endl;
        }

        break;
    }
    case 4:
    {
        system("CLS");
        second_switch();
        break;
    }

    default:
        break;
    }

    second_switch();
}

int edit_doctor() // function defination 6
{
    dean obj3;
    obj3.degree();
    second_switch();
}
int view_doctor()
{

    ifstream cread;
    string p_name;
    cread.open("doctor data base.txt");
    while (cread.eof() == 0)
    {
        getline(cread, p_name);
        cout << p_name << endl;
    }

    second_switch();
}
Neurology()
{

    ofstream cwrite("Doctor_Neurology.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is: Dr.Paras Sanjay Patil.\n";
        cwrite << "Doctor name:Dr.Paras Sanjay Patil.\n";
        cout << "The doctor education is:M.B.B.S , M.D \n";
        cwrite << "Doctor education:M.B.B.S , M.D\n";
        cout << "The doctor contact no is:9359307421\n";
        cwrite << "Contact number of Doctor:9359307421 \n";
        cout << "The doctor work experience is:5 years\n";
        cwrite << "Work experience of the doctor: \n";
        cout << "The doctor age is:21 years\n";
        cwrite << "Age of the doctor:21 years \n";
        cout << "The doctor averrage income is:11,00,000/Month\n";
        cwrite << "The average income of the doctor:11,00,000/Month\n";
        cout << "The doctor is:\n";
    }
}

Orthopedics()
{
    ofstream cwrite("Doctor_Orthopedics.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Arjun Atual Patil \n";
        cwrite << "Doctor name:Dr.Arjun Atul Patil\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.D\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Internal_Medicine()
{
    ofstream cwrite("Doctor_Internal_Medicine.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is: Dr. Nikhil Bhimarao Yadav\n";
        cwrite << "Doctor name:Dr.Nikhil Bhimarao Yadav.\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:MBBS\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Dermatology()
{
    ofstream cwrite("Doctor_Dermatology.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Dhiraj Jadhav \n";
        cwrite << "Doctor name:Dr.Dhiraj Jadhav\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:Bachelor of science in Dermatology\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Pediatrics()
{
    ofstream cwrite("Doctor_Pediatrics.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Atharv Surve \n";
        cwrite << "Doctor name:Dr.Atharv Surve\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.D (Pediatrics)\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
General_Surgery()
{
    ofstream cwrite("Doctor_General_Surgery.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Atharv Santosh Sankapal \n";
        cwrite << "Doctor name:Dr.Atharv Santosh Sankapal\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.B.B.S\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Radiology()
{
    ofstream cwrite("Doctor_Radiology.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Pratik Prakash Pawar \n";
        cwrite << "Doctor name:Dr.Pratik Prakash Pawar\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:Bachelor's in Radiology\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Family_Medicine()
{
    ofstream cwrite("Doctor_Family_Medicine.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Ganesh Kende \n";
        cwrite << "Doctor name:Dr.Ganesh Kende\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.B.B.S\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Pathology()
{
    ofstream cwrite("Doctor_Pathology.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr.Shreyash Rajaram Patil \n";
        cwrite << "Doctor name:Dr.Shreyash Sanjay Desai\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.D & D.O\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of tcwritector5: \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
        cout << "The doctor is:\n";
    }
}
Anesthesia()
{
    ofstream cwrite("Doctor_Anesthesia.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr. Sarvesh Ganesh Bamane\n";
        cwrite << "Doctor name:Dr.Sarvesh Ganesh Bamane\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:M.B.B.S\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
    }
    cout << "The doctor is:\n";
}
ENT_Specialist()
{
    ofstream cwrite("Doctor_ENT_Specialist.txt");
    cwrite << "Here are the list of the doctors:";
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;

        cwrite << "File created successfully\n\n";
        cout << "The doctor name is:Dr. Akram Mujawar \n";
        cwrite << "Doctor name:Dr.Akram Mujawar\n";
        cout << "The doctor is:M.B.B.S\n";
        cwrite << "Doctor education:MS in ENT\n";
        cout << "The doctor contact number is:9988776655\n";
        cwrite << "Contact number of Doctor: 9988776655\n";
        cout << "The doctor work experience is:5\n";
        cwrite << "Work experience of the doctor:5 \n";
        cout << "The doctor age is:28\n";
        cwrite << "Age of the doctor:28 \n";
        cout << "Average income of the doctor per month  is:10,00,000/Month\n";
        cwrite << "What is the average income of the doctor:10,00,000/Month \n";
    }
    cout << "The doctor is:\n";
}
second()
{
    char p_name[15], blood_grp[15], gender[15];
    int id, age, weight, bill;
    int mob_no;

    // Defalt Construtor -----> [  Stictly do not have return type  ]
    ofstream cwrite;
    cwrite.open("Patientdatabase2.txt");
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;
        cout << "File created successfully\n\n";

        cout << "Enter the patient name: \n";
        cwrite << "\n\nPatient name is: \n";
        cin >> p_name;
        cwrite << p_name;

        cout << "\nWhat is the blood group of patient ?\n";
        cwrite << "\nPatient blood group is: \n";
        cin >> blood_grp;
        cwrite << blood_grp;

        cout << "\nWhat is the gender of the patient ?\n";
        cwrite << "\nPatient gender is: \n";
        cin >> gender;
        cwrite << gender;

        cout << "\nWhat is the age of the patient ?\n";
        cwrite << "\nPatient age is: \n";
        cin >> age;
        cwrite << age;

        cout << "\nWhat is the weigth of the patient ? \n";
        cwrite << "\nPatient weight is: \n";
        cin >> weight;
        cwrite << weight;

        cout << "\nWhat is the contact number of the patient ?\n";
        cwrite << "\nPatient contact number is: \n";
        cin >> mob_no;
        cwrite << mob_no;

        cout << "\nWhat is the Bill of the patient ?\n";
        cwrite << "\nPatient bill is: \n";
        cin >> bill;
        cwrite << bill;
    }
    int p;

    cout << "Do you want to add one more patient information if yes press 1:\n";
    cwrite << "\n\nOne more patient information\n\n";
    cin >> p;

    if (p == 1) // Here we should always use "="   NOT "==";
    {
        cwrite.close();
        third();
    }
    else // Here we should always use "="   NOT "==";
    {
        cwrite.close();
        cout << "\nIt's ok, First patient file saved successfully\n";
    }

    second_switch();
}
third()

{
    char p_name[15], blood_grp[15], gender[15];
    int id, age, weight, bill;
    int mob_no;

    // Defalt Construtor -----> [  Stictly do not have return type  ]
    ofstream cwrite;
    cwrite.open("Patientdatabase3.txt");
    if (!cwrite)
    {
        cout << "Error while creating the file";
    }
    else
    {
        reception obj1;
        cout << "File created successfully\n\n";

        cout << "Enter the patient name: \n";
        cwrite << "\n\nPatient name is: \n";
        cin >> p_name;
        cwrite << p_name;

        cout << "\nWhat is the blood group of patient ?\n";
        cwrite << "\nPatient blood group is: \n";
        cin >> blood_grp;
        cwrite << blood_grp;

        cout << "\nWhat is the gender of the patient ?\n";
        cwrite << "\nPatient gender is: \n";
        cin >> gender;
        cwrite << gender;

        cout << "\nWhat is the age of the patient ?\n";
        cwrite << "\nPatient age is: \n";
        cin >> age;
        cwrite << age;

        cout << "\nWhat is the weigth of the patient ? \n";
        cwrite << "\nPatient weight is: \n";
        cin >> weight;
        cwrite << weight;

        cout << "\nWhat is the contact number of the patient ?\n";
        cwrite << "\nPatient contact number is: \n";
        cin >> mob_no;
        cwrite << mob_no;

        cout << "\nWhat is the Bill of the patient ?\n";
        cwrite << "\nPatient bill is: \n";
        cin >> bill;
        cwrite << bill;
    }
    int p;

    cout << "Do you want to add one more patient information if yes press 1:\n";
    cwrite << "\n\nOne more patient information\n\n";
    cin >> p;

    if (p == 1) // Here we should always use "="   NOT "==";
    {
        cwrite.close();
        cout << "We can save 3 patient only at a time\n\n";
        second_switch();
    }
    else // Here we should always use "="   NOT "==";
    {
        cwrite.close();
        cout << "\nIt's ok, First patient file saved successfully\n";
    }

    second_switch();
}

special_doctor()
{
    int ch;
    cout << "Enter the number that you want to meet that doctor denoted below:";
    cout << "\n1)Neurology\n2)Orthopedics\n3)Internal Medicine\n 4) Dermatology\n 5) Pediatrics\n ";
    cout << "6)General Surgery \n7) Radiology\n 8)Family Medicine \n 9)Pathology\n 10)Anesthesia\n 11)ENT\n";
    cin >> ch;
    switch (ch)
    {
    case 1:
    {
        Neurology();
        break;
    }
    case 2:
    {
        Orthopedics();
        break;
    }
    case 3:
    {
        Internal_Medicine();
        break;
    }
    case 4:
    {
        Dermatology();
        break;
    }
    case 5:
    {
        Pediatrics();
        break;
    }
    case 6:
    {
        General_Surgery();
        break;
    }
    case 7:
    {
        Radiology();
        break;
    }
    case 8:
    {
        Family_Medicine();
        break;
    }
    case 9:
    {
        Pathology();
        break;
    }
    case 10:
    {
        Anesthesia();
        break;
    }
    case 11:
    {
        ENT_Specialist();
        break;

        second_switch();
    }
    }
}

int main() // int main
{
    god();
    return 0;
}