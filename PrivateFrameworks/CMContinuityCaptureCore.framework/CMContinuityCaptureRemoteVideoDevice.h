
@interface CMContinuityCaptureRemoteVideoDevice : CMContinuityCaptureDeviceBase <AVCStreamInputDelegate, AVCVideoStreamDelegate, AVCapturePhotoCaptureDelegate, AVCaptureVideoDataOutputSampleBufferDelegate> {
    AVCStreamInput * _avcStreamInput;
    bool  _avcStreamInputActive;
    AVCVideoStream * _avcVideoStream;
    NSUUID * _cameraCaptureStreamSessionID;
    CMContinuityCaptureAVCaptureVideoSession * _captureSession;
    bool  _captureStackActive;
    NSMutableDictionary * _cmControlByName;
    NSMutableDictionary * _cmControlByNameWithPendingUpdates;
    CMContinuityCaptureRemoteVideoDevice * _companionDevice;
    NSArray * _connections;
    DKNotificationAgent * _dockKitNotificationAgent;
    bool  _dockedTrackingSupported;
    bool  _gazeSelectionEnabled;
    bool  _isUltraWideCameraSupported;
    bool  _manualFramingFeatureFlagEnabled;
    AVCaptureMetadataOutput * _metadataOutput;
    AVCapturePhotoOutput * _photoOutput;
    NSMutableDictionary * _photoRequests;
    bool  _propagateCaptureSessionRestartedAttachment;
    bool  _shouldRestoreCenterStageOnWideCamera;
    id /* block */  _stopCompletionBlock;
    <ContinuityCaptureTransportDevice> * _transportDevice;
    unsigned long long  _videoBufferDropCounter;
    AVCaptureConnection * _videoDataConnection;
    AVCaptureDeviceInput * _videoDataInput;
    AVCaptureVideoDataOutput * _videoDataOutput;
    AVCaptureDevice * _videoDevice;
    bool  _videoDeviceKVOsActive;
}

@property (readonly, retain) CMContinuityCaptureAVCaptureVideoSession *captureSession;
@property bool centerStageEnabled;
@property long long centerStageFramingMode;
@property (retain) NSDictionary *centerStageRectOfInterest;
@property CMContinuityCaptureRemoteVideoDevice *companionDevice;
@property (retain) NSArray *connections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property long long deskViewCameraMode;
@property (getter=isDockedTrackingEnabled) bool dockedTrackingEnabled;
@property bool faceDrivenAFActive;
@property (retain) AVCaptureDeviceFormat *format;
@property (getter=isGazeSelectionEnabled, readonly) bool gazeSelectionEnabled;
@property (readonly) unsigned long long hash;
@property unsigned int maxFrameRate;
@property unsigned int minFrameRate;
@property bool portraitEffect;
@property bool reactionEffects;
@property bool shouldRestoreCenterStageOnWideCamera;
@property (getter=isStreamingOnSuperWide, readonly) bool streamingOnSuperWide;
@property bool studioLighting;
@property (readonly) Class superclass;
@property (retain) AVCaptureConnection *videoDataConnection;
@property (retain) AVCaptureDeviceInput *videoDataInput;
@property (retain) AVCaptureVideoDataOutput *videoDataOutput;
@property (retain) AVCaptureDevice *videoDevice;
@property double videoZoomFactor;

