#include <iostream>
#include <string>
#include "CGnuplot.h"

using namespace std;

void wait_for_key () {
// Todos as teclas serao considedadas, inclusive as setas
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32__) || defined(__TOS_WIN__)
  std::cout << "\nPressione qualquer tecla para continuar..." << std::endl;
  FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
  _getch();
#elif defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__)
  std::cout <<  "\nPressione ENTER para continuar..." << std::endl;
  std::cin.clear();                             // Zera estado de cin
  std::cin.ignore(std::cin.rdbuf()->in_avail());// Ignora
  std::cin.get();                               // Espera o pressionamento do enter
#endif
  return;
}

double f(double x) {
  x = x + rand()%5 / 100.0; // x+  0->0.05 ;
  return 50.0 + 3.0* x - 4.0 *x*x ; // calcula y e retorna, parábola
}


int main(int argc, char* argv[])
{
	std::cout  << "\n================================================================================"
			<< "\nUSO:"
			<< "\n./cgnuplot.teste.min"
            << "\n================================================================================" << std::endl;
    if( argc > 1 ) {
        std::string terminalType = CGnuplot::Terminal();
        std::cout << "\nterminalType tinha o valor -> "<< terminalType << std::endl;
        terminalType = argv[1];
        std::cout << "\natualizando terminalType para -> "<< terminalType << std::endl;
        CGnuplot::Terminal(terminalType);
        std::cin.get();
    }
  std::cout << "-------------------------------------------------------------\n"
       << "--> Plotando graficos do gnuplot usando a classe CGnuplot <--\n"
       << "--> Exemplo de controle do gnuplot usando C++             <--\n"
       << "--> Os titulos do grafico ilustram a operacao realizada   <--\n"
       << "-------------------------------------------------------------\n" << std::endl;
      Gnuplot g2d = Gnuplot("lines"); // Construtor
      g2d.PointSize(0.8);             // Escala o tamanho do ponto usado na plotagem
      g2d.Legend("inside").Legend("left").Legend("bottom").Legend("box");
      g2d.Title("Titulo do grafico"); // Titulo do grafico
      g2d.XLabel("rotulo eixo x");    // Rotulo eixo x
      g2d.YLabel("rotulo eixo y");    // Rotulo eixo y
      g2d.XRange(-10,10);             // Seta intervalo do eixo x.
      wait_for_key();
      // Vamos enviar os valores de x e y diretamente para o gnuplot
      std::cout << "Criando EOD \n";
      g2d << "$x1_y2 << EOD \n" ;
      double y; std::string x_y;
      for (double x = -5.0; x <= 5; x+=0.1) {
        y = f(x);
        x_y = std::to_string(x) + " " + std::to_string(y) + "\n";
        std::cout << x_y;
        g2d  << x_y;
        }

      std::cout << "EOD " << std::endl;
      g2d  << "EOD " "\n";               // finaliza envio de dados
      g2d  << "plot $x1_y2 using 1:2";   // plota x * y
      wait_for_key();
  return 0;
}
