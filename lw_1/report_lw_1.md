# Отчет по лабораторной работе № 1
## по курсу "Фундаментальная информатика"

Студент группы М8О-108Б-23 Щапов Андрей Денисович

Работа выполнена 

Преподаватель: каф. 806 Севастьянов Виктор Сергеевич

1. **Тема**: Git, GitHub, GitLab etc
2. **Цель работы**: Освоение базовых команд Git
3. **Задание**: Через Unix shell создать репозиторий на GitHub
4. **Идея, метод, алгоритм решения задачи**: Несмотря на то что GitHub предоставляет возможность работы с рпозиториями через графический интерфейс, в ходе работы использовался только терминал операционной системы Ubuntu, чтобы соответствовать требованиям задания.
5. **Сценарий выполнения работы**: 
- Изучение простейших команд bash
- Знакомство с системой контроля версия Git
- Работа в Unix shell
6. **Протокол**: 
=======
```aschapov@Lenovo-ideapad-720S-14IKB:~$ mkdir inf_labs
>>>>>>> task
aschapov@Lenovo-ideapad-720S-14IKB:~$ cd /home/aschapov/inf_labs
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git init
hint: Using 'master' as the name for the initial branch. This default branch name
hint: is subject to change. To configure the initial branch name to use in all
hint: of your new repositories, which will suppress this warning, call:
hint: 
hint: 	git config --global init.defaultBranch <name>
hint: 
hint: Names commonly chosen instead of 'master' are 'main', 'trunk' and
hint: 'development'. The just-created branch can be renamed via this command:
hint: 
hint: 	git branch -m <name>
Initialized empty Git repository in /home/aschapov/inf_labs/.git/
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git branch -m main
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	lw_1/

nothing added to commit but untracked files present (use "git add" to track)
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ cd lw_1
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git status
On branch main

No commits yet

Untracked files:
  (use "git add <file>..." to include in what will be committed)
	./

nothing added to commit but untracked files present (use "git add" to track)
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git add Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git status
On branch main

No commits yet

Changes to be committed:
  (use "git rm --cached <file>..." to unstage)
	new file:   Report-template.md

aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git commit -m "first commit"
[main (root-commit) 28cb6f9] first commit
 1 file changed, 26 insertions(+)
 create mode 100644 lw_1/Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git remote add origin https://github.com/p691v/MAI_LW.git
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git push -u origin main
Username for 'https://github.com': p691v
Password for 'https://p691v@github.com': 
Enumerating objects: 4, done.
Counting objects: 100% (4/4), done.
Delta compression using up to 8 threads
Compressing objects: 100% (2/2), done.
Writing objects: 100% (4/4), 1.51 KiB | 1.51 MiB/s, done.
Total 4 (delta 0), reused 0 (delta 0), pack-reused 0
To https://github.com/p691v/MAI_LW.git
 * [new branch]      main -> main
Branch 'main' set up to track remote branch 'main' from 'origin'.
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git config --global credential.helper cache
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git config -l
user.name=p691v
user.email=p691v@github.com
credential.helper=cache
core.repositoryformatversion=0
core.filemode=true
core.bare=false
core.logallrefupdates=true
remote.origin.url=https://github.com/p691v/MAI_LW.git
remote.origin.fetch=+refs/heads/*:refs/remotes/origin/*
branch.main.remote=origin
branch.main.merge=refs/heads/main
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git branch task
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git branch
* main
  task
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ git checkout task
Switched to branch 'task'
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ mv Report-template.md report_lw_1.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs/lw_1$ cd ~/inf_labs
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git add -A
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git status
On branch task
Changes to be committed:
  (use "git restore --staged <file>..." to unstage)
	renamed:    lw_1/Report-template.md -> lw_1/report_lw_1.md
	new file:   lw_10/Report-template.md
	new file:   lw_11/Report-template.md
	new file:   lw_12/Report-template.md
	new file:   lw_13/Report-template.md
	new file:   lw_14/Report-template.md
	new file:   lw_15/Report-template.md
	new file:   lw_2/Report-template.md
	new file:   lw_3/Report-template.md
	new file:   lw_4/Report-template.md
	new file:   lw_5/Report-template.md
	new file:   lw_6/Report-template.md
	new file:   lw_7/Report-template.md
	new file:   lw_8/Report-template.md
	new file:   lw_9/Report-template.md

aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git commit -m "Edit report"
[task 4d5fafa] Edit report
 15 files changed, 364 insertions(+)
 rename lw_1/{Report-template.md => report_lw_1.md} (100%)
 create mode 100644 lw_10/Report-template.md
 create mode 100644 lw_11/Report-template.md
 create mode 100644 lw_12/Report-template.md
 create mode 100644 lw_13/Report-template.md
 create mode 100644 lw_14/Report-template.md
 create mode 100644 lw_15/Report-template.md
 create mode 100644 lw_2/Report-template.md
 create mode 100644 lw_3/Report-template.md
 create mode 100644 lw_4/Report-template.md
 create mode 100644 lw_5/Report-template.md
 create mode 100644 lw_6/Report-template.md
 create mode 100644 lw_7/Report-template.md
 create mode 100644 lw_8/Report-template.md
 create mode 100644 lw_9/Report-template.md
aschapov@Lenovo-ideapad-720S-14IKB:~/inf_labs$ git merge task
Already up to date.
```
7. **Замечания автора** Отсутствуют
8. **Выводы**: Выполнив данную работу, я получил базовые навыки работы с командной строкой unix и системой контроля версий Git. Я уверен, что в будущем мне пригодятся полученные знания, так как без системы контроля версий не обходится ни один it-проект, а знание bash является весомым преимуществом при приёме на должность разработчика или аналитика данных.
