#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/image_processing.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>
#include <iostream>
#include <chrono>
#include "FaceAligner2.hpp"
#include "FeatureExtraction.cpp"

using namespace cv;
using namespace cv::face;
using namespace dlib;
using namespace std;
using namespace std::chrono;

int main(int argc, char **argv)
{
    dlib::array<array2d<rgb_pixel>> alignedImage;
    cv::Mat alignedImage2;
    frontal_face_detector detector;
    array2d<rgb_pixel> img;
    image_window window;
    image_window window_fixed;
    std::vector<rectangle> dets;

    cv::Mat imageMat;
    detector = get_frontal_face_detector();

    FaceAligner2 faceA2(40.0, 50.0, 110.0, 50.0, 150, 150, "C:/Users/danie/Programacion/5to Semestre/TC2004-FaceRecognition/FaceAlignment/build/shape_predictor_5_face_landmarks.dat"); //Especifica los valores del template (IzqX,IzqY,DerX,DerY,Width,Height)

    /*Obtenido de Executable.cpp*/
    FeatureExtraction *fe = new FeatureExtraction("C:/Users/danie/Programacion/5to Semestre/TC2004-FaceRecognition/FeatureExtraction/models/dlib_face_recognition_resnet_model_v1.dat");

    bool flag = false;
    double hits = 0;
    int misses = 0;

    return 0;
}
