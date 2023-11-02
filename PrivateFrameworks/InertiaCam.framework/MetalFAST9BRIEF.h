
@interface MetalFAST9BRIEF : NSObject {
    <MTLFunction> * _boxBlurKernel;
    <MTLFunction> * _boxBlurKernel_R8;
    <MTLComputePipelineState> * _boxBlurPipelineState;
    <MTLComputePipelineState> * _boxBlurR8PipelineState;
    <MTLSamplerState> * _clampedLinearNonNormSamplerState;
    <MTLFunction> * _compactMPSBuffersKernel;
    <MTLComputePipelineState> * _compactMPSBuffersPipelineState;
    <MTLFunction> * _compute4HistogramKernel;
    <MTLFunction> * _computeHistogramKernel;
    <MTLFunction> * _cumulativeSumSimpleKernel;
    <MTLComputePipelineState> * _cumulativeSumSimplePipelineState;
    <MTLDevice> * _device;
    <MTLFunction> * _extractORBKernel;
    <MTLComputePipelineState> * _extractORBPipelineState;
    <MTLFunction> * _gaussianishBlurKernel;
    <MTLFunction> * _histogramThresholdKernel;
    <MTLComputePipelineState> * _histogramThresholdPipelineState;
    <MTLLibrary> * _library;
    <MTLFunction> * _listKeypoints2Kernel;
    <MTLComputePipelineState> * _listKeypoints2PipelineState;
    <MTLFunction> * _listKeypoints3Kernel;
    <MTLComputePipelineState> * _listKeypoints3PipelineState;
    <MTLFunction> * _listKeypointsKernel;
    <MTLComputePipelineState> * _listKeypointsPipelineState;
    <MTLFunction> * _listKeypointsSimpleKernel;
    <MTLComputePipelineState> * _listKeypointsSimplePipelineState;
    PipelineStatePromise * _pipelineStates;
    <MTLCommandQueue> * _queue;
    <MTLFunction> * _refineKeypointKernel;
    <MTLComputePipelineState> * _refineKeypointPipelineState;
    <MTLFunction> * _response4MapKernel;
    <MTLFunction> * _responseMapKernel;
    <MTLFunction> * _suppress4MapKernel;
    <MTLFunction> * _suppressMapKernel;
    struct __CVMetalTextureCache { } * _textureCache;
}

@property (readonly, retain) <MTLDevice> *device;
@property (readonly, retain) <MTLCommandQueue> *queue;

+ (id)_createMTLBufferFromRectRegionsDesiredKeypoints:(id)arg1 device:(id)arg2 storageMode:(unsigned long long)arg3 maxAllowedDescriptors:(unsigned long long*)arg4;
+ (id)_createMTLBufferFromRects:(id)arg1 device:(id)arg2 storageMode:(unsigned long long)arg3 maxRectWidth:(unsigned long long*)arg4 maxRectHeight:(unsigned long long*)arg5;

- (void).cxx_destruct;
- (void)ORBDescriptorsFromPixelBuffer_metal:(id)arg1 inputBuffer:(struct __CVBuffer { }*)arg2 descriptorBuffer:(id)arg3 refinedKeypointsBuffer:(id)arg4 responseBuffer:(id)arg5 cumulativeKeypointsPerRegionBuffer:(id)arg6 intermediateBuffers:(id)arg7;
- (void)_ORBDescriptorsFromTextures_part1_metal:(id)arg1 inputTexture_RGBA8Uint:(id)arg2 inputTexture_R8Unorm:(id)arg3 responseBuffer:(id)arg4 cumulativeKeypointsPerRegionBuffer:(id)arg5 intermediateBuffers:(id)arg6;
- (void)_ORBDescriptorsFromTextures_part2_metal:(id)arg1 inputTexture_RGBA8Uint:(id)arg2 inputTexture_R8Unorm:(id)arg3 descriptorBuffer:(id)arg4 refinedKeypointsBuffer:(id)arg5 cumulativeKeypointsPerRegionBuffer:(id)arg6 intermediateBuffers:(id)arg7 keypointCount:(int)arg8;
- (void)_boxBlur_metal:(id)arg1 inputImageTexture:(id)arg2 boxBlurredTexture:(id)arg3;
- (void)_computeResponseMap_metal:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 garbagePixelCount:(unsigned int)arg4;
- (void)_cumulativeSum_metal:(id)arg1 expectedPointsBuffer:(id)arg2 cumulativePointsBuffer:(id)arg3 regionCountBuffer:(id)arg4 keypointCountBuffer:(id)arg5 regionCount:(unsigned long long)arg6;
- (void)_extractORB_metal:(id)arg1 boxBlurredTexture:(id)arg2 keypointLocationsBuffer:(id)arg3 outputORBDescriptorBuffer:(id)arg4 keypointCountBuffer:(id)arg5 keypointCount:(unsigned long long)arg6;
- (void)_gaussianishBlur_metal:(id)arg1 inputTexture:(id)arg2 outputTexture:(id)arg3 offset:(struct CGPoint { double x1; double x2; })arg4;
- (void)_generateHistograms_metal:(id)arg1 suppressedTexture:(id)arg2 tileBuffer:(id)arg3 desiredKeypointCountsBuffer:(id)arg4 thresholdsBuffer:(id)arg5 histogramBuffer:(id)arg6 thresholdRangeBuffer:(id)arg7 keypointsAtChosenThresholdBuffer:(id)arg8 truncatedRegionsBuffer:(id)arg9 tileCount:(unsigned long long)arg10 maxTileHeight:(unsigned long long)arg11;
- (void)_listKeypoints2_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 maxRegionHeight:(double)arg10;
- (void)_listKeypoints3_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 maxRegionHeight:(double)arg10 maxRegionWidth:(double)arg11;
- (void)_listKeypointsSimple_metal:(id)arg1 suppressedResponseMapTexture:(id)arg2 tileBuffer:(id)arg3 tileCountBuffer:(id)arg4 tileCount:(unsigned long long)arg5 thresholdsBuffer:(id)arg6 cumulativePointsBuffer:(id)arg7 keypointLocationsBuffer:(id)arg8 keypointResponsesBuffer:(id)arg9 desiredKeypointsBuffer:(id)arg10 indexBuffer:(id)arg11;
- (void)_refineKeypoints_metal:(id)arg1 inputImageTexture:(id)arg2 keypointLocationsBuffer:(id)arg3 refinedLocationsBuffer:(id)arg4 keypointCountBuffer:(id)arg5 keypointCount:(unsigned long long)arg6 debugIntermediatesBuffer:(id)arg7 cumulativePointsBuffer:(id)arg8 tileCountBuffer:(id)arg9;
- (void)_suppressResponseMap_metal:(id)arg1 unsuppressedTexture:(id)arg2 suppressedTexture:(id)arg3 garbagePixelCount:(unsigned int)arg4;
- (id)_textureFromPixelBuffer:(struct __CVBuffer { }*)arg1 forcedMetalPixelFormat:(unsigned long long)arg2 forcedWidthDivisior:(int)arg3;
- (void)dealloc;
- (id)device;
- (bool)didFinishInitializationWithTimeout:(double)arg1;
- (id)init;
- (id)queue;
- (struct __CVMetalTextureCache { }*)textureCache;

@end