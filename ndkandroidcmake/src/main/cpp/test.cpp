//
// Created by zhoubing on 2023/1/11.
//
#include <jni.h>

extern "C" jstring
Java_com_example_opencv_ndkandroidcmake_AndroidCmakeNative_getString(JNIEnv *env, jobject thiz) {
    return env->NewStringUTF("This message from Cmake");
}
