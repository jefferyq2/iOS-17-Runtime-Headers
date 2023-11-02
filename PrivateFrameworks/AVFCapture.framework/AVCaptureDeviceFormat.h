
@interface AVCaptureDeviceFormat : NSObject {
    AVCaptureDeviceFormatInternal * _internal;
}

@property (nonatomic, readonly) long long autoFocusSystem;
@property (nonatomic, readonly) bool cam_supportsPortraitFrontFacingZoomed;
@property (nonatomic, readonly) struct opaqueCMFormatDescription { }*formatDescription;
@property (getter=isGlobalToneMappingSupported, nonatomic, readonly) bool globalToneMappingSupported;
@property (getter=isHighPhotoQualitySupported, nonatomic, readonly) bool highPhotoQualitySupported;
@property (nonatomic, readonly) struct { int x1; int x2; } highResolutionStillImageDimensions;
@property (getter=isHighestPhotoQualitySupported, nonatomic, readonly) bool highestPhotoQualitySupported;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } maxExposureDuration;
@property (nonatomic, readonly) float maxISO;
@property (nonatomic, readonly) NSString *mediaType;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } minExposureDuration;
@property (nonatomic, readonly) float minISO;
@property (nonatomic, readonly) NSArray *secondaryNativeResolutionZoomFactors;
@property (nonatomic, readonly) NSArray *supportedColorSpaces;
@property (nonatomic, readonly) NSArray *supportedDepthDataFormats;
@property (nonatomic, readonly) NSArray *supportedMaxPhotoDimensions;
@property (nonatomic, readonly) NSArray *supportedVideoZoomFactorsForDepthDataDelivery;
@property (nonatomic, readonly) NSArray *supportedVideoZoomRangesForDepthDataDelivery;
@property (nonatomic, readonly) NSArray *unsupportedCaptureOutputClasses;
@property (getter=isVideoBinned, nonatomic, readonly) bool videoBinned;
@property (nonatomic, readonly) float videoFieldOfView;
@property (getter=isVideoHDRSupported, nonatomic, readonly) bool videoHDRSupported;
@property (nonatomic, readonly) double videoMaxZoomFactor;
@property (nonatomic, readonly) double videoMaxZoomFactorForDepthDataDelivery;
@property (nonatomic, readonly) double videoMinZoomFactorForDepthDataDelivery;
@property (getter=isVideoStabilizationSupported, nonatomic, readonly) bool videoStabilizationSupported;
@property (nonatomic, readonly) NSArray *videoSupportedFrameRateRanges;
@property (nonatomic, readonly) double videoZoomFactorUpscaleThreshold;
@property (nonatomic, readonly) bool zoomFactorsOutsideOfVideoZoomRangesForDepthDeliverySupported;

// Image: /System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture

+ (void)initialize;

