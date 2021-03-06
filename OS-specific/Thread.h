/* This file has been prepared for Doxygen automatic documentation generation.*/
/*
 * Copyright (C) 2012 Yuriy Kulikov
 *      Universitaet Erlangen-Nuernberg
 *      LS Informationstechnik (Kommunikationselektronik)
 *      Support email: Yuriy.Kulikov.87@googlemail.com
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef THREAD_H_
#define THREAD_H_

/* Scheduler include files. */
#include "FreeRTOS.h"
#include "task.h"

/**
 * Replresents a thread of execution. Override void run() as a task body
 * (it should contain an infinite loop).
 */
class Thread {
private:
    xTaskHandle taskHandle;
public:
    Thread(const char *name, unsigned short stackDepth, char priority);
    virtual void run() =0;
};

#endif /* THREAD_H_ */