- (void).cxx_destruct;
- (id)_avfDeviceTypeForManualFramingDeviceType:(long long)arg1;
- (bool)_companionConnectionsRequired;
- (void)_configureVideoEffects;
- (bool)_deviceFormat:(id)arg1 isCompatibleWithConfiguration:(id)arg2 requiringMultiCamSupport:(bool)arg3 minFrameRate:(unsigned int)arg4 maxFrameRate:(unsigned int)arg5;
- (void)_disableCenterStage;
- (void)_disableManualFraming;
- (void)_enableCenterStage;
- (void)_enableManualFraming;
- (void)_forcefullyEnableCenterStageOnSuperWide;
- (bool)_isUltraWideCameraSupported;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)_registerDockKitNotification;
- (void)_restoreStatesAfterForcefulCenterStageEnablementAndShouldReconfigureCaptureStack:(bool)arg1;
- (id)_selectVideoDeviceForConfiguration:(id)arg1;
- (bool)_shouldOnlyDisableVideoConnection;
- (bool)_shouldPrintDroppedSampleBufferLog:(long long)arg1;
- (void)_stopCameraCaptureStackRemoveCaptureSessionConnectionsWithOption:(unsigned long long)arg1;
- (void)_toggleBetweenCenterStageAndManualFraming;
- (void)_updateControlStatus;
- (void)_updateManualFramingDeviceType:(long long)arg1;
- (void)_updatePhotoOutputConfigs;
- (void)addVideoDeviceKVOs;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishCaptureForResolvedSettings:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didFinishProcessingPhoto:(id)arg2 error:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 fromConnection:(id)arg3;
- (id)captureSession;
- (void)captureStillImage:(id)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (bool)centerStageEnabled;
- (long long)centerStageFramingMode;
- (id)centerStageRectOfInterest;
- (id)companionDevice;
- (id)compatibleDeviceFormatForMaxFrameRate:(unsigned int)arg1 minFrameRate:(unsigned int)arg2;
- (bool)configureConnections;
- (id)connections;
- (id)connectionsForConfiguration:(id)arg1;
- (id)controls;
- (id)createAVCVideoStream;
- (long long)deskViewCameraMode;
- (void)didStartStreamInput:(id)arg1;
- (void)didStopStreamInput:(id)arg1;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { }*)arg1 entity:(long long)arg2 completion:(id /* block */)arg3;
- (void)enqueueReactionEffect:(id)arg1 entity:(long long)arg2;
- (bool)faceDrivenAFActive;
- (id)format;
- (id)initWithCapabilities:(id)arg1 compositeDelegate:(id)arg2 captureSession:(id)arg3;
- (bool)isDockedTrackingEnabled;
- (bool)isGazeSelectionEnabled;
- (bool)isStreamingOnSuperWide;
- (unsigned int)maxFrameRate;
- (unsigned int)minFrameRate;
- (id)newVideoStreamCurrentConfiguration:(long long)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (bool)portraitEffect;
- (float)portraitEffectAperture;
- (void)postAVCStreamInterruption;
- (void)postActionCompletionForEventName:(id)arg1 eventData:(id)arg2 error:(id)arg3;
- (void)postActionOfType:(unsigned long long)arg1 forEvent:(id)arg2 option:(unsigned long long)arg3;
- (float)reactionEffectGesturesEnabled;
- (bool)reactionEffects;
- (void)removeVideoDeviceKVOs;
- (void)serverDidDie;
- (void)setCenterStageEnabled:(bool)arg1;
- (void)setCenterStageFramingMode:(long long)arg1;
- (void)setCenterStageRectOfInterest:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (void)setConnections:(id)arg1;
- (void)setDeskViewCameraMode:(long long)arg1;
- (void)setDockedTrackingEnabled:(bool)arg1;
- (void)setFaceDrivenAFActive:(bool)arg1;
- (void)setFormat:(id)arg1;
- (void)setMaxFrameRate:(unsigned int)arg1;
- (void)setMinFrameDurationOverrideIfApplicable;
- (void)setMinFrameRate:(unsigned int)arg1;
- (void)setPortraitEffect:(bool)arg1;
- (void)setPortraitEffectAperture:(float)arg1;
- (void)setReactionEffectGesturesEnabled:(float)arg1;
- (void)setReactionEffects:(bool)arg1;
- (void)setShouldRestoreCenterStageOnWideCamera:(bool)arg1;
- (void)setStudioLighting:(bool)arg1;
- (void)setStudioLightingIntensity:(float)arg1;
- (void)setValueForControl:(id)arg1 completion:(id /* block */)arg2;
- (void)setVideoDataConnection:(id)arg1;
- (void)setVideoDataInput:(id)arg1;
- (void)setVideoDataOutput:(id)arg1;
- (void)setVideoDevice:(id)arg1;
- (void)setVideoZoomFactor:(double)arg1;
- (void)setupControls;
- (bool)shouldRestoreCenterStageOnWideCamera;
- (bool)startAVConferenceStack:(unsigned long long)arg1;
- (bool)startCameraCaptureStack:(unsigned long long)arg1;
- (bool)stopAVConferenceStack;
- (bool)stopCameraCaptureStack:(unsigned long long)arg1;
- (void)stopCaptureStack:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)stream:(id)arg1 didStart:(bool)arg2 error:(id)arg3;
- (void)streamDidRTCPTimeOut:(id)arg1;
- (void)streamDidRTPTimeOut:(id)arg1;
- (void)streamDidServerDie:(id)arg1;
- (void)streamDidStop:(id)arg1;
- (bool)studioLighting;
- (float)studioLightingIntensity;
- (void)tearDownConnectionsWithVideoDataConnectionDisabled:(bool)arg1;
- (void)terminateComplete:(id /* block */)arg1;
- (unsigned int)throttledMaxFrameRate;
- (void)updateControlStatus;
- (id)videoDataConnection;
- (id)videoDataInput;
- (id)videoDataOutput;
- (id)videoDevice;
- (double)videoZoomFactor;

@end