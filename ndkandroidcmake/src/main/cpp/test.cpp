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

extern "C" jstring
Java_com_example_opencv_ndkandroidcmake_AndroidCmakeNative_getStringByCallBack(JNIEnv *env, jobject thiz) {
    jclass javaClass = env->FindClass("com/example/opencv/ndkandroidcmake/AndroidCmakeNative");
    jmethodID  javaCallback = env->GetMethodID(javaClass, "onProgressChange", "(Ljava/lang/String;)Ljava/lang/String;");
    env->CallObjectMethod(thiz, javaCallback, env->NewStringUTF("msg from Jni!!!"));
    return env->NewStringUTF("This message from Cmake Callback");
}

extern "C"
JNIEXPORT jstring JNICALL
Java_com_example_opencv_ndkandroidcmake_AndroidCmakeNative_getStringByCallback1(JNIEnv *env,
                                                                                jobject thiz,
                                                                                jobject callback) {
    jclass javaClass = env->GetObjectClass(callback);
    //获取要回调的方法ID
    jmethodID javaCallbackId = env->GetMethodID(javaClass, "onProgressChange", "(Ljava/lang/String;)Ljava/lang/String;");
    env->CallObjectMethod(callback, javaCallbackId, env->NewStringUTF("msg from Jni$$%%$$%$%$%$%"));
    return env->NewStringUTF("This message from Cmake");
}