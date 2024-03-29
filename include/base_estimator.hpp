#pragma once

#include "face_inference_results.hpp"

namespace gaze_estimation {
class BaseEstimator {
public:
    void virtual estimate(const cv::Mat& image,
                          FaceInferenceResults& outputResults) = 0;
    virtual ~BaseEstimator() = default;
};
}  // namespace gaze_estimation
