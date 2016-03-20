# Mandelbrot
Простое приложение для рисования [множества Мандельброта](https://ru.wikipedia.org/wiki/%D0%9C%D0%BD%D0%BE%D0%B6%D0%B5%D1%81%D1%82%D0%B2%D0%BE_%D0%9C%D0%B0%D0%BD%D0%B4%D0%B5%D0%BB%D1%8C%D0%B1%D1%80%D0%BE%D1%82%D0%B0) с использованием библиотеки [CImg](http://cimg.eu/).


При запуске можно указать следующие параметры:

* `-s <width> <height>` - размер изображения
* `-pal <power>` - цветовая палитра (степень многочлена преобразования цвета, целое число)
* `-f <name_of_file>` - название выходного файла
* `-bar` - включение прогресс-бара
* `-b <x1> <x2> <y1> <y2>` - границы участка множества
* `-i <MAX_ITER>` - количество итераций, необходимое для определения принадлежности точки множеству Мандельброта

Результатом работы программы является png-файл с изображением выбранного участка множества.

![Travis status](https://travis-ci.org/DmitryLyukov/Mandelbrot.svg)