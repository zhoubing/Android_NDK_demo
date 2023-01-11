//
// Created by zhoubing on 2023/1/11.
//

#include <jni.h>
#include <string.h>

extern "C"
jstring Java_com_example_opencv_ndkandroidmk_AndroidMkNative_test(JNIEnv* env, jobject thiz) {
    return env->NewStringUTF("This message is from mk");
}