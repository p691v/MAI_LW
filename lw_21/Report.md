# Отчет по лабораторной работе № 21
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Щаппов Андрей Денисович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование на интерпретируемых языках
2. **Цель работы**: Составить программу выполнения заданных действий над файлами на интерпретируемом командном языке Bash.
3. **Задание**: Вариант 26 (Рекурсивный обход и подсчёт числа выполнимых файлов в каталоге и поддиректроиях).
4. **Идея, метод, алгоритм решения задачи**:
	- Чтение входных параметров при запуске скрипта (в качестве единственного параметра указывается абсолютный путь до каталога или символ "?" для вывода справки).
	- Проверка правильности полученных параметров (если путь указан неверно, в качестве него используется текущая рабочая директория).
	- Подсчёт количества выполнимых файлов при помощи цикла `for` и команды `find`.
	- Вывод результата в терминал.
6. **Протокол**:
7. **Замечания автора** -
8. **Выводы**: Bash, безусловно, является важным инструментом в IT-индустрии, так как огромное количество серверов работает под управлением UNIX-подобных систем, для взаимодействия с которыми необходим данный язык. Благодаря этому навык написания Bash-скриптов является одним из ключевых для высококвалифированного программиста.