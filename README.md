# User Registration and Login System

This program is a simple yet efficient user registration and login system implemented in C++ and SQL. It allows users to sign up with a username and password, and log in using these credentials. The system uses a MySQL database to store and manage user information securely.

## Features

- User registration with email/phone number and password
- User login with email/phone number and password verification
- Secure storage of user credentials in a MySQL database

## Prerequisites

Before you can run this program, you need to have the following installed on your system:

- MySQL Server
- MySQL Connector/C++ (to allow C++ to connect with the MySQL database)
- A C++ compiler (e.g., GCC, Clang, MSVC)

Additionally, you need to set up a MySQL database and table for storing user information. Here is a simple SQL query to create the necessary table:

```sql
CREATE DATABASE mydb;
USE mydb;
CREATE TABLE users (
    Id VARCHAR(255) NOT NULL,
    PW VARCHAR(255) NOT NULL,
    PRIMARY KEY (Id)
);
```

Replace `mydb` and `users` with your desired database and table names if different.

## Installation

1. Ensure that MySQL Server is running on your system.
2. Clone this repository to your local machine.
3. Compile the program using your C++ compiler. For example, if you are using GCC, you can compile the program using the following command:

```bash
g++ -o login_system login_system.cpp `mysql_config --cflags --libs`
```

Replace `login_system.cpp` with the path to your program file, and `login_system` with your desired output file name.

## Usage

To run the program, simply execute the compiled binary. On first run, the program will attempt to connect to the MySQL database using the credentials provided in the source code. You will be presented with a simple menu to either sign up or log in.
