package com.example.opencv.ndkdemo;

import androidx.appcompat.app.AppCompatActivity;

import android.os.Bundle;
import android.widget.TextView;

import com.example.opencv.ndkandroidcmake.AndroidCmakeNative;
import com.example.opencv.ndkandroidmk.AndroidMkNative;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);
        TextView textView = findViewById(R.id.hello_world);
        textView.setText(new AndroidMkNative().test());
        TextView textView1 = findViewById(R.id.hello_world_1);
        textView1.setText(new AndroidCmakeNative().getString());
    }
}