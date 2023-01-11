package com.example.opencv.ndkandroidcmake;

public class AndroidCmakeNative {

    static {
        System.loadLibrary("Test");
    }

    public native String getString();
}
