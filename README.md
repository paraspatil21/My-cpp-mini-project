# My-cpp-mini-project
This is the project of Hospital Managemant System, <br>I have created this mini project in the 3rd SEM



# Hospital Management System

## Overview

This C++ program is a simple Hospital Management System designed to manage patient and doctor information. It provides features such as patient registration, doctor registration, viewing patient and doctor details, and finding specialized doctors.

## Features

### User Authentication

The program includes a basic user authentication system to ensure the security of sensitive information. Users are required to enter a password to access the system.

### Patient Registration

The program allows hospital staff to register new patients. Patient details such as name, blood group, gender, age, weight, contact number, and bill amount are collected and stored in separate text files.

### Doctor Registration

The system also allows staff to register new doctors. Doctor details including name, education, work experience, age, weight, contact number, and average income per month are collected and stored in text files categorized by medical specialization.

### Viewing Patient Details

Users can view the details of registered patients. They can specify the patient number (1 to 3) to retrieve the relevant information.

### Viewing Doctor Details

Users can view the details of registered doctors, including specialized doctors in various fields such as Neurology, Orthopedics, Internal Medicine, Dermatology, Pediatrics, General Surgery, Radiology, Family Medicine, Pathology, Anesthesia, and ENT (Ear, Nose, and Throat) Specialist.

### Changing Password

Users have the option to change the login password.

## Code Structure

### User Authentication (sign_in, watch_password, change)

- `sign_in()`: This function handles user authentication by comparing the entered password with the stored password.

- `watch_password()`: Displays the current password.

- `change()`: Allows users to change the password.

### Patient Registration (reception class)

- The `reception` class handles patient registration. It collects patient details and stores them in text files (Patientdatabase1.txt, Patientdatabase2.txt, Patientdatabase3.txt).

### Doctor Registration (dean class)

- The `dean` class handles doctor registration. It collects doctor details and stores them in text files categorized by specialization (Doctor_Neurology.txt, Doctor_Orthopedics.txt, etc.).

### Viewing Patient and Doctor Details

- `view_patient()`: Allows users to view patient details by specifying the patient number.

- `view_doctor()`: Allows users to view details of all registered doctors.

### Specialized Doctors (Neurology, Orthopedics, ...)

- These functions create text files containing information about specialized doctors in various medical fields.

### Main Functions (god, second, third, second_switch, special_doctor)

- The `god` function is the main entry point. It displays the main menu and provides options to sign in, change the password, and navigate to other sections.

- `second`, `third`: Handle the registration of additional patients and limit it to three entries.

- `second_switch`: Provides a menu for different operations related to patients and doctors.

- `special_doctor`: Allows users to find specialized doctors and displays their information.

## Usage

1. Compile the program using a C++ compiler.

2. Run the executable.

3. Use the main menu to sign in, change the password, register patients, register doctors, view patient details, view doctor details, or find specialized doctors.

## Important Notes

- The program stores patient and doctor information in text files. Make sure the necessary files have write permissions and exist in the same directory as the executable.

- The program has a limitation of registering up to three patients before requiring you to navigate back to the main menu.

## Author

Paras Sanjay Patil

## License

This code is available under the Paras Sanjay Patil license.


