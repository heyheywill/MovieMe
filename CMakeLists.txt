CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

SET(CMAKE_CXX_STANDARD 14)

ADD_SUBDIRECTORY(googletest)

ADD_EXECUTABLE(questionnaire 
	main.cpp
	questionnaire.cpp
	byGenre.cpp
	byActor.cpp
	outputter.cpp
	byRating.cpp
)

ADD_EXECUTABLE(test
	test.cpp
	questionnaire.cpp
	byGenre.cpp
	byActor.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
