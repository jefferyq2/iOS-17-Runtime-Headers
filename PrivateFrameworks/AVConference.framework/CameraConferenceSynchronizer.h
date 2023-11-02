
@interface CameraConferenceSynchronizer : NSObject {
    int  cameraHasChangedToCapture;
    VCVideoRule * captureRule;
    int  didSendFirstRemoteFrameNotification;
    id /* block */  didStopNotificationBlock;
    bool  isConference720p;
    bool  isConferenceOniPad;
    struct CGSize { 
        double width; 
        double height; 
    }  localPortraitAspectRatio;
    bool  receivedFirstRemoteFrame;
    bool  receivedRequestToChangeCamera;
    id /* block */  remoteFrameNotificationBlock;
}

@property (setter=setLocalPortraitAspectRatio:, nonatomic) struct CGSize { double x1; double x2; } localPortraitAspectRatio;

- (void)cameraSizeChangedTo:(struct CGSize { double x1; double x2; })arg1;
- (void)changeCameraToCaptureSettings:(double)arg1 forced:(bool)arg2;
- (void)dealloc;
- (id)init;
- (struct CGSize { double x1; double x2; })localPortraitAspectRatio;
- (void)notifyClientOfRemoteFrame:(double)arg1;
- (void)reset;
- (void)scheduleCameraChangeToCaptureSettings:(id)arg1;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)scheduleFirstRemoteFrameNotification:(id /* block */)arg1;
- (void)setLocalPortraitAspectRatio:(struct CGSize { double x1; double x2; })arg1;
- (bool)shouldConferenceChangeCameraToCaptureSettings;
- (bool)shouldConferenceChangeCameraToPreviewSettings;
- (bool)shouldConferenceSendFirstRemoteFrameNotification;

@end