/*
 * Copyright 2023 Comcast Cable Communications Management, LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef _MQTTCM_LOG_H_
#define _MQTTCM_LOG_H_

#include <stddef.h>
#include <stdlib.h>
#include <stdint.h>

#if ! defined(DEVICE_EXTENDER)
#include <cimplog.h>
#endif

#define LOGGING_MODULE                     "MQTTCM"
/**
 * @brief Enables or disables debug logs.
 */
#if defined(BUILD_YOCTO) && ! defined(DEVICE_EXTENDER)

#define MqttCMError(...)                   cimplog_error(LOGGING_MODULE, __VA_ARGS__)
#define MqttCMInfo(...)                    cimplog_info(LOGGING_MODULE, __VA_ARGS__)
#define MqttCMDebug(...)                   cimplog_debug(LOGGING_MODULE, __VA_ARGS__)

#else

#define MqttCMError(...)        printf(__VA_ARGS__)
#define MqttCMInfo(...)         printf(__VA_ARGS__)
#define MqttCMDebug(...)        printf(__VA_ARGS__)

#endif


#endif /* _MQTTCM_LOG_H_ */
