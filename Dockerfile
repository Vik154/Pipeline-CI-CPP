# Создание своего докер-образа на основе gcc
FROM gcc:latest

# Рабочая директория куда поставится проект
WORKDIR /usr/src/myproj

# Копирование всех файлов из текущей дир. в контейнер
COPY . /usr/src/myproj

# Обновление и установка пакетов cmake и на всякий build-essential 
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake

# Удаление папки "build" если вдруг собирал cmake под windows
# создание папки "build", конфигурирование симэйком, потом сборка
RUN rm -Rf build && \
    mkdir build && \
    cd build && \
    cmake .. && \
    cmake --build .

# запуск исполняемого файл -- myproject при создании контейнеров
CMD cd build/ && ./myproject
