/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class tw_edu_au_csie_ucan_bee_BeeJNI */

#ifndef _Included_tw_edu_au_csie_ucan_bee_BeeJNI
#define _Included_tw_edu_au_csie_ucan_bee_BeeJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    setup
 * Signature: (Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_setup
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    keygen
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_keygen
  (JNIEnv *, jobject, jstring, jstring, jstring, jint, jobjectArray);

/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    enc
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_enc
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    dec
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_dec
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    fenc
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_fenc
  (JNIEnv *, jobject, jstring, jstring, jstring, jstring);

/*
 * Class:     tw_edu_au_csie_ucan_bee_BeeJNI
 * Method:    fdec
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_tw_edu_au_csie_ucan_bee_BeeJNI_fdec
  (JNIEnv *, jobject, jstring, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif