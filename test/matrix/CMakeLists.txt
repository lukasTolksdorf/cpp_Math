file(GLOB SRCS *.cpp)
file(GLOB INCL *.hpp)

ADD_EXECUTABLE(testmatrix ${SRCS} ${INCL})

TARGET_LINK_LIBRARIES(testmatrix
    libmatrix
    gtest
    gmock_main
)

add_test(NAME testmatrix COMMAND testmatrix)
