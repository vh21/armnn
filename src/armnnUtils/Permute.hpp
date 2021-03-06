﻿//
// Copyright © 2017 Arm Ltd. All rights reserved.
// See LICENSE file in the project root for full license information.
//
#pragma once

#include <armnn/TensorFwd.hpp>
#include <armnn/Types.hpp>

namespace armnnUtils
{

armnn::TensorShape Permuted(const armnn::TensorShape& srcShape, const armnn::PermutationVector& mappings);

armnn::TensorInfo Permuted(const armnn::TensorInfo& info, const armnn::PermutationVector& mappings);

template <typename T>
void Permute(const armnn::TensorShape& dstShape, const armnn::PermutationVector& mappings, const T* src, T* dst);

} // namespace armnnUtils