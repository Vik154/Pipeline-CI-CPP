## Пример простого развертывания приложения на C++

### Сборка и запуск из под Linux, Windows и Docker

<details> <summary><b><i>🤯 Описание шагов с использованием WSL 2 и Ubuntu 22.04.3 LTS</i></b></summary>
  
_Создать новую папку, чтобы снести потом_
~~~bash
sudo mkdir new_folder && cd new_folder/
~~~

_Склонировать репозиторий_
~~~bash
sudo git clone https://github.com/Vik154/Pipeline-CI-CPP.git
~~~

_Перейти в репозиторий, создать папку "build" и перейти в неё_
~~~bash
cd Pipeline-CI-CPP/ && sudo mkdir build && cd build/
~~~

_Внутри папки "build" сконфигурировать файлы с помощью CMake_
~~~bash
sudo cmake ..
~~~

_Всё также внутри папки "build" собрать проект_
~~~bash
sudo cmake --build .
~~~

_Запустить_
~~~bash
./myproject
~~~
</details>

<details> <summary><b><i>🤯 Описание шагов с использованием PowerShell 7 и Windows 11</i></b></summary>

_Создать новую папку и перейти в неё_
~~~console
mkdir test && cd test/
~~~

</details>


<img align="center" width="880" height="450" src="print_screen/Hello.png" alt="Пример работы данного кода"/>

