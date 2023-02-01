/*
* Copyright 2020 GoPro Inc.
*
* Licensed to the Apache Software Foundation (ASF) under one
* or more contributor license agreements.  See the NOTICE file
* distributed with this work for additional information
* regarding copyright ownership.  The ASF licenses this file
* to you under the Apache License, Version 2.0 (the
* "License"); you may not use this file except in compliance
* with the License.  You may obtain a copy of the License at
*
*   http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing,
* software distributed under the License is distributed on an
* "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
* KIND, either express or implied.  See the License for the
* specific language governing permissions and limitations
* under the License.
*/
#include <cmath>

#include "ngfx/porting/metal/MTLDevice.h"
#include "ngfx/core/DebugUtil.h"
using namespace ngfx;

id<MTLDevice> _ngfx_mtl_device;

void MTLDevice::create() {
    v = MTLCreateSystemDefaultDevice();
    NSCAssert(v, @"Failed to create metal device");
    _ngfx_mtl_device = v;
}

uint32_t MTLDevice::getSupportedSampleCount(uint32_t samples) {
    if (samples <= 1) 
        return 1;
    uint32_t supportedSamples = std::pow(2, std::ceil(log(samples)/log(2)));
    while (supportedSamples != 1 && [v supportsTextureSampleCount: supportedSamples] == NO) {
        if (supportedSamples != 1)
            supportedSamples >>= 1;
    }
    return supportedSamples;
}
