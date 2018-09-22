#pragma once

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class ai_catboost_CatBoostJNIImpl */

#ifndef _Included_ai_catboost_CatBoostJNIImpl
#define _Included_ai_catboost_CatBoostJNIImpl
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostHashCatFeature
 * Signature: (Ljava/lang/String;[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostHashCatFeature
  (JNIEnv *, jclass, jstring, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostHashCatFeatures
 * Signature: ([Ljava/lang/String;[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostHashCatFeatures
  (JNIEnv *, jclass, jobjectArray, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostLoadModelFromFile
 * Signature: (Ljava/lang/String;[J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostLoadModelFromFile
  (JNIEnv *, jclass, jstring, jlongArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostLoadModelFromArray
 * Signature: ([B[J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostLoadModelFromArray
  (JNIEnv *, jclass, jbyteArray, jlongArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostFreeModel
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostFreeModel
  (JNIEnv *, jclass, jlong);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelGetPredictionDimension
 * Signature: (J[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelGetPredictionDimension
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelGetNumericFeatureCount
 * Signature: (J[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelGetNumericFeatureCount
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelGetCategoricalFeatureCount
 * Signature: (J[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelGetCategoricalFeatureCount
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelGetTreeCount
 * Signature: (J[I)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelGetTreeCount
  (JNIEnv *, jclass, jlong, jintArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelPredict
 * Signature: (J[F[Ljava/lang/String;[D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelPredict__J_3F_3Ljava_lang_String_2_3D
  (JNIEnv *, jclass, jlong, jfloatArray, jobjectArray, jdoubleArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelPredict
 * Signature: (J[F[I[D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelPredict__J_3F_3I_3D
  (JNIEnv *, jclass, jlong, jfloatArray, jintArray, jdoubleArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelPredict
 * Signature: (J[[F[[Ljava/lang/String;[D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelPredict__J_3_3F_3_3Ljava_lang_String_2_3D
  (JNIEnv *, jclass, jlong, jobjectArray, jobjectArray, jdoubleArray);

/*
 * Class:     ai_catboost_CatBoostJNIImpl
 * Method:    catBoostModelPredict
 * Signature: (J[[F[[I[D)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_ai_catboost_CatBoostJNIImpl_catBoostModelPredict__J_3_3F_3_3I_3D
  (JNIEnv *, jclass, jlong, jobjectArray, jobjectArray, jdoubleArray);

#ifdef __cplusplus
}
#endif
#endif
