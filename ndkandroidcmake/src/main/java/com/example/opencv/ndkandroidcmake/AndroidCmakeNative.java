package com.example.opencv.ndkandroidcmake;

public class AndroidCmakeNative {

    static {
        System.loadLibrary("Test");
    }

    public AndroidCmakeNative() {
        getStringByCallBack(this);
    }

    public native String getString();

    public native String getStringByCallBack(Object thiz);

    public String onProgressChange(String msg) {
        System.out.println(msg);
        return "";
    }
}
