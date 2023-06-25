CREATE DATABASE CAR_MANAGEMENT_SYSTEM;
USE CAR_MANAGEMENT_SYSTEM;

CREATE TABLE ADMIN(
A_Id numeric(5) PRIMARY KEY,
Name varchar(25),
Phone varchar(10) UNIQUE,
Address varchar(100)
);

CREATE TABLE CARS_COLLECTION(
Company varchar(50),
Model varchar(50),
Eng_No numeric(10) PRIMARY KEY,
Colour varchar(10),
Price float,
Car_Availability varchar(20)
);

CREATE TABLE CUSTOMER(
C_Payment_id varchar (5),
C_id varchar(5) PRIMARY KEY,
C_Name varchar(20),
C_Address varchar(100),
C_Phone varchar(10)
);

CREATE TABLE PAYMENT(
P_Id varchar(5) PRIMARY KEY,
P_Type varchar(20),
C_Eng_No numeric(10), FOREIGN KEY (C_Eng_No) references CARS_COLLECTION(Eng_No),
P_Cust_id varchar(5) NOT NULL, FOREIGN KEY (P_Cust_id) references CUSTOMER(C_id),
P_date date
);

CREATE TABLE STORE(
S_Name varchar(20),
S_Phone numeric(10),
S_Location varchar(100),
Rating float
);

CREATE TABLE EMPLOYEES(
E_Id numeric(5) PRIMARY KEY, 
E_Name varchar(20),
E_Phone varchar(10),
E_Salary float,
E_Address varchar(100)
);

CREATE TABLE P_TYPE(
P_Id varchar(5), FOREIGN KEY(P_Id) references PAYMENT(P_Id),
P_Type varchar(20)
);

CREATE TABLE CAR_AVAILABILITY(
Eng_No numeric(10), FOREIGN KEY (Eng_No) references CARS_COLLECTION(Eng_No),
Car_Availability varchar(20)
);

CREATE TABLE HAVE(
C_Id varchar(5), FOREIGN KEY (C_Id) references CUSTOMER(C_Id),
Eng_No numeric(10), FOREIGN KEY (Eng_No) references CARS_COLLECTION(Eng_No)
);

Alter table EMPLOYEES add FOREIGN KEY(E_Id) references ADMIN(A_Id);

INSERT INTO ADMIN VALUES (1001, 'John Smith', '9855571234', '123 Main St.');
INSERT INTO ADMIN VALUES (1002, 'Jane Doe', '9905555678', '456 Elm St.');
INSERT INTO ADMIN VALUES (1003, 'Bob Johnson', '9185559101', '789 Oak St.');
INSERT INTO ADMIN VALUES (1004, 'Mary Brown', '9755551212', '101 Maple Ave.');
INSERT INTO ADMIN VALUES (1005, 'Tom Davis', '7655534341', '234 Cedar St.');
INSERT INTO ADMIN VALUES (1006, 'Samantha Lee', '8455556561', '567 Pine St.');
INSERT INTO ADMIN VALUES (1007, 'David Kim', '9755578781', '890 Spruce St.');

INSERT INTO CUSTOMER VALUES ('P001', 'C001', 'John Anderson', '22 Man Street','7552651234');
INSERT INTO CUSTOMER VALUES ('P002', 'C002', 'Jennifer', '5234 Braun St','8554535678');
INSERT INTO CUSTOMER VALUES ('P003', 'C003', 'Mark Beiley', '5315 Marshall St', '9365559101');
INSERT INTO CUSTOMER VALUES ('P004', 'C004', 'Stacey Howland', '101 Sheridan Blvd', '9995551212');
INSERT INTO CUSTOMER VALUES ('P005', 'C005', 'Juan Martinez', '234 Wadsworth Byp', '8785553434');
INSERT INTO CUSTOMER VALUES ('P006', 'C006', 'Sundar', '5671 Flower Cir', '7985555656');
INSERT INTO CUSTOMER VALUES ('P007', 'C007', 'Sara Heinz', '1890 W Ave', '9115557878');

INSERT INTO STORE VALUES ('ABC Auto Sales', '9855571234', '984 Rocker River Road', 4.5);
INSERT INTO STORE VALUES ('XYZ Auto Emporium', '9905555678', '925 East Villa Street', 4.2);
INSERT INTO STORE VALUES ('123 Car Mart', '9185559101', '4233 North Peck Road', 4.7);
INSERT INTO STORE VALUES ('Best Auto Deals', '9755551212', '825 Ocean Avenue', 4.1);
INSERT INTO STORE VALUES ('Top Gear Autos', '7655534341', '420 La France Avenue', 4.3);
INSERT INTO STORE VALUES ('Car World', '8455556561', '2002 El Serrano Street', 4.8);
INSERT INTO STORE VALUES ('Auto Universe', '9755578781', '6125 Sard Street', 4.6);

