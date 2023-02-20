Include(FetchContent)

FetchContent_Declare(
        Catch2
        GIT_REPOSITORY https://github.com/catchorg/Catch2.git
        GIT_TAG v3.0.1
)

FetchContent_MakeAvailable(Catch2)

add_executable(VUtilsTest Vec3Test.cpp)
target_link_libraries(VUtilsTest PUBLIC VUtils PRIVATE Catch2::Catch2WithMain)
target_include_directories(VUtilsTest PUBLIC VMath)