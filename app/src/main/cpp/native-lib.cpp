#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_mckulipaniang_domo_MainActivity_test(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ JNI!";
    return env->NewStringUTF(hello.c_str());
}
