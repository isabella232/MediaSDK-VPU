// Copyright (c) 2019-2020 Intel Corporation
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.

#pragma once

#include "mfx_common.h"
#if defined(MFX_ENABLE_H265_VIDEO_ENCODE)

#include "hevcehw_base_lin.h"
#include "hevcehw_base_data.h"


namespace HEVCEHW
{
namespace KMB
{
    enum eFeatureId
    {
        FEATURE_REXT = HEVCEHW::Base::eFeatureId::NUM_FEATURES
      //  , FEATURE_CAPS
        , FEATURE_VSI_PREPROCESSOR
        , FEATURE_HDR_RESEND
        , FEATURE_ROI_MAP
        , FEATURE_IPCM
        , NUM_FEATURES
    };

    class MFXVideoENCODEH265_HW
        : public Linux::Base::MFXVideoENCODEH265_HW
    {
        using TBaseImpl = Linux::Base::MFXVideoENCODEH265_HW;
    public:
        MFXVideoENCODEH265_HW(
            VideoCORE& core
            , mfxStatus& status
            , eFeatureMode mode = eFeatureMode::INIT);
    };

} //KMB
}// namespace HEVCEHW

#endif
