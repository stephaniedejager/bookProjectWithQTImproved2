# bookProjectWithQTImproved2

Modify the Book class in https://github.com/stephaniedejager/bookProjectWithQTImproved.git, so that you can use the DataObjectTableModel in the Ezust library dataobjects as the model class. 

Remember to include the dataobjects library in the .pro file.

Write a GUI class that satisfies the following requirements:
1. Authors’ names should be stored in a QString, separated by semicolons. <br />
2. Initialize the model with at least two Book instances. <br />
3. View all the Book instances in the model at a given time using a QTableView. <br />
4. User should be able to edit values in each cell of the table (QTableView) which should
automatically change the state of the appropriate Book instance in the model. <br />
5. User should be able to add a new Book instance (i.e. adding a Book instance in the model
and in the view) using an ‘Add’ button on the GUI, which adds a new row in the table. 
The user can then populate the newly added row with appropriate values. <br />
6. User should be able to delete a row in the table (i.e. deleting a Book instance in the model and
in the view) by selecting a row and using a ‘Delete’ button on the GUI. <br />
7. At any time, the user should be able to view the model in XML format (either on the console
or on the GUI). Note that you don’t need any experience in parsing or formatting in XML to
complete this question; however, you need to study the DataObjectTableModel class
carefully to create a solution that satisfies the above requirements. <br />
8. The write-to-file functionality may be removed. <br />

Test your modified Book class and the new GUI class.

![image](https://user-images.githubusercontent.com/68548733/167005802-86a95b82-5e09-401d-a5fc-c2a831d8a897.png)

Press Add

![image](https://user-images.githubusercontent.com/68548733/167005880-f6641538-49eb-40f1-8f2b-da6fd83e71a4.png)

Type in 

![image](https://user-images.githubusercontent.com/68548733/167006052-be9dd074-bb4d-4a16-9e62-b8bf55601de1.png)


Press Display

![image](https://user-images.githubusercontent.com/68548733/167006147-73366fbc-4aa7-44d6-8263-66841f50759a.png)

Press on book that you want deleted (it will be highlighted)

![image](https://user-images.githubusercontent.com/68548733/167006285-6c41d6fe-5e01-43d5-8c0a-9725e7b56b0d.png)

Then Press Delete button

![image](https://user-images.githubusercontent.com/68548733/167006348-81153a32-2d5b-496a-b6d7-a5acd088f47e.png)

