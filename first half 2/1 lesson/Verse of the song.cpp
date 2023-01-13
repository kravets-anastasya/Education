/*Вывести на экран один куплет любимого стихотворения
или песни, с указанием автора или исполнителя. Используйте
escape-последовательности для форматирования.*/
#include <iostream>

using namespace std;

int main(){

	cout << "\t\tSong from Winx \"Drive your Fear\"!" << endl << endl;

	cout << "\t\t" R"(Drive away your fear
		I'm here with you
		Your angel will bring peace to your soul again
		Feel the gentle breeze
		Hear the whisper quiet
		Believe me
		You're with me
		
		Just call me and I'll answer you
		And soon you will return the dreams
		And a bright day will drive all the darkness out the door
		You're not alone believe me)" << endl;

	/*	Песня от Winx "Гони свой страх"
	
		Гони свой страх
		Я здесь с тобой
		Твой ангел душе вернет вновь покой
		Почувствуй бриз нежный
		Услышь шепот тихий
		Поверь
		Ты со мной
		
		Лишь позови и я тебе отвечу
		И скоро ты вернешь мечты
		И светлый день прогонит всю тьму за дверь
		Ты не один поверь*/

	return 0;	
}