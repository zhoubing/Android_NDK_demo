//
// Created by zhoubing on 2023/1/11.
//
#include <jni.h>
#include "qtandroid.h"

extern "C" jstring
Java_com_example_opencv_ndkandroidcmake_AndroidCmakeNative_getString(JNIEnv *env, jobject thiz) {
    QtAndroid qtAndroid ;
    qtAndroid.Print();
    return env->NewStringUTF("This message from Cmake");
}
