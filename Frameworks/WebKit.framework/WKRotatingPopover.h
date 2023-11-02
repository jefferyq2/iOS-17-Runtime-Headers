
@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate> {
    <WKRotatingPopoverDelegate> * _dismissionDelegate;
    bool  _isPreservingFocus;
    bool  _isRotating;
    struct RetainPtr<UIPopoverController> { 
        void *m_ptr; 
    }  _popoverController;
    struct CGPoint { 
        double x; 
        double y; 
    }  _presentationPoint;
    WKContentView * _view;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) <WKRotatingPopoverDelegate> *dismissionDelegate;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIPopoverController *popoverController;
@property (nonatomic) struct CGPoint { double x1; double x2; } presentationPoint;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKContentView *view;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissPopoverAnimated:(bool)arg1;
- (id)dismissionDelegate;
- (id)initWithView:(id)arg1;
- (unsigned long long)popoverArrowDirections;
- (id)popoverController;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)presentPopoverAnimated:(bool)arg1;
- (struct CGPoint { double x1; double x2; })presentationPoint;
- (void)setDismissionDelegate:(id)arg1;
- (void)setPopoverController:(id)arg1;
- (void)setPresentationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)view;
- (void)willRotate:(id)arg1;

@end