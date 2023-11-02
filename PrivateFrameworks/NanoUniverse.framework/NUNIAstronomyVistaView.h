
@interface NUNIAstronomyVistaView : UIView <CLKUIQuadViewDelegate, NUNISceneObserver> {
    NUNIAstronomyVistaConfiguration * _configuration;
    CALayer * _contentMaskLayer;
    CLKDevice * _device;
    long long  _frameInterval;
    unsigned int  _isAnimating;
    unsigned int  _isDisplayOn;
    unsigned int  _isSupplemental;
    <NUNIAstronomyVistaViewObserver> * _observer;
    CAPortalLayer * _portalLayer;
    unsigned long long  _preferredCarouselLighting;
    NUNIQuad * _quad;
    CLKUIQuadView * _quadView0;
    UIView * _quadView1;
    NSArray * _quadViews;
    NUNIRenderer * _renderer;
    NUNIScene * _scene;
    float  _supplementalBottomInset;
    float  _supplementalHorizontalInset;
    float  _supplementalSpheroidSize;
    float  _supplementalTopInset;
    unsigned long long  _transitionStyle;
    unsigned long long  _vista;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CLKDevice *device;
@property (nonatomic) long long frameInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) <NUNIAstronomyVistaViewObserver> *observer;
@property (nonatomic, readonly) NSArray *quadViews;
@property (nonatomic, retain) NUNIScene *scene;
@property (readonly) Class superclass;
@property (nonatomic) float supplementalBottomInset;
@property (nonatomic) float supplementalHorizontalInset;
@property (nonatomic) float supplementalSpheroidSize;
@property (nonatomic) float supplementalTopInset;

- (void).cxx_destruct;
- (id)_mtlQuadView;
- (id)_panAnimationArrayFromSceneDescription:(id)arg1 toSceneDescription:(id)arg2;
- (void)_startAnimation;
- (void)_stopAnimation;
- (void)_updateAnimation;
- (id)_zoomAnimationArrayFromSceneDescription:(id)arg1 toSceneDescription:(id)arg2;
- (void)applyVista:(unsigned long long)arg1 transitionStyle:(unsigned long long)arg2;
- (void)astronomySceneAnimationFinished:(id)arg1;
- (float)computeDimming;
- (id)contentMaskLayer;
- (void)dealloc;
- (id)device;
- (void)disableCloudDataFetch:(bool)arg1;
- (void)discardContents;
- (long long)frameInterval;
- (id)generateAnimationArrayFromSceneDescription:(id)arg1 toSceneDescription:(id)arg2 transitionStyle:(unsigned long long)arg3;
- (id)generateAnimationArrayFromVista:(unsigned long long)arg1 fromSceneBlock:(id /* block */)arg2 toVista:(unsigned long long)arg3 toSceneBlock:(id /* block */)arg4 transitionStyle:(unsigned long long)arg5;
- (id)generateAnimationArrayFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2 transitionStyle:(unsigned long long)arg3;
- (void)handleBacklightDidTurnOn;
- (void)handleBacklightWillTurnOff;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (id)observer;
- (void)purgeUnused;
- (void)quadViewWillDisplay:(id)arg1 forTime:(double)arg2;
- (id)quadViews;
- (void)removeBackBuffers;
- (void)renderSynchronouslyWithImageQueueDiscard:(bool)arg1 inGroup:(id)arg2;
- (id)rotatable:(unsigned long long)arg1;
- (id)scene;
- (void)setAPLFilterAmount:(double)arg1;
- (void)setCacheDirectory:(id)arg1;
- (void)setFrameInterval:(long long)arg1;
- (void)setObserver:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setScene:(id)arg1;
- (void)setSupplementalBottomInset:(float)arg1;
- (void)setSupplementalHorizontalInset:(float)arg1;
- (void)setSupplementalSpheroidSize:(float)arg1;
- (void)setSupplementalTopInset:(float)arg1;
- (void)setTritiumBrightness:(double)arg1;
- (void)showSupplemental:(bool)arg1 animated:(bool)arg2;
- (id)snapshotImage;
- (id)spheroidAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)startAnimation;
- (void)stopAnimation;
- (float)supplementalBottomInset;
- (float)supplementalHorizontalInset;
- (float)supplementalSpheroidSize;
- (float)supplementalTopInset;
- (void)updateLightingPreference:(bool)arg1;
- (void)updatePortalLayerBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateSunLocationAnimated:(bool)arg1;
- (void)updateSunLocationAnimated:(bool)arg1 adjustEarthRotation:(bool)arg2;

@end