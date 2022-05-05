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
