#include <glut.h> //подключаем заголовочный файл glut.h
 
int main(int argc, char **argv) {
 
	// Инициализация GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(400,400);
	glutCreateWindow("Урок 1");
	return 1;
}