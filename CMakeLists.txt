cmake_minimum_required(VERSION 3.26.3) # Проверка версии CMake.
									# Если версия установленой программы
									# старее указаной, произайдёт аварийный выход.

project(Snake_Game)					# Название проекта

set(SOURCE_EXE 
	snake_game.cpp)			# Установка переменной со списком исходников

include_directories(include)			# Расположение заголовочных файлов

add_executable(snake_game 
				${SOURCE_EXE}
				include/glut.h)	

#add_library(glut glut.h glut32.lib)

#add_subdirectory(foo)				# Добавление подпроекта, указывается имя дирректории

target_link_libraries(snake_game PUBLIC lib/glut32)		# Линковка программы с библиотекой