INSERT INTO EMPLOYEES VALUES (1001,'Steve Bannen', '9255541234', 50000, '235 Forrest Road');
INSERT INTO EMPLOYEES VALUES (1002,'Patti Baker', '9832115678', 160000, '456 Fuchsia Court');
INSERT INTO EMPLOYEES VALUES (1003,'Todd Alias', '7564719876', 70000, '79 Williamson Road');
INSERT INTO EMPLOYEES VALUES (1004,'Nancy Bales','9665544321', 90000, '46 Pine St');
INSERT INTO EMPLOYEES VALUES (1005,'Michael Dravid', '9834634676', 85000, '654 Weston Street');
INSERT INTO EMPLOYEES VALUES (1006,'Earls Pamela A', '8751982345', 100000, '165 Wordsworth Awe');
INSERT INTO EMPLOYEES VALUES (1007,'Troy Barnhart', '9754616543', 110000, '245 Weston St');

INSERT INTO CARS_COLLECTION VALUES ('Toyota', 'Corolla', '123456', 'Blue', 300000, 'In Stock');
INSERT INTO CARS_COLLECTION VALUES ('Honda', 'Civic', '456789', 'Red', 250000, 'In Stock');
INSERT INTO CARS_COLLECTION VALUES ('Ford', 'Mustang', '567890', 'Yellow', 130000, 'In Stock'); 
INSERT INTO CARS_COLLECTION VALUES ('Chevrolet', 'Camaro', '234567', 'Black', 735000, 'Out of Stock'); 
INSERT INTO CARS_COLLECTION VALUES ('Nissan', 'Altima', '678901', 'Green', 840000, 'In Stock');
INSERT INTO CARS_COLLECTION VALUES ('BMW', 'M5', '789012', 'White', 945000, 'Out of Stock');
INSERT INTO CARS_COLLECTION VALUES ('Mercedes', 'S-Class', '345678', 'Silver',958000, 'In Stock');

INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P001', 'Cash', '123456', 'C001', '2022-01-01');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P002', 'Credit Card', '234567', 'C002', '2021-07-02');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P003', 'Cheque', '345678', 'C003', '2020-05-13');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P004', 'Cash', '456789', 'C004', '2021-06-22');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P005', 'Credit Card', '567890', 'C005', '2019-10-16');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P006', 'Cheque', '678901', 'C006', '2017-09-12');
INSERT INTO PAYMENT (P_id, P_Type, C_Eng_No, P_Cust_id, P_date) VALUES ('P007', 'Cash', '789012', 'C007', '2018-11-07');

select * from ADMIN;
select distinct P_Type from PAYMENT;
select * from CARS_COLLECTION where Car_Availability ="Out of Stock";
select * from EMPLOYEES where E_salary>50000;
select Colour from CARS_COLLECTION where Car_Availability ="In Stock"; 
select C_Name from CUSTOMER, PAYMENT where P_Type="Credit Card" and CUSTOMER.C_id=PAYMENT.P_Cust_id;
Alter table EMPLOYEES modify E_Phone varchar(10) NOT NULL;
desc EMPLOYEES;
select C_Name from CUSTOMER where C_id in (Select P_Cust_id from PAYMENT where C_Eng_No in (select Eng_No from CARS_COLLECTION where Model="S-Class" and Company="Mercedes"));
select P_Type, Model from PAYMENT, CARS_COLLECTION where P_Cust_id="C005" and PAYMENT.C_Eng_No=CARS_COLLECTION.Eng_No;
select Company,Model,Car_Availability from CARS_COLLECTION where Eng_No in (Select C_Eng_No from PAYMENT where P_Cust_id in(Select C_id from CUSTOMER where C_Name="Jennifer"));
select E_Name from EMPLOYEES, ADMIN where ADMIN.A_Id=EMPLOYEES.E_Id and Name="Jane Doe";
alter table CUSTOMER modify C_Name varchar(50);
delete from STORE where Rating = 4.2;
select avg(Rating) from STORE;
select S_Name, max(Rating) from STORE;
create view Model as (select Model,P_Type from CARS_COLLECTION join PAYMENT on CARS_COLLECTION.Eng_No = PAYMENT.C_Eng_No);
select * from Model;
drop view Model;
create user Ria@localhost identified by 'abc123';
grant all privileges on ADMIN to 'Ria'@'localhost';
grant all privileges on CARS_COLLECTION to 'Ria'@'localhost';
select C_Name from CUSTOMER where C_Name like "J%";
Update EMPLOYEES set E_Salary=E_Salary+(0.1*E_Salary);
select E_Salary from EMPLOYEES;
Alter table ADMIN rename to Car_Administrator;
Delete from PAYMENT where P_Id="P007";
select P_Id,P_date from PAYMENT where P_Id<"2020-05-13";
select E_Address from EMPLOYEES where E_Salary in (75000, 100000);