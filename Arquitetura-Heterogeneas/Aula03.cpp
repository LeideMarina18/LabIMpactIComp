#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream image_Input;
    image_Input.open("./images/Imagem.ppm");

    if(image_Input){
        //Header
        image_Input << "P3" << endl;
        image_Input << "3 2" << endl;
        image_Input << "255" << endl;

       // image_Input << "255 0 0 0 255 0 0 0 255" << endl;
      //  image_Input << "255 255 0 255 255 0 0 0" << endl;

        for(int ImgH = 0; ImgH < 70; ImgH++){
            for(int ImgV = 0; ImgV < 50; ImgV++){
                image_Input << "255 0 0";
            }
            image_Input << endl;
        }

    }else{
        cerr << "deu ruim" << endl;
    
    }
    image_Input.close();
    return 0;
}