/****************************************************************************
 *
 * Copyright 2022 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#pragma once

#include <stdint.h>
#include <stdlib.h>
#include <unistd.h>

typedef enum {
	APP_MSG,
	DRIVER_MSG,
} lwip_type_e;

typedef struct lwip_msg {
	lwip_type_e type;
	int data;
} lwip_msg_s;

void random_sleep(int variation);
