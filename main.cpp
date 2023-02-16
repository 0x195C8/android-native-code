#include <android/log.h>

int main(int argc, char** argv) {
    __android_log_print(ANDROID_LOG_INFO, "AndroidNative", "Hello from Android Native!\n");
    return 0;
}

