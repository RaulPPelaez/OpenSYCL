/*
 * This file is part of SYCU, a SYCL implementation based CUDA/HIP
 *
 * Copyright (c) 2018 Aksel Alpay
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef SYCL_HPP
#define SYCL_HPP

#define __SYCU__


#if defined(__CUDA__)

#define SYCU_PLATFORM_CUDA
#define sycu_kernel __host__ __device__
#define sycu_device_only __device__
#define sycu_host __host__

#elif defined(__HCC__)
#define SYCU_PLATFORM_HIP
#define sycu_kernel __host__ __device__
#define sycu_device_only __device__
#define sycu_host __host__

#else

#define SYCU_PLATFORM_HOST

#define sycu_device
#define sycu_host

#endif

#include "sycl/version.hpp"
#include "sycl/types.hpp"

#include "sycl/exception.hpp"
#include "sycl/device_selector.hpp"
#include "sycl/device.hpp"
#include "sycl/platform.hpp"

#include "sycl/queue.hpp"

#include "sycl/range.hpp"
#include "sycl/id.hpp"

#endif

