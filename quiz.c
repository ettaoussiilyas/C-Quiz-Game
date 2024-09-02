#include<stdio.h>

int main(){

    int result , answer,i,j;
        char *questions[10] = {
        "What is the capital of France?",
        "Who wrote the book 'To Kill a Mockingbird'?",
        "What is the largest planet in our solar system?",
        "What is the smallest planet in our solar system?",
        "Who invented the telephone?",
        "What is the name of the first woman to climb Mount Everest?",
        "Who was the first person to walk on the moon?",
        "What is the name of the first person to step on Mars?",
        "Who was the first person to walk on the Moon and back again?",
        "Who is the current Prime Minister of the United Kingdom?"
    };
    char *options[10][4] = {
    {"Paris01", "London", "Rabat", "Rome"},
    {"Harper Lee01", "Adam", "Roger", "Sif"},
    {"Jupiter01", "Mars", "Earth", "Venus"},
    {"Mercury01", "Mars", "Earth", "Venus"},
    {"Alexander Graham Bell01", "Thomas Edison", "Nikola Tesla", "Guglielmo Marconi"},
    {"Junko Tabei01", "Edmund Hillary", "Tenzing Norgay", "Reinhold Messner"},
    {"Neil Armstrong01", "Buzz Aldrin", "Yuri Gagarin", "Alan Shepard"},
    {"No one has stepped on Mars01", "Elon Musk", "Neil Armstrong", "Buzz Aldrin"},
    {"Neil Armstrong01", "Buzz Aldrin", "Michael Collins", "Yuri Gagarin"},
    {"Rishi Sunak01", "Boris Johnson", "Theresa May", "David Cameron"}
    };
    
    return 0;
}