- (id)AVCaptureSessionPresets;
- (void)_initializeSupportedMaxPhotoDimensions;
- (id)_stringForMediaType:(unsigned int)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 frameRateRanges:(id)arg3;
- (id)_supportedMaxPhotoDimensionsPrivateDimensionsEnabled:(bool)arg1;
- (long long)autoFocusSystem;
- (int)baseSensorPowerConsumption;
- (void)dealloc;
- (id)debugDescription;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMaxFrameDurationForSessionPreset:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })defaultActiveMinFrameDurationForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })defaultPhotoDimensionsWithHighResolutionCaptureEnabled:(bool)arg1;
- (float)defaultPortraitLightingEffectStrength;
- (float)defaultSimulatedAperture;
- (id)description;
- (id)figCaptureSourceDepthDataFormat;
- (id)figCaptureSourceVideoFormat;
- (struct opaqueCMFormatDescription { }*)formatDescription;
- (float)geometricDistortionCorrectedVideoFieldOfView;
- (float)hardwareCost;
- (struct { int x1; int x2; })highResolutionStillImageDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })highestSupportedVideoFrameDuration;
- (id)initWithFigCaptureSourceFormat:(id)arg1 fcSourceAttributes:(id)arg2;
- (unsigned int)internalDemosaicedRawPixelFormat;
- (bool)isBackgroundBlurApertureSupported;
- (bool)isBackgroundBlurSupported;
- (bool)isBackgroundBlurSupportedForContinuityCamera;
- (bool)isCameraCalibrationDataDeliverySupported;
- (bool)isCenterStageSupported;
- (bool)isCenterStageSupportedForContinuityCamera;
- (bool)isCinematicFramingSupported;
- (bool)isContentAwareDistortionCorrectionSupported;
- (bool)isContinuousZoomWithDepthEnabled;
- (bool)isContinuousZoomWithDepthSupported;
- (bool)isDCProcessingWithDepthSupported;
- (bool)isDeepFusionSupported;
- (bool)isDefaultActiveFormat;
- (bool)isDeferredPhotoProcessingSupported;
- (bool)isDemosaicedRawConfigurationWithDepthSupported;
- (bool)isDemosaicedRawSupported;
- (bool)isDigitalFlashSupported;
- (bool)isEqual:(id)arg1;
- (bool)isExperimental;
- (bool)isFastCapturePrioritizationSupported;
- (bool)isGlobalToneMappingSupported;
- (bool)isHDRSupported;
- (bool)isHighPhotoQualitySupported;
- (bool)isHighResPhotoFormat;
- (bool)isHighestPhotoQualitySupported;
- (bool)isIrisSupported;
- (bool)isIrisVideoStabilizationSupported;
- (bool)isLowLightVideoCaptureSupported;
- (bool)isManualFramingSupported;
- (bool)isMomentCaptureMovieRecordingSupported;
- (bool)isMultiCamSupported;
- (bool)isNonDestructiveCropSupported;
- (bool)isPhotoFormat;
- (bool)isPortraitAutoSuggestSupported;
- (bool)isPortraitEffectSupported;
- (bool)isPortraitEffectsMatteStillImageDeliverySupported;
- (bool)isSISSupported;
- (bool)isSemanticStyleRenderingSupported;
- (bool)isSpatialOverCaptureSupported;
- (bool)isStereoFusionSupported;
- (bool)isStillImageDepthSupported;
- (bool)isStillImageDisparitySupported;
- (bool)isStreamingDepthSupported;
- (bool)isStreamingDisparitySupported;
- (bool)isStudioLightSupported;
- (bool)isStudioLightingIntensitySupported;
- (bool)isStudioLightingSupported;
- (bool)isStudioLightingSupportedForContinuityCamera;
- (bool)isVariableFrameRateVideoCaptureSupported;
- (bool)isVideoBinned;
- (bool)isVideoGreenGhostMitigationSupported;
- (bool)isVideoHDRSupported;
- (bool)isVideoHDRSuspensionSupported;
- (bool)isVideoStabilizationModeSupported:(long long)arg1;
- (bool)isVideoStabilizationStrengthSupported:(long long)arg1;
- (bool)isVideoStabilizationSupported;
- (bool)isVisionDataDeliverySupported;
- (bool)isWideColorSupported;
- (bool)isZeroShutterLagSupported;
- (bool)isZeroShutterLagWithDepthSupported;
- (int)ispPowerConsumption;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })lowestSupportedVideoFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })maxExposureDuration;
- (float)maxISO;
- (float)maxPortraitLightingEffectStrength;
- (float)maxSimulatedAperture;
- (id)mediaType;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })minExposureDuration;
- (float)minISO;
- (float)minPortraitLightingEffectStrength;
- (float)minSimulatedAperture;
- (id)optimizedPhotoFilterNames;
- (id)optimizedVideoPreviewFilterNames;
- (bool)prefersVideoHDREnabledForSessionPreset:(id)arg1;
- (struct { int x1; int x2; })previewDimensions;
- (bool)reactionEffectsSupported;
- (bool)reactionEffectsSupportedForContinuityCamera;
- (id)secondaryNativeResolutionZoomFactors;
- (struct { int x1; int x2; })sensorDimensions;
- (void)setContinuousZoomWithDepthEnabled:(bool)arg1;
- (float)spatialOverCapturePercentage;
- (id)supportedColorSpaces;
- (unsigned int)supportedDemosaicedRawPixelFormat;
- (id)supportedDepthDataFormats;
- (id)supportedMaxPhotoDimensions;
- (id)supportedMaxPhotoDimensionsPrivate;
- (unsigned int)supportedRawPixelFormat;
- (id)supportedSemanticSegmentationMatteTypes;
- (int)supportedStabilizationMethod;
- (id)supportedVideoZoomFactorsForDepthDataDelivery;
- (id)supportedVideoZoomRangesForDepthDataDelivery;
- (id)supportedZoomRangesForCinematicVideo;
- (bool)supportsHighResolutionStillImageOutput;
- (bool)supportsQuadraHighResolutionStillImageOutput;
- (bool)supportsRedEyeReduction;
- (id)unsupportedCaptureOutputClasses;
- (bool)validateMaxPhotoDimensions:(struct { int x1; int x2; })arg1 privateDimensionsEnabled:(bool)arg2;
- (int)variableSensorPowerConsumption;
- (float)videoFieldOfView;
- (id)videoFrameRateRangeForBackgroundBlur;
- (id)videoFrameRateRangeForCenterStage;
- (id)videoFrameRateRangeForCenterStageForContinuityCamera;
- (id)videoFrameRateRangeForPortraitEffect;
- (id)videoFrameRateRangeForReactionEffectsInProgress;
- (id)videoFrameRateRangeForStudioLight;
- (id)videoFrameRateRangeForStudioLighting;
- (long long)videoHDRFlavor;
- (double)videoMaxZoomFactor;
- (double)videoMaxZoomFactorForCameraCalibrationDataDelivery;
- (double)videoMaxZoomFactorForCenterStage;
- (double)videoMaxZoomFactorForDepthDataDelivery;
- (double)videoMinZoomFactorForCameraCalibrationDataDelivery;
- (double)videoMinZoomFactorForCenterStage;
- (double)videoMinZoomFactorForDepthDataDelivery;
- (id)videoSupportedFrameRateRanges;
- (double)videoZoomFactorUpscaleThreshold;
- (id)vtScalingMode;
- (bool)zoomFactorsOutsideOfVideoZoomRangesForDepthDeliverySupported;

// Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI

- (struct { int x1; int x2; })_expectedVideoDimensionsForVideoConfiguration:(long long)arg1;
- (long long)cam_compareUsingBinning:(id)arg1;
- (long long)cam_compareUsingDimensions:(id)arg1;
- (long long)cam_compareUsingMaximumFramerate:(id)arg1;
- (long long)cam_compareUsingQuality:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })cam_frameDurationForVideoConfiguration:(long long)arg1;
- (double)cam_frameRateForVideoConfiguration:(long long)arg1;
- (double)cam_maximumFrameRate;
- (bool)cam_supportsFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (bool)cam_supportsFrameRate:(double)arg1;
- (bool)cam_supportsFrameRate:(double)arg1 width:(long long)arg2 height:(long long)arg3 colorSpace:(long long)arg4 enableProResVideo:(bool)arg5;
- (bool)cam_supportsPanoramaConfiguration:(id)arg1;
- (bool)cam_supportsPortraitFrontFacingZoomed;
- (bool)cam_supportsVideoConfiguration:(long long)arg1 colorSpace:(long long)arg2 enableProResVideo:(bool)arg3;

@end