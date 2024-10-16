/*
 * Copyright (c) 2023 Samsung Electronics Co., Ltd. All Rights Reserved
 * Copyright 2017 The TensorFlow Authors. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef LUCI_INTERPRETER_PAL_ADD_COMMON_H
#define LUCI_INTERPRETER_PAL_ADD_COMMON_H

#include "PALArithmeticOpCommon.h"

namespace luci_interpreter_pal
{

// TODO: check if there real activation value
template <typename T>
inline void Add(const ArithmeticParams &params, const int flat_size, const T *input1_data,
                const T *input2_data, T *output_data)
{
  ArithmeticOp<T, AddFn<T>>(params, flat_size, input1_data, input2_data, output_data);
}

template <typename T>
inline void
BroadcastAdd4DSlow(const ArithmeticParams &params,
                   const luci_interpreter::RuntimeShape &input1_shape, const T *input1_data,
                   const luci_interpreter::RuntimeShape &input2_shape, const T *input2_data,
                   const luci_interpreter::RuntimeShape &output_shape, T *output_data)
{
  BroadcastArithmeticOp4DSlow<T, AddFn<T>>(params, input1_shape, input1_data, input2_shape,
                                           input2_data, output_shape, output_data);
}

} // namespace luci_interpreter_pal

#endif // LUCI_INTERPRETER_PAL_ADD_COMMON_H
