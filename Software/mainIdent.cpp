//Librerias
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>
#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>
#include <iostream>
#include "FaceAligner2.hpp"
#include "FaceDetector.h"
#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <dlib/opencv.h>

using namespace dlib;
using namespace std;
using namespace cv;

void nextFrame(Mat frame);

static dlib::rectangle openCVRectToDlib(cv::Rect r)
{
    return dlib::rectangle((long)r.tl().x, (long)r.tl().y, (long)r.br().x - 1, (long)r.br().y - 1);
}

int main(int argc, char **argv)
{

    dlib::array<array2d<rgb_pixel>> alignedImage;
    cv::Mat alignedImage2;
    frontal_face_detector detector;
    array2d<rgb_pixel> img;
    image_window window;
    image_window window_fixed;
    std::vector<dlib::rectangle> dets;

    string face_cascade_name = "D:/OpenCV/opencv/user_build/install/etc/haarcascades/haarcascade_frontalface_alt.xml";
    string window_name = "Deteccion Facial";
    int next_height = 40;
    cv::Mat imageMat;
    FaceAligner2 faceA2(40.0, 50.0, 110.0, 50.0, 150, 150, "C:/Users/Juan Fco/Desktop/Programacion/Quinto Semestre/Algoritmos/Github Sistemas/TC2004-FaceRecognition/FaceAlignment/build/shape_predictor_5_face_landmarks.dat"); //Especifica los valores del template (IzqX,IzqY,DerX,DerY,Width,Height)

    VideoCapture capture;
    Mat frame;
    std::vector<cv::Rect> deets;
    int i = 0;
    //instanciar a la clase
    FaceDetector Detect(face_cascade_name, next_height, 1.1, 4, 0);

    //Se asigna video en vivo a captura
    capture = VideoCapture(0);

    //@ Si existe captura...
    if (capture.isOpened())
    {
        while (true)
        {
            capture >> frame;
            //@ Si la matriz no se encuentra vacia...
            if (!frame.empty())
            {
                //funcion de detectar
                deets = Detect.nextFrame(frame);
                for (int k = 0; k < deets.size(); k++)
                {
                    dets.push_back(openCVRectToDlib(deets.at(k)));
                }
                if (dets.size() > 0)
                {
                    //Llamada al método align
                    alignedImage2 = faceA2.alignCV(imageMat, dets[0]);

                    cout << "Image : " << i << endl;
                    cv::imwrite("Output/faceAligned" + to_string(i) + ".jpg", alignedImage2);
                    load_image(img, "Output/faceAligned" + to_string(i) + ".jpg");
                    dets = detector(img);
                    imageMat = cv::imread("Output/faceAligned" + to_string(i) + ".jpg");
                    i++;
                }
                else
                {
                    cout << "No face detected" << endl;
                }
            }
            else
            {
                //La matriz esta vacia, marcar error
                printf("Error: No existe un frame capturado");
                break;
            }
        }
    }
}