INCLUDE_DIRECTORIES(../include)

SET(SRC_FILES
    test.cpp
)

SOURCE_GROUP( "Header Files" )
SOURCE_GROUP( "Source Files" )

SOURCE_GROUP("Test Files\\test" FILES 
    ${SRC_FILES}
)

ADD_EXECUTABLE(cpp_cockles_tests ${SRC_FILES})

ADD_TEST(test cpp_cockles_tests)
