//
// Copyright © 2017 Arm Ltd. All rights reserved.
// SPDX-License-Identifier: MIT
//

#pragma once

#include <neon/workloads/NeonWorkloadUtils.hpp>

namespace armnn
{

arm_compute::Status NeonSoftmaxWorkloadValidate(const TensorInfo& input,
                                                const TensorInfo& output,
                                                const SoftmaxDescriptor& descriptor);

} //namespace armnn
