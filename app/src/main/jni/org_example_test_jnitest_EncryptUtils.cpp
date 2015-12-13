//
// Created by HelloCsl(cslgogogo@gmail.com) on 2015/12/13 0013.
//

#include "org_example_test_jnitest_EncryptUtils.h"

extern "C" {
/*
 * Class:     org_example_test_jnitest_EncryptUtils
 * Method:    getKeyFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring
JNICALL Java_org_example_test_jnitest_EncryptUtils_getKeyFromNative
        (JNIEnv *env, jobject jc) {

    return env->NewStringUTF((const char *) "Hello From JNI!");
}
}

