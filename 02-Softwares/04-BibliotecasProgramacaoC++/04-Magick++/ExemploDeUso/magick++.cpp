// Para funcionar a biblioteca tem de estar instalada no sistema
//  dnf install ImageMagick-libs ImageMagick ImageMagick-devel ImageMagick-c++-devel
// Comando para compilar este arquivo:
// c++ `Magick++-config --cxxflags --cppflags` -O2 -o demo magick++.cpp  `Magick++-config --ldflags --libs`
#include <Magick++.h> 
#include <iostream> 

using namespace std; 
using namespace Magick; 

int main(int argc,char **argv) 
{ 
  InitializeMagick(*argv);

  // Construct the image object. Seperating image construction from the 
  // the read operation ensures that a failure to read the image file 
  // doesn't render the image object useless. 
  Image image;
  try { 
    // Read a file into image object 
    image.read( "logo:" );                                  //  carrega logo a biblioteca

    // Crop the image to specified size (width, height, xOffset, yOffset)
//    image.crop( Geometry(100,100, 100, 100) );

    // Write the image to a file 
    image.write( "logoMagick.png" );
  } 
  catch( Exception &error_ ) 
    { 
      cout << "Caught exception: " << error_.what() << endl; 
      return 1; 
    } 
  return 0; 
}
