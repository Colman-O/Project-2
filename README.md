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

# Time Complexity of Methods
Stack Class Methods:
* Push - O(1)
* Pop - O(1)
* Search - O(N)
* Print - O(N)

Queue Class Methods:
* Enqueue - O(1)
* Dequeue - O(1)
* Search - O(N)
* Print - O(N)

# Pointers
The pointers in my Queue class point to the node behind it in the queue. While the time complexity might not have changed for the enqueue class, the complexity of the dequeue certainly would have. With the pointers as they are, the time complexity is constant. If they switched directions, the program would have to search through the entire queue to find the new front after each dequeue. The new complexity would be linear. 

# Direction Switch
The ten items are put into a queue first. As each is dequeued and printed, the order remains the same as they were enqueued. This is because queues are FIFO data structures. As they are fed into the stack, this changes. Stacks are LIFO data structures, therefore the last item pushed into the stack is the first to be popped and printed. The first item pushed is the last to be popped and printed. This reverses the entire order of the items. 