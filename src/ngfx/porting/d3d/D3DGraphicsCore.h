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
#pragma once
#define NOMINMAX
#include <d3d12.h>

namespace ngfx {

#define	DEFAULT_STENCIL_READ_MASK	( 0xff )
#define	DEFAULT_STENCIL_WRITE_MASK	( 0xff )

enum PrimitiveTopology {
  PRIMITIVE_TOPOLOGY_POINT_LIST = D3D_PRIMITIVE_TOPOLOGY_POINTLIST,
  PRIMITIVE_TOPOLOGY_LINE_LIST = D3D_PRIMITIVE_TOPOLOGY_LINELIST,
  PRIMITIVE_TOPOLOGY_LINE_STRIP = D3D_PRIMITIVE_TOPOLOGY_LINESTRIP,
  PRIMITIVE_TOPOLOGY_TRIANGLE_LIST = D3D_PRIMITIVE_TOPOLOGY_TRIANGLELIST,
  PRIMITIVE_TOPOLOGY_TRIANGLE_STRIP = D3D_PRIMITIVE_TOPOLOGY_TRIANGLESTRIP
};
enum PolygonMode {
  POLYGON_MODE_FILL = D3D12_FILL_MODE_SOLID,
  POLYGON_MODE_LINE = D3D12_FILL_MODE_WIREFRAME
};
enum BlendFactor {
  BLEND_FACTOR_ZERO = D3D12_BLEND_ZERO,
  BLEND_FACTOR_ONE = D3D12_BLEND_ONE,
  BLEND_FACTOR_SRC_COLOR = D3D12_BLEND_SRC_COLOR,
  BLEND_FACTOR_ONE_MINUS_SRC_COLOR = D3D12_BLEND_INV_SRC_COLOR,
  BLEND_FACTOR_DST_COLOR = D3D12_BLEND_DEST_COLOR,
  BLEND_FACTOR_ONE_MINUS_DST_COLOR = D3D12_BLEND_INV_DEST_COLOR,
  BLEND_FACTOR_SRC_ALPHA = D3D12_BLEND_SRC_ALPHA,
  BLEND_FACTOR_ONE_MINUS_SRC_ALPHA = D3D12_BLEND_INV_SRC_ALPHA,
  BLEND_FACTOR_DST_ALPHA = D3D12_BLEND_DEST_ALPHA,
  BLEND_FACTOR_ONE_MINUS_DST_ALPHA = D3D12_BLEND_INV_DEST_ALPHA,
  BLEND_FACTOR_CONSTANT_COLOR = D3D12_BLEND_BLEND_FACTOR,
  BLEND_FACTOR_ONE_MINUS_CONSTANT_COLOR = D3D12_BLEND_INV_BLEND_FACTOR
};
enum BufferUsageFlagBits {
  BUFFER_USAGE_TRANSFER_SRC_BIT = 1,
  BUFFER_USAGE_TRANSFER_DST_BIT = 2,
  BUFFER_USAGE_UNIFORM_BUFFER_BIT = 4,
  BUFFER_USAGE_STORAGE_BUFFER_BIT = 8,
  BUFFER_USAGE_VERTEX_BUFFER_BIT = 16,
  BUFFER_USAGE_INDEX_BUFFER_BIT = 32
};
enum BlendOp {
  BLEND_OP_ADD = D3D12_BLEND_OP_ADD,
  BLEND_OP_SUBTRACT = D3D12_BLEND_OP_SUBTRACT,
  BLEND_OP_REVERSE_SUBTRACT = D3D12_BLEND_OP_REV_SUBTRACT,
  BLEND_OP_MIN = D3D12_BLEND_OP_MIN,
  BLEND_OP_MAX = D3D12_BLEND_OP_MAX
};
enum ColorComponentFlagBits {
  COLOR_COMPONENT_R_BIT = D3D12_COLOR_WRITE_ENABLE_RED,
  COLOR_COMPONENT_G_BIT = D3D12_COLOR_WRITE_ENABLE_GREEN,
  COLOR_COMPONENT_B_BIT = D3D12_COLOR_WRITE_ENABLE_BLUE,
  COLOR_COMPONENT_A_BIT = D3D12_COLOR_WRITE_ENABLE_ALPHA
};
enum CommandBufferLevel {
  COMMAND_BUFFER_LEVEL_PRIMARY = D3D12_COMMAND_LIST_TYPE_DIRECT,
  COMMAND_BUFFER_LEVEL_SECONDARY = D3D12_COMMAND_LIST_TYPE_BUNDLE
};
enum CompareOp {
    COMPARE_OP_NEVER = D3D12_COMPARISON_FUNC_NEVER,
    COMPARE_OP_LESS = D3D12_COMPARISON_FUNC_LESS,
    COMPARE_OP_EQUAL = D3D12_COMPARISON_FUNC_EQUAL,
    COMPARE_OP_LESS_EQUAL = D3D12_COMPARISON_FUNC_LESS_EQUAL,
    COMPARE_OP_GREATER = D3D12_COMPARISON_FUNC_GREATER,
    COMPARE_OP_NOT_EQUAL = D3D12_COMPARISON_FUNC_NOT_EQUAL,
    COMPARE_OP_GREATER_EQUAL = D3D12_COMPARISON_FUNC_GREATER_EQUAL,
    COMPARE_OP_ALWAYS = D3D12_COMPARISON_FUNC_ALWAYS
};
enum StencilOp {
    STENCIL_OP_KEEP = D3D12_STENCIL_OP_KEEP,
    STENCIL_OP_ZERO = D3D12_STENCIL_OP_ZERO,
    STENCIL_OP_REPLACE = D3D12_STENCIL_OP_REPLACE,
    STENCIL_OP_INCR_SAT = D3D12_STENCIL_OP_INCR_SAT,
    STENCIL_OP_DECR_SAT = D3D12_STENCIL_OP_DECR_SAT,
    STENCIL_OP_INVERT = D3D12_STENCIL_OP_INVERT,
    STENCIL_OP_INCR = D3D12_STENCIL_OP_INCR,
    STENCIL_OP_DECR = D3D12_STENCIL_OP_DECR
};
enum CullModeFlags {
  CULL_MODE_NONE = D3D12_CULL_MODE_NONE,
  CULL_MODE_FRONT_BIT = D3D12_CULL_MODE_FRONT,
  CULL_MODE_BACK_BIT = D3D12_CULL_MODE_BACK
};
enum FrontFace { FRONT_FACE_COUNTER_CLOCKWISE, FRONT_FACE_CLOCKWISE };
enum TextureType {
  TEXTURE_TYPE_2D = D3D12_SRV_DIMENSION_TEXTURE2D,
  TEXTURE_TYPE_3D = D3D12_SRV_DIMENSION_TEXTURE3D,
  TEXTURE_TYPE_CUBE = D3D12_SRV_DIMENSION_TEXTURECUBE,
  TEXTURE_TYPE_2D_ARRAY = D3D12_SRV_DIMENSION_TEXTURE2DARRAY
};
enum ImageUsageFlagBits {
  IMAGE_USAGE_TRANSFER_SRC_BIT = 1,
  IMAGE_USAGE_TRANSFER_DST_BIT = 2,
  IMAGE_USAGE_SAMPLED_BIT = 4,
  IMAGE_USAGE_STORAGE_BIT = 8,
  IMAGE_USAGE_COLOR_ATTACHMENT_BIT = 16,
  IMAGE_USAGE_DEPTH_STENCIL_ATTACHMENT_BIT = 32,
  IMAGE_USAGE_TRANSIENT_ATTACHMENT_BIT = 64,
  IMAGE_USAGE_INPUT_ATTACHMENT_BIT = 128,
};
enum PipelineStageFlagBits { PIPELINE_STAGE_COLOR_ATTACHMENT_OUTPUT_BIT };
enum ShaderStageFlagBits {
  SHADER_STAGE_VERTEX_BIT = 1,
  SHADER_STAGE_TESSELLATION_CONTROL_BIT = 2,
  SHADER_STAGE_TESSELLATION_EVALUATION_BIT = 4,
  SHADER_STAGE_GEOMETRY_BIT = 8,
  SHADER_STAGE_FRAGMENT_BIT = 16,
  SHADER_STAGE_COMPUTE_BIT = 32,
  SHADER_STAGE_ALL_GRAPHICS = 64,
  SHADER_STAGE_ALL = 0xFF
};
#define DEFINE_PIXELFORMATS(s, t0, t1)                                         \
  PIXELFORMAT_R##s##_##t0 = DXGI_FORMAT_R##s##_##t1,                           \
  PIXELFORMAT_RG##s##_##t0 = DXGI_FORMAT_R##s##G##s##_##t1,                    \
  PIXELFORMAT_RGBA##s##_##t0 = DXGI_FORMAT_R##s##G##s##B##s##A##s##_##t1

enum PixelFormat {
  PIXELFORMAT_UNDEFINED = DXGI_FORMAT_UNKNOWN,
  DEFINE_PIXELFORMATS(8, UNORM, UNORM),
  DEFINE_PIXELFORMATS(16, UINT, UINT),
  DEFINE_PIXELFORMATS(16, SFLOAT, FLOAT),
  DEFINE_PIXELFORMATS(32, UINT, UINT),
  DEFINE_PIXELFORMATS(32, SFLOAT, FLOAT),
  PIXELFORMAT_BGRA8_UNORM = DXGI_FORMAT_B8G8R8A8_UNORM,
  PIXELFORMAT_D16_UNORM = DXGI_FORMAT_D16_UNORM,
  PIXELFORMAT_D24_UNORM = DXGI_FORMAT_D24_UNORM_S8_UINT,
  PIXELFORMAT_D24_UNORM_S8 = DXGI_FORMAT_D24_UNORM_S8_UINT,
  PIXELFORMAT_D32_FLOAT_S8 = DXGI_FORMAT_D32_FLOAT_S8X24_UINT
};

enum IndexFormat {
  INDEXFORMAT_UINT16 = DXGI_FORMAT_R16_UINT,
  INDEXFORMAT_UINT32 = DXGI_FORMAT_R32_UINT
};

#define DEFINE_VERTEXFORMATS(s, t0, t1)                                        \
  VERTEXFORMAT_##t0 = DXGI_FORMAT_R##s##_##t1,                                 \
  VERTEXFORMAT_##t0##2 = DXGI_FORMAT_R##s##G##s##_##t1,                        \
  VERTEXFORMAT_##t0##3 = DXGI_FORMAT_R##s##G##s##B##s##_##t1,                  \
  VERTEXFORMAT_##t0##4 = DXGI_FORMAT_R##s##G##s##B##s##A##s##_##t1

enum VertexFormat { DEFINE_VERTEXFORMATS(32, FLOAT, FLOAT) };

enum DescriptorType {
  DESCRIPTOR_TYPE_COMBINED_IMAGE_SAMPLER,
  DESCRIPTOR_TYPE_STORAGE_IMAGE,
  DESCRIPTOR_TYPE_UNIFORM_BUFFER,
  DESCRIPTOR_TYPE_STORAGE_BUFFER
};
enum VertexInputRate {
  VERTEX_INPUT_RATE_VERTEX = D3D12_INPUT_CLASSIFICATION_PER_VERTEX_DATA,
  VERTEX_INPUT_RATE_INSTANCE = D3D12_INPUT_CLASSIFICATION_PER_INSTANCE_DATA
};

enum FilterMode { FILTER_NEAREST, FILTER_LINEAR };

enum ImageLayout {
  IMAGE_LAYOUT_UNDEFINED,
  IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL,
  IMAGE_LAYOUT_DEPTH_STENCIL_ATTACHMENT_OPTIMAL,
  IMAGE_LAYOUT_SHADER_READ_ONLY_OPTIMAL,
  IMAGE_LAYOUT_GENERAL,
  IMAGE_LAYOUT_PRESENT_SRC
};
} // namespace ngfx