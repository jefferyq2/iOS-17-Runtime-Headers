
@interface PUPhotosGridBarsHelper : NSObject <PUPhotoSelectionManagerChangeObserver> {
    bool  __hadSelectionOnLastUpdate;
    PUPhotoSelectionManager * __photoSelectionManager;
    NSObject<OS_dispatch_queue> * __queue;
    bool  __shouldUpdateBarItemsLazily;
    bool  __shouldUpdateItemsWithCount;
    bool  __updatingItemsWithCount;
    <PUPhotosGridBarsHelperDelegate> * _delegate;
    bool  _isPerformingUpdates;
    NSArray * _leftBarButtonItems;
    struct { 
        bool photoSelectionManager; 
        bool shouldUpdateBarItemsLazily; 
        bool barItems; 
    }  _needsUpdateFlags;
    NSString * _prompt;
    NSArray * _rightBarButtonItems;
    bool  _shouldHideBackButton;
    bool  _swipeSelecting;
    NSString * _title;
}

@property (setter=_setHadSelectionOnLastUpdate:, nonatomic) bool _hadSelectionOnLastUpdate;
@property (setter=_setPhotoSelectionManager:, nonatomic, retain) PUPhotoSelectionManager *_photoSelectionManager;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_queue;
@property (setter=_setShouldUpdateBarItemsLazily:, nonatomic) bool _shouldUpdateBarItemsLazily;
@property (setter=_setShouldUpdateItemsWithCount:, nonatomic) bool _shouldUpdateItemsWithCount;
@property (getter=_isUpdatingItemsWithCount, setter=_setUpdatingItemsWithCount:, nonatomic) bool _updatingItemsWithCount;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotosGridBarsHelperDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (setter=_setLeftBarButtonItems:, nonatomic, retain) NSArray *leftBarButtonItems;
@property (setter=_setPrompt:, nonatomic, retain) NSString *prompt;
@property (setter=_setRightBarButtonItems:, nonatomic, retain) NSArray *rightBarButtonItems;
@property (setter=_setShouldHideBackButton:, nonatomic) bool shouldHideBackButton;
@property (readonly) Class superclass;
@property (getter=isSwipeSelecting, nonatomic) bool swipeSelecting;
@property (setter=_setTitle:, nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (bool)_hadSelectionOnLastUpdate;
- (void)_handleItemsWithCountUpdateWithTitle:(id)arg1 shouldReloadAllItems:(bool)arg2;
- (void)_invalidateBarItems;
- (void)_invalidatePhotoSelectionManager;
- (void)_invalidateShouldUpdateBarItemsLazily;
- (bool)_isUpdatingItemsWithCount;
- (bool)_needsUpdate;
- (void)_notifyBarItemsDidChange;
- (id)_photoSelectionManager;
- (id)_queue;
- (void)_setHadSelectionOnLastUpdate:(bool)arg1;
- (void)_setLeftBarButtonItems:(id)arg1;
- (void)_setNeedsUpdate;
- (void)_setPhotoSelectionManager:(id)arg1;
- (void)_setPrompt:(id)arg1;
- (void)_setRightBarButtonItems:(id)arg1;
- (void)_setShouldHideBackButton:(bool)arg1;
- (void)_setShouldUpdateBarItemsLazily:(bool)arg1;
- (void)_setShouldUpdateItemsWithCount:(bool)arg1;
- (void)_setTitle:(id)arg1;
- (void)_setUpdatingItemsWithCount:(bool)arg1;
- (bool)_shouldUpdateBarItemsLazily;
- (bool)_shouldUpdateItemsWithCount;
- (void)_startUpdatingItemsWithCountIfNeeded;
- (void)_stopUpdatingItemsWithCount;
- (void)_updateAllBarItems;
- (void)_updateBarItemsIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateItemsWithCountInBackgroundWithDelegate:(id)arg1 photoSelectionManagerSnapshot:(id)arg2;
- (void)_updatePhotoSelectionManagerIfNeeded;
- (void)_updateShouldUpdateBarItemsLazilyIfNeeded;
- (id)delegate;
- (id)init;
- (void)invalidateNavigationBarItems;
- (bool)isSwipeSelecting;
- (id)leftBarButtonItems;
- (void)photoSelectionManagerSelectionDidChange:(id)arg1;
- (id)prompt;
- (id)rightBarButtonItems;
- (void)setDelegate:(id)arg1;
- (void)setSwipeSelecting:(bool)arg1;
- (bool)shouldHideBackButton;
- (id)title;

@end