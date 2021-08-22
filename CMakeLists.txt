cmake_minimum_required(VERSION "3.21.1")

project("HelloWorld")

add_executable("${CMAKE_PROJECT_NAME}" "main.cpp")

install(TARGETS "${CMAKE_PROJECT_NAME}" DESTINATION bin)

install(FILES "main.cpp" DESTINATION src)

include(CTest)

add_test("test0" "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}")

add_test("test1" "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}"
    "someparameter")
