# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы M8О-108Б-23 Гаврилов Никита Валерьевич

Работа выполнена

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

## Тема
Алгоритмы и структуры данных

## Цель работы
Обработка алгебраического выражения. Преобразовать умножение в сложение

## Идея, метод, алгоритм решения задачи
### Идея:

Идея заключается в том, чтобы запомнить переменные и операнды и в цикле менять знак * на сложение двух переменных n раз
### Алгоритм решения задачи:

1) Обход строки по токенам
* Запомнить левый, средний и правый токен
2) Если при обходе: средний токен это знак *:
  * Начать алгоритм преобразования
  * Заменить три токена на результат алгоритма
* Продолжить обход
3) Вывести обработанную строку
4) Вывести обработанную строку в виде дерева
  

## Замечания

Во время работы над программой, я столкнулся с несколькими проблемами. Во-первых, мне пришлось изучить как проходить строку по токенам. Во-вторых, я столкнулся с проблемой обработки исключений и ошибок, которые могут возникнуть во время выполнения программы, таких как неправильный ввод данных (отличать переменые от операндов) или утечки памяти.
## Выводы

После выполнения работы, я могу сделать вывод, что программа успешно выполняет поставленную задачу: преобразование алгебраического выражения. Также программа успешно преобразовывает алгебраическое выражение в дерево и выводит его. 