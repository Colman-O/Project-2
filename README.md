CS 124 / Fall 2022<br>
Project 2<br>
Cole O'Shaughnessy

# Data Set
The data set I chose is a record of every race by every driver in the history of Formula 1 up to the first grand prix of 2021. The author of the data set, which was found on Kaggle, took the data from the Formula 1 website. A few columns were not read into the vector. These include driver number, laps driven, and delta from the winner. Some data was included in the vector, but not used in the calculation. I added this data because I wanted to use it for more calculations in my free time. These are the sections I kept in the vector:

* **driver**- a string with the driver's name
* **position**- a string containing the final position of the driver in this race. This is saved as a string because some drivers do not finish the race, and the value saved for them is not an integer
* **car**- also referred to as constructor, this string contains the vehicle the driver used in this race
* **year**- an integer with the year of the race
* **grand prix**- a string representing the place in which the race was hosted
* **points**- an integer of how many points the driver scored based on their position and fastest lap
* **fastest lap**- a string representing whether the driver had the fastest lap in that race

By default, the entries are ordered like so: position, number, driver, car, number of laps, time to leader, points, grand prix, year, fastest lap. In the vector they are stored in the order set by the bulleted list above. 

I chose this data set because I have recently begun watching formula 1 races, and have become quite interested in the sport. I look forward to updating the data set and performing more calculations.  

This data set does not contain a set of unique values. I decided to use it anyway as I am genuinely interested in the set and will choose personal passions over a few points. To differentiate two elements from another, I created a method which compares driver name, grand prix, and year. This method can be used to prove that no two elements are the same.

# Demonstration of Completeness
I created a method within the race class which finds the number of rows in the .csv files given. Then, while reading the data into a vector, a variable keeps track of the number of elements which are entered into the vector. The code displays both numbers, and gives a warning in case both numbers are not equal. 

The figures below display both outcomes:

Number of lines read: 23175<br>
Out of 23175 lines<br>
Data read correctly<br>

Number of lines read: 17<br>
Out of 23175 lines<br>
Beware: Error while reading in data. Data may be false and/or incomplete

I also wrote lines of code to print out the information in the vector. If the code stopped on a certain grand prix, then I knew that was where an error had taken place. This happened every so often while testing the data set. Some point values were written as floats instead of integers. So I went into the data set and changed them to integers. Each time, I would rerun the program and it would lead me to the next invalid value. Luckily only a handful were written as floats.  

# Calculation Function
My program calculates the number of times the winner of a race also had the fastest lap. It then compares that to the number of winners who did not have the fastest lap and calculates a percentage. I was surprised that the percentage was this low. 

Race Winner Statistics<br>
\-----------------------------------------------------<br>
Grand Prix winner had the fastest lap: 375 times<br>
Grand Prix winner did not have the fastest lap: 664 times<br>
Total races: 1035<br>
36.0924% of race winners also had the fastest lap<br>
\------------------------------------------------------

I know the methods functioned properly because I added up the number of winners and compared it to the number of races. The numbers did not add up so I had the program find races with two winner instead of one, and the discrepancy made equaled out. 

# CS 124 Project 2
Create a Queue class and explore big-Oh complexities!

For this project, you will write a C++ program that uses Stack and Queue data structures to store objects of varying data types.

## Requirements
It is recommended that you use the data and program from Project 1 as a starting point.

### Stack Class
The Stack class from lecture is included in the starter code for this project.

### Queue Class
Create a Queue class that uses the Node class (also included in the starter code) to create a functioning queue data structure.
* Your Queue should keep track of where the front and back Nodes are.
* Your Queue should be able to:
  * `enqueue` (push Objects onto its back),
  * `dequeue` (pop and return Objects off its front),
  * `search` (determine if an Object is in the Queue or not), and
  * `print` (list all of the items in the Queue object, ordered from front to back).
* Your Queue must be able to be used with any data type.
* Your Nodes must be stored in heap memory.
* Your program must not have any memory leaks.

### Main function
Create two Queue objects: one of integers and one of strings. Demonstrate that the Queue methods work correctly by calling methods on the integer and string Queues and printing out to the console when appropriate.

Perform the following operations:
* Create a third Queue object and a Stack object, both of the type you created in Project 1.
* Use a loop to print and enqueue the first 10 objects from your vector (from Project 1) onto the Queue.
* Use a second loop to dequeue the 10 objects off the Queue and push them onto the Stack.
* Use a third loop to pop the 10 objects off the Stack and print them.

What is the order of the objects before and after adding them to the Queue and Stack?When and why did it change?

### Design
Consider the following questions:
* Using the Node class, will the links point from the front to the back of the Queue or from the back to the front? Which way will make the push and pop methods more efficient?
* How will you make sure there are no memory leaks?
* How will you print the objects in the main function? Should you overload an operator?

### Test
How can you demonstrate in your code that your Queue class works correctly? How can you use the integer and string Queue objects to show this?

## Report
You must write a report about your project. Answer the following questions directly in this section of the README file:
* Information about your data set (you will be assigned a different grader for this project)
* The time complexities of each method in the Stack and Queue classes
* Justify your use of pointers in the Queue (i.e. the direction of the arrows between the Nodes) as it relates to the complexity of the enqueue and dequeue methods
* An explanation of when and why the 10 objects in the main function changed their order

**Note: Any code that was not authored by yourself or the instructor must be cited in your report. This includes the use of concepts not taught in lecture.**

## Submit

You must include your source files, your data file(s), CMakeLists.txt, and your updated README.md file that contains your report to your repository. Submit to Gradescope using the GitHub repository link, double-check that all the correct files are there, and wait for the autograder to provide feedback.

## Grading
The project is out of 60 points.

| Points Possible | Description of requirement |
|------------------- | ----------------------------- |
| 5 pts | Program compiles and runs. |
| 5 pts | Code style. Readable, naming style is consistent, comments where appropriate. |
| 20 pts | Queue class satisfies requirements. |
| 5 pts | You create at least two Queue objects of different types, as described above. |
| 5 pts | You test your code to demonstrate that everything works correctly. |
| 10 pts | You perform the operations with the Stack and the Queue as described above. |
| 10 pts | Report satisfies requirements, is easily readable, and is professional. |
