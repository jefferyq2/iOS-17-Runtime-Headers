
@interface FMFMapViewDelegateInternal : NSObject <MKMapViewDelegate, UIGestureRecognizerDelegate> {
    <FMFMapViewDelegateInternalDelegate> * _delegate;
    FMFWildcardGestureRecognizer * _gr;
    bool  _isMapCenteringDisabled;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _lastUserLocationCoordinate;
    MKMapView * _mapView;
    bool  _respondingToUserTouch;
    FMFAnnotationView * _selectedAnnotationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <FMFMapViewDelegateInternalDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) FMFWildcardGestureRecognizer *gr;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isMapCenteringDisabled;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } lastUserLocationCoordinate;
@property (nonatomic) MKMapView *mapView;
@property (nonatomic) bool respondingToUserTouch;
@property (nonatomic) FMFAnnotationView *selectedAnnotationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_moveCenterByOffset:(struct CGPoint { double x1; double x2; })arg1 from:(struct CLLocationCoordinate2D { double x1; double x2; })arg2 mapView:(id)arg3;
- (id)accuracyCircleForLocation:(id)arg1;
- (bool)canSelectAnnotation:(id)arg1;
- (id)delegate;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsetsWithMinApplied:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)endTouches;
- (id)fmfOverlayColor;
- (id)fmfOverlayColorSatellite;
- (id)gr;
- (id)initWithDelegate:(id)arg1 mapView:(id)arg2;
- (bool)isMapCenteringDisabled;
- (struct CLLocationCoordinate2D { double x1; double x2; })lastUserLocationCoordinate;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })mapRectMakeWithRadialDistanceForCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 andRadius:(double)arg2;
- (id)mapView;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(bool)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(bool)arg2;
- (bool)regionIsValid:(struct { struct CLLocationCoordinate2D { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)respondingToUserTouch;
- (void)selectAnnotation:(id)arg1;
- (id)selectedAnnotationView;
- (void)setDelegate:(id)arg1;
- (void)setGr:(id)arg1;
- (void)setIsMapCenteringDisabled:(bool)arg1;
- (void)setLastUserLocationCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setMapView:(id)arg1;
- (void)setRespondingToUserTouch:(bool)arg1;
- (void)setSelectedAnnotationView:(id)arg1;
- (void)slideAnnotation:(id)arg1 intoViewIfNeededForMapView:(id)arg2;
- (void)updateOverlaysForAnnotationMove:(id)arg1 mapView:(id)arg2;
- (void)zoomToFitAnnotationsForMapView:(id)arg1 includeMe:(bool)arg2 duration:(double)arg3;
- (void)zoomToFitLocation:(id)arg1 forMapView:(id)arg2;

@end