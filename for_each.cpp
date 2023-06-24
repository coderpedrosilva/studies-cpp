#include <iostream>

int main () 
{
    int Anos[]{1998, 2011, 2014, 2017, 2020};

    //Exemplo 1
    for (auto Ano : Anos)
    {
        std::cout << Ano << std::endl;
    }

    //Exemplo 2
      for (auto Ano : {1998, 2011, 2014, 2017, 2020})
    {
        std::cout << Ano << std::endl;
    }
}