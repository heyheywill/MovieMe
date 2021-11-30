
# MovieMe [![CI](https://github.com/cs100/final-project-whe038-ashai014-npasr001-mneru002/actions/workflows/main.yml/badge.svg)](https://github.com/cs100/final-project-whe038-ashai014-npasr001-mneru002/actions/workflows/main.yml)
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
![Phase 2 (2)](https://user-images.githubusercontent.com/73146586/144114944-491a83ae-c03a-466e-9b6b-3e55f7d32b2d.png)

 ### Description
  *   The Movie class provides all the data members that a movie will contain, such as title, actors, genre, and etc. 
  *   MovieList is a vector of Movies that will be filled after reading in a .csv file.
  * SortLists class is a base abstract class that all of our algorithms will derive from so that we can specifiy what we want to search for in movieList
  *   byGenre, byActor, and byRating are classes that will search for a movie that contains the respective characteristic. For instance, byGenre will search for movies that contain a user wanted genre (Ex. Comedy). Another example, byActor will search for movies that contain a user wanted actor (Ex. "Daniel Craig").
  *  Class Outputter will output the list of movies that meet the user's criteria. 
  * Ask the user movie related questions that we will then save and use in our algorithms.
  * Created singleton class so that the .csv database is accessible from anywhere in the program. Returns the .csv file that will be used for movieList.
  * Questionnaire class asks user a series of questions to answer, saves the user's answers, and then allows the algorithms to use the answers to suggest movies.
 
## Design Patterns
 ###  1. Strategy Design Pattern
 *   We chose this design pattern since it allows us to specify user preference based on movie attributes. If someone wants a movie based on genre, actors, directors, or etc., we are able to provide the user the results of each individual attributes. We can also combine the strategies to create an even more targeted search such as wanting both a specific genre and actor. This design pattern helped us write better code since it allows us to isolate code, data, and algorithms into a class hierarchy that improves on readablity and brevity.
 ###   2. Singleton Design Pattern
 *   We chose this creational design pattern since it ensures to the client and developer which .csv will be used for the whole program. By implementing singleton, we are able to create a single instance that will be used to comprise our movieList. Our singleton class contains a string of the .csv file name. When the instance is function called, we return the .csv file name. Since the object can not be overwritten, testing code between pulls and merges ensures no compilation error will occur due to a "missing" .csv file. This singleton class acts as a movie database.


 
 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
<img width="829" alt="Screen Shot 2021-11-29 at 8 11 18 PM" src="https://user-images.githubusercontent.com/63078485/143984495-d970f8d6-a232-4a89-a466-5a4f54733657.png">
<img width="819" alt="Screen Shot 2021-11-29 at 8 11 35 PM" src="https://user-images.githubusercontent.com/63078485/143984523-e4deaa95-cff3-4310-8a50-353c2118ee20.png">
![image](https://user-images.githubusercontent.com/73146586/144115461-c67b2921-bfa8-4f93-b546-84ccaeef9c5b.png)

 ## Installation/Usage
 ```to install this program: git clone https://github.com/cs100/final-project-whe038-ashai014-npasr001-mneru002.git```
 
 ```to run program: cmake3. ; make ; ./questionnaire (used as seperate comnmands) ```
 ## Testing
 * Our project was validated through Github Actions and unit testing. Our status badge for Github Actions is on the top of the README.
 
