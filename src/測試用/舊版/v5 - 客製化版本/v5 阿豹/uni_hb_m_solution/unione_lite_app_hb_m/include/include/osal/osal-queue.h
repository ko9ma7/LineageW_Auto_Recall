/*
 * Copyright 2019 Unisound AI Technology Co., Ltd.
 * Author: Hao Peng
 * All Rights Reserved.
 */

#ifndef OSAL_OSAL_QUEUE_H_
#define OSAL_OSAL_QUEUE_H_

#include "osal/osal-mutex.h"
#include "osal/osal-types.h"

#if defined(_WIN32) || defined(_WIN64)
#define _WINDOWS
#endif

#ifndef _WINDOWS
#ifdef OSAL_API_HIDDEN
#define OSAL_EXPORT __attribute__((visibility("hidden")))
#else
#define OSAL_EXPORT __attribute__((visibility("default")))
#endif

#else
#ifdef DLL_EXPORT
#define OSAL_EXPORT __declspec(dllexport)
#else
#define OSAL_EXPORT __declspec(dllimport)
#endif
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* 队列满 */
#define OSAL_QUEUE_FULL 1

/* queue */
typedef struct OsalQueue {
  void** data;
  int32_t head;
  int32_t tail;
  int32_t capacity;
  OsalMutexHandle mutex;
} OsalQueue;

/*
 * @Description: 创建队列
 * @Input params: capacity：队列节点数
 * @Output params:
 * @Return: 成功：队列实例
 *          失败：NULL
 */
OSAL_EXPORT OsalQueue* OsalQueueCreate(int32_t capacity);

/*
 * @Description: 销毁队列
 * @Input params: queue：队列
 * @Output params:
 * @Return:
 */
OSAL_EXPORT void OsalQueueDestroy(OsalQueue* queue);

/*
 * @Description: 获取队列大小
 * @Input params: queue：队列
 * @Output params:
 * @Return: 成功：size 大小
 *          失败：OSAL_FAILED
 */
OSAL_EXPORT int32_t OsalQueueSize(OsalQueue* queue);

/*
 * @Description: 判断队列是否满
 * @Input params: queue: 队列
 * @Output params:
 * @Return: 满：OSAL_QUEUE_FULL
 *          未满：其他
 */
OSAL_EXPORT int32_t OsalQueueIsFull(OsalQueue* queue);

/*
 * @Description: 入队
 * @Input params: queue：队列
 *                data：数据
 * @Output params:
 * @Return: 成功：OSAL_OK
 *          失败：OSAL_FAILED
 */
OSAL_EXPORT int32_t OsalQueuePush(OsalQueue* queue, void* data);

/*
 * @Description: 出队
 * @Input params: queue：队列
 * @Output params:
 * @Return: 成功：队列数据
 *          失败：NULL
 */
OSAL_EXPORT void* OsalQueuePop(OsalQueue* queue);

#ifdef __cplusplus
}
#endif

#endif  // OSAL_OSAL_QUEUE_H_
