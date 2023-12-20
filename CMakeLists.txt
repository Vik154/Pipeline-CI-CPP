# Минимальная версия CMake
cmake_minimum_required (VERSION 3.10)

# Имя проекта (под Windows сгенерирует - TestProject.sln)
project(TestProject)

# Устанавливаем путь к исходным файлам проекта
# Тут все вхождения cpp файлов (main.cpp, mylogical.cpp, myreleaseheaders.cpp и т.д.)
set(SOURCE_FILES
    src/main.cpp
)

# Добавляем исполняемый файл с именем myproject
add_executable(myproject ${SOURCE_FILES})
