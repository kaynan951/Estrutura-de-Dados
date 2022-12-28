#include <iostream>
#include <iomanip> 

struct aluno {
   
    float nota[3];
    float media;

};

void calcula_media(aluno *a){
   
   for (int i = 0; i < 3; i++){
        
      (*a).media += (*a).nota[i];

   }

      (*a).media = (*a).media / 3;

}

int main(){

    aluno a;
    
    for (int i = 0; i < 3; i++){

        std::cin >> a.nota[i];
   
    }

   
    calcula_media(&a);

    std::cout << std::fixed;
    std::cout << std::setprecision(1) << a.media;
   
    return 0;
}