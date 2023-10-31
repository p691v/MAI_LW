# Отчет по лабораторной работе № 5
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Щапов Андрей Денисович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Программирование машин Тьюринга

2. **Цель работы**: Составить программу МТ в четвёрках, выполняющую сложение двух двоичных чисел без знака.

3. **Задание (вариант №<номер варианта если есть>)**: Вариант 5 (4)

4. **Идея, метод, алгоритм решения задачи**: Реализовать алгоритм сложения "столбиком"

5. **Сценарий выполнения работы**: 
        1. Головка стоит справа от правого слагаемого;
        2. Переместить головку перед левым слагаемым;
        3. Скопировать левое слагаемое, игнорируя незначащие нули;
        4. Начиная с последней цифры правого слагаеомого, выполнить сложение чисел по разрядам;
        5. После сложения в очередном разряде перенести результат вычислений вправо, если он увеличился на разряд.

6. **Протокол**: [listing](https://github.com/p691v/MAI_LW/blob/main/lw_5/listing.md)

7. **Замечания автора:** Программы для машин Тьюринга очень длинные и неудобны для чтения, приходится даже самые простые действия реализовывать вручную. 

8. **Выводы**: По итогу работы я научился работать с машинами Тьюринга. Работа была сложной и долгой из-за необходимости самостоятельно прописывать элементарные действия, но тем самым можно потренировать алгоритмическое мышление.