# Отчет по лабораторной работе № 8
## по курсу "Фундаментальная информатика"

Студент группы М80-108Б-23 Щапов Андрей Денисович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Системы программирования на C

2. **Цель работы**: Изучение конкретной системы программирования на C и получение навыков подготовки текстов и отладки программ.

3. **Сценарий выполнения работы**: 
   1. Запуск редактора текстов
   2. Компиляция программы
   3. Запуск исполняемого файла

4. **Протокол**: 
```
aschapov@Lenovo-ideapad-720S-14IKB:~/CLionProjects/untitled$ gcc main.c -o main
main.c: In function ‘main’:
main.c:4:5: warning: implicit declaration of function ‘print’; did you mean ‘printf’? [-Wimplicit-function-declaration]
    4 |     print("Hello, World!\n");
      |     ^~~~~
      |     printf
/usr/bin/ld: /tmp/ccZCFmzT.o: in function `main':
main.c:(.text+0x18): undefined reference to `print'
collect2: error: ld returned 1 exit status
aschapov@Lenovo-ideapad-720S-14IKB:~/CLionProjects/untitled$ cat main.c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
aschapov@Lenovo-ideapad-720S-14IKB:~/CLionProjects/untitled$ gcc main.c -o main
aschapov@Lenovo-ideapad-720S-14IKB:~/CLionProjects/untitled$ ./main
Hello, World!
```

5. **Выводы**: В результате этой работы я познакомился с языком программирования C и получил базовые навыки подготовки текстов и отладки программ на нём. Эти знания будут полезны в будущем, так как на C написано большое количество сервисов, приложений, которые необходимо поддерживать.
