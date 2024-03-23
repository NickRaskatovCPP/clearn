//я научился удалять репозитории

//научился создавать юзера в гит
//git config user.name - юзер
//git config user.email - мыло юзера

//научился удалять юзеров:
//git config --unset
//git config --remove -section user

//я выучил команды git config --list
//Настройки для разных уровней приватности как я понял:
//--local - локальные, -global - глобальные, --system - на уровне системы

//Научился смотреть файлы репо через гит:
//ls
//Научился смотреть состояние файлов в гите:
//git status

//Научился добавлять файлы в индексирование гита:
//git add main.cpp
//git add -p (добавление лишь части изменений в индекс)
//добавлять файлы, даже те, которые указаны в .gitignore
//git add --force (-f)

//а так же переносить файлы из индекса в репозиторий
//git commit
//git commit -m 'obyasneniye kommita'
//git commit -am 'komment kommita' (добавляет сразу коммит через индекс одной командой)

//вывести все настройки директории
//git config --list

//настраивать короткие команды в гите
//git config --global alias.c config
//это заменит приравняет команду git config к git c

//просматривать статус всех файлов в директории
//git status

//смотреть все изменения в комите
//git sshow r6546453 (номер коммита)

//указывать автора коммита
//git commit --authotr = 'vasya'
//git commit --date = '...'

//Добавлять новую папку (можно только при условии, что в папке лежит какой либо файл)
//git add. (добавляет все изменения в каталог)

//убирать файлы редактора из репозитория
//git reset HEAD .vscode
//создавать правило игнорирования файлов через файл .gitignore

//удаление файлов
//физически удаляем файл из дирректории, далее через git add добавляем факт удаления файла
//после чего комитим изменения
//Удаление через git rm -r 'название директории'
//тоже самое с флагом --cached для удаления файла только из индекса (оставляя фатически файл)
//что бы убрать директорию из индекса но оставить ее в рабочем каталоге используем --cached

//восстановить незакомиченые удаленные файлы 
//git restore 'papka/file.cpp'

//Ветки - важная инфа
//на каком то этапе проекта решили добавить фичу, скопировали все файлы проекта в новую ветку
//тестируем фичу в ней. Если фича зашла - сливаем с основной веткой разработки, если нет - 
//удаляем ветку с фичей.

//просмотр всех веток
//git branch nazvaniyeVetki
//просмотр веток с коммитами
//git branch -v

//переключение между ветками
//git checkout 
//сразу и создание и переключение на новую ветку
//git checkout -b novayaVetv