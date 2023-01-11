package com.example.opencv.ndkandroidmk;

public class AndroidMkNative {
    static {
        System.loadLibrary("jni_mix");
    }

    public native String test();
}
