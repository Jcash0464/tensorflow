/* Copyright 2015 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

// The temporary-memory-manager is a helper class for a Stream to keep track of
// temporary allocations. These allocations defer their deallocation to the next
// Stream::BlockHostUntilDone call for efficiency purposes (as deallocation
// itself generally forces synchronization to occur).

#ifndef TENSORFLOW_STREAM_EXECUTOR_TEMPORARY_MEMORY_MANAGER_H_
#define TENSORFLOW_STREAM_EXECUTOR_TEMPORARY_MEMORY_MANAGER_H_

#include "tensorflow/compiler/xla/stream_executor/temporary_memory_manager.h"

#endif  // TENSORFLOW_STREAM_EXECUTOR_TEMPORARY_MEMORY_MANAGER_H_
