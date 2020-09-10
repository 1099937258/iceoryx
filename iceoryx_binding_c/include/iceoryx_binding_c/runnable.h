// Copyright (c) 2020 by Robert Bosch GmbH. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef IOX_BINDING_C_RUNNABLE_H
#define IOX_BINDING_C_RUNNABLE_H

#include "iceoryx_binding_c/internal/c2cpp_binding.h"

typedef struct RunnableData* runnable_t;

runnable_t iox_runnable_create(const char* const runnableName);
void iox_runnable_destroy(runnable_t const self);

uint64_t iox_runnable_get_name(runnable_t const self, char* const name, const uint64_t nameCapacity);
uint64_t iox_runnable_get_process_name(runnable_t const self, char* const name, const uint64_t nameCapacity);

#endif
