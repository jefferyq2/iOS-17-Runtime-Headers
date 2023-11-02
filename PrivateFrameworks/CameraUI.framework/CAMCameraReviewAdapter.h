
@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate> {
    NSMutableArray * __pendingAssetsForReview;
    UIViewController<CAMCameraReviewViewController> * _cachedReviewViewController;
}

@property (nonatomic, readonly) NSMutableArray *_pendingAssetsForReview;
@property (getter=_cachedReviewViewController, setter=_setCachedReviewViewController:, nonatomic, retain) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController;
@property (nonatomic, readonly) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cameraReviewViewControllerClass;
+ (id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3;
+ (id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2;
+ (id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2;

- (void).cxx_destruct;
- (id)_cachedReviewViewController;
- (id)_pendingAssetsForReview;
- (void)_setCachedReviewViewController:(id)arg1;
- (id)cameraReviewViewController;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (id)init;

@end