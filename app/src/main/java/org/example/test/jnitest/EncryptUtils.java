package org.example.test.jnitest;

/**
 * Created by HelloCsl(cslgogogo@gmail.com) on 2015/12/13 0013.
 */
public class EncryptUtils {
    static {
        System.loadLibrary("JniTest");
    }

    public native String getKeyFromNative();

    public String getKey() {
        return getKeyFromNative();
    }
}
