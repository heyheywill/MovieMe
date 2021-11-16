
# MovieMe
  Authors: [Ali Shaikh](https://github.com/alihshaikh), 
           [Mihika Nerurkar](https://github.com/mneru002),
           [William He](https://github.com/heyheywill),
           [Naina Pasricha](https://github.com/nainap3)
          

 

## Project Description
 ### Why is it interesting?
  * As college students, we spend a lot of time with our friends and family watching movies. So much time is wasted trying to decide which movie to watch. With this tool we would be able to help others (and ourselves) figure out what movie to put on in a more efficient manner that is catered towards our interests. Beyond the practical use of the tool, the actual code also intrigues us. We find the idea of customizing results based on the individual to be a complex but engaging challenge. The combination of a functional project and interesting code makes this project for us.

 ### Languages, Tools, and Technologies
  * [C++](https://www.cplusplus.com/) - Used to implement the frontend and backend during the development process.
  * [GoogleTest](https://github.com/google/googletest) - Used to create unit tests for classes and function during development.
  * [Valgrind](https://www.valgrind.org/) - Used for tracking common issues such as memory leaks and debugging.
### Features
  * At launch, the user will be able to go through a quick questionnaire about their genre preferences, favorite actors, length of movie, and more. The user will receive these questionaries and respond through the terminal. Through this questionnaire, the program will then generate movie titles that correlate to the user’s preferences. The user will be provided a list of Movies that match the user's preferences. The user can then choose which movie fits their needs by entering the number listed by the movie, and the project will provide additional information including the movie title, movie summary, movie rating, actors and percentage match. All inputs and outputs will be through the terminal.
 


## Class Diagram
<img width="750" alt="Screen Shot 2021-11-08 at 7 05 43 PM" src="https://user-images.githubusercontent.com/63078485/140856129-f02bee47-a424-44a4-bc67-f0eebcf634d2.png">


 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II.
 > * You should also update this README file by adding the following:
 >   * What design patterns did you use? For each design pattern you must explain in 4-5 sentences:
 >   1. Strategy Design Pattern
 >   We chose this design pattern since it allows us to specify user preference based on movie attributes. If someone wants a movie based on genre, actors, directors, or etc., we are able to provide the user the results of each individual attributes. We can also combine the strategies to create an even more targeted search such as wanting both a specific genre and actor. This design pattern helped us write better code since it allows us to isolate code, data, and algorithms into a class hierarchy that improves on readablity and brevity.
 >   2. Singleton Design Pattern
 >   We chose this creational design pattern since it ensures to the client and developer which .csv will be used for the whole program. By implementing singleton, we are able to create a single instance that will be used to comprise our movieList. Our singleton class contains a string of the .csv file name. When the instance is function called, we return the .csv file name. Since the object can not be overwritten, testing code between pulls and merges ensures no compilation error will occur due to a "missing" .csv file. This improves the code since there will be less confusions and mistakes regarding which database to use. 
 >     * Why did you pick this pattern? And what feature did you implement with it?
 >     * How did the design pattern help you write better code?
 >   * An updated class diagram that reflects the design patterns you used. You may combine multiple design patterns into one diagram if you'd like, but it needs to be clear which portion of the diagram represents which design pattern (either in the diagram or in the description).
 >   * Make sure your README file (and Project board) are up-to-date reflecting the current status of your project. Previous versions of the README file should still be visible through your commit history.
> 
> During the meeting with your TA you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.

 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
