
@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate> {
    NSString * _displayTitle;
    NSArray * _modelObjects;
    _UIArrayController<_UIDocumentPickerDirectoryObserver> * _observer;
    NSArray * _pickableTypes;
    unsigned long long  _pickerMode;
    NSOperationQueue * _presentedItemOperationQueue;
    double  _startObservingTime;
    NSURL * _url;
    id  _urlObserver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *displayTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *modelObjects;
@property (nonatomic, retain) _UIArrayController<_UIDocumentPickerDirectoryObserver> *observer;
@property (nonatomic, copy) NSArray *pickableTypes;
@property (nonatomic) unsigned long long pickerMode;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;
@property (nonatomic, retain) id urlObserver;

+ (id)_tagBlipColors;
+ (void)_tagColorsDidChange;
+ (id)allTags;
+ (id)tagColorsByTag;

- (void).cxx_destruct;
- (id)_createObserver;
- (bool)afterInitialUpdate;
- (void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3;
- (void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)displayTitle;
- (id)init;
- (id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned long long)arg3;
- (id)modelObjects;
- (id)observer;
- (id)pickableTypes;
- (unsigned long long)pickerMode;
- (void)refreshItem:(id)arg1 thumbnailOnly:(bool)arg2;
- (id)scopes;
- (void)setDisplayTitle:(id)arg1;
- (void)setModelObjects:(id)arg1;
- (void)setObserver:(id)arg1;
- (void)setPickableTypes:(id)arg1;
- (void)setPickerMode:(unsigned long long)arg1;
- (void)setUrl:(id)arg1;
- (void)setUrlObserver:(id)arg1;
- (bool)shouldAllowPickingType:(id)arg1;
- (bool)shouldEnableContainer:(id)arg1;
- (bool)shouldShowContainerForType:(id)arg1;
- (void)startMonitoringChanges;
- (void)stopMonitoringChanges;
- (void)updateObserverForURL:(id)arg1;
- (void)updateSortDescriptors;
- (id)url;
- (id)urlObserver;

@end