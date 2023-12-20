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
# запуск исполняемого файл -- myproject
RUN rm -Rf build && \
    mkdir build && \
    cd build && \
    cmake .. && \
    cmake --build .

CMD cd build/ && ./myproject

# Скопируем приложение со сборочного контейнера в рабочую директорию
#COPY --from=myproj /usr/src/myproj/build/myproject .

# Установим точку входа
#ENTRYPOINT ["./myproject"]


# RUN cd build && ./myproject

# CMD [ "cd build && ./myproject" ]
# CMD [ "./myproject" ]
# ENTRYPOINT [ "./myproject" ]  

#CMD [ "ls -la" ]
# CMD [ "bash" ]