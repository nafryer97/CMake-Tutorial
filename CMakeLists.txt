cmake_minimum_required(VERSION "3.21.1")
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project("HelloWorld")

add_executable("${CMAKE_PROJECT_NAME}" "main.cpp")

install(TARGETS "${CMAKE_PROJECT_NAME}" DESTINATION bin)

install(FILES "main.cpp" DESTINATION src)

include(CTest)
include(CPack)

set(CPACK_GENERATOR "TGZ")

add_test("test0" "${CMAKE_CURRENT_BINARY_DIR}/${CMAKE_PROJECT_NAME}")
