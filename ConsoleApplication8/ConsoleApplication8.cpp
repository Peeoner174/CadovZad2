// ConsoleApplication2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h" //Содержит заголовочные файлы системных библиотек
#include "Windows.h" //совокупность различных библиотек ОС Windows, в неё входит API для работы с мультимедия
#pragma comment( lib, "winmm" ) //автоматически залинкует winmm.lib


int main()

{
	int sound;

	//Вторым аргументом, устанавливаются флаги, с помощью которых можно настроить дополнительные опции воспроизведения
	//В данном случае, никакой флаг не установлен
	sound = sndPlaySound(L"c:\\windows\\media\\Chimes.wav", NULL);
	if (sound == FALSE) 	printf("Error\n");

	system("pause");
	return 0;
}


