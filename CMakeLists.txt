cmake_minimum_required(VERSION 3.15)
project(AuthSystem)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Включить FetchContent для загрузки библиотек
include(FetchContent)

# Конфигурация для bcrypt
FetchContent_Declare(
    bcrypt
    GIT_REPOSITORY https://github.com/trusch/libbcrypt
    GIT_TAG master
)

# Конфигурация для JSON (нужна для работы с токенами)
FetchContent_Declare(
    nlohmann_json
    GIT_REPOSITORY https://github.com/nlohmann/json.git
    GIT_TAG v3.11.2
)

# Конфигурация для OpenSSL (для генерации токенов)
find_package(OpenSSL REQUIRED)

# Загружаем зависимости
FetchContent_MakeAvailable(bcrypt nlohmann_json)

# Создаем исполняемый файл
add_executable(auth_system main.cpp)

# Линкуем библиотеки
target_link_libraries(auth_system 
    PRIVATE 
        bcrypt
        nlohmann_json::nlohmann_json
        OpenSSL::Crypto
)

# Включаем директории с заголовками
target_include_directories(auth_system 
    PRIVATE 
        ${FETCHCONTENT_BASE_DIR}/bcrypt-src
)
