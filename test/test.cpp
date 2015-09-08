/**
** @file test.cpp
** @brief  Test app
** @author Vikas MK
** @version 1.3
** @date 2015-08-07
**/

/*Revision history*/
/*1.0 : Created */
/*1.1 : Added Image class and methods. Compiles, doesnt' work */
/*1.2 : Compiles and displays test images. Histogram part is buggy*/
/*1.3 : calculates and displays Histograms correctly*/
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include<iostream>

#include "../lib/Image.hpp"
using namespace std;
using namespace cv;



#define NO_IMAGES 10

/*Open all files in a given path*/
int main()
{
    vector <Image> vImages;

    Mat svmTrainingData;
    int svmlabels;
    /*Read images from files and add it into a vector*/
    /*Coconut tree images*/
    for(int fileNumber=1; fileNumber <= NO_IMAGES ; fileNumber++)
    {
        Mat img_raw;
        stringstream ss;
        string FileName;
        ss << "../training_images/coco_images/coco" <<fileNumber<<".jpg"<<endl;
        ss >> FileName;
        cout << FileName<< endl ;
        img_raw = cv::imread(FileName,1);
        Image I(img_raw);
        cout << "row*col" << I.g_hist.rows * I.g_hist.cols << endl;
        cout <<"total row * col * 3 " <<I.rawHistData.rows * I.rawHistData.cols << endl;
        I.FileName = FileName;
        I.label = COCONUT;
        vImages.push_back(I);


    }








}
