package com.example.opencv.ndkandroidcmake;

public class AndroidCmakeNative {

    static {
        System.loadLibrary("Test");
    }

    public AndroidCmakeNative() {
//        getStringByCallBack();
        getStringByCallback1(this);
    }

    public native String getString();

    public native String getStringByCallBack();

    public native String getStringByCallback1(Object thiz);

    public String onProgressChange(String msg) {
        System.out.println(msg);
        return "";
    }
}
