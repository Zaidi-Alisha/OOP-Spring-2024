//23K-0025 Alisha Zaidi

#include <iostream>
#include <cstdlib>
using namespace std;

class Image {
private:
    int width;
    int height;
    int* data;

public:
    
    Image(int w, int h, int* imageData) : width(w), height(h) {
        data = new int[width * height];
        for (int i = 0; i < width * height; ++i) {
            data[i] = imageData[i];
        }
    }

    
    Image(const Image& obj) : width(obj.width), height(obj.height) {
        data = new int[width * height];
        for (int i = 0; i < width * height; ++i) {
            data[i] = obj.data[i];
        }
    }

    
    ~Image() {
        delete[] data;
    }

    
    void display()  {
        for (int i = 0; i < height; ++i) {
            for (int j = 0; j < width; ++j) {
                cout << data[i * width + j] << " ";
            }
            cout << endl;
        }
    }

    
    void updateData() {
        
        
        
        for (int i = 0; i < width * height; ++i) {
            if (data[i] <= 0) {
                
                data[i] = rand() % 255 + 1;
            }
        }
    }
};

int main() {
    
    int originalData[] = { 10, -5, 20, 0, 15, -2 };

    
    Image originalImage(2, 3, originalData);

    
    Image copiedImage(originalImage);

    
    cout << "Original Image:" << endl;
    originalImage.display();
    cout << "Copied Image:" << endl;
    copiedImage.display();

    
    originalImage.updateData();
    copiedImage.updateData();

    
   cout << "Original Image after update:" << endl;
    originalImage.display();
    cout << "Copied Image after update:" << endl;
    copiedImage.display();

    return 0;
}//end main

