#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */, jstring prompt) {
    const char* flag = env->GetStringUTFChars(prompt, JNI_FALSE);
    if (!strcmp(flag,"zstuctf{jni_1s_easy}"))return env->NewStringUTF("密码正确") ;
    return env->NewStringUTF("密码错误");
}
