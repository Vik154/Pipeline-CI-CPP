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

# Можно и так (Тогда имя исполняемого файла будет == TestProject)
# add_executable(${PROJECT_NAME} src/main.cpp)

# Указываем, какую версию компилятора использовать
# target_compile_features(myproject PRIVATE cxx_std_11)

# Устанавливаем дополнительные настройки компиляции
# target_compile_options(myproject PRIVATE -Wall)
