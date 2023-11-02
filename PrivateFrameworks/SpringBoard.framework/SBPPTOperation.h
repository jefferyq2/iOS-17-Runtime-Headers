
@interface SBPPTOperation : NSOperation {
    id /* block */  _finishSubTestBlock;
    id /* block */  _finishTestBlock;
    double  _operationEndTime;
    NSString * _operationName;
    double  _operationStartTime;
    id /* block */  _startSubTestBlock;
    id /* block */  _startTestBlock;
}

@property (nonatomic, copy) NSString *operationName;

+ (void)_appLibrarySupport__performPanGesturesOnScreenFromPage:(unsigned long long)arg1 toPage:(unsigned long long)arg2 completion:(id /* block */)arg3;
+ (void)_appLibrarySupport_performDragFromPoint:(struct CGPoint { double x1; double x2; })arg1 andDragTo:(struct CGPoint { double x1; double x2; })arg2 duration:(double)arg3 fromView:(id)arg4 withCompletion:(id /* block */)arg5;
+ (void)_appLibrarySupport_performLeftToRightPanGestureOnScreenWithDuration:(double)arg1 completion:(id /* block */)arg2;
+ (void)_appLibrarySupport_performPanGestureAwayFromUserInterfaceLayoutDirectionOnScreenWithDuration:(double)arg1 completion:(id /* block */)arg2;
+ (void)_appLibrarySupport_performPanGestureTowardsUserInterfaceLayoutDirectionOnScreenWithDuration:(double)arg1 completion:(id /* block */)arg2;
+ (void)_appLibrarySupport_performPanGesturesOnScreenUntilOnDefaultHomeScreenIconPageWithCompletion:(id /* block */)arg1;
+ (void)_appLibrarySupport_performPanGesturesOnScreenUntilOnDeweyOverlayWithCompletion:(id /* block */)arg1;
+ (void)_appLibrarySupport_performPanGesturesOnScreenUntilOnPage:(unsigned long long)arg1 withCompletion:(id /* block */)arg2;
+ (void)_appLibrarySupport_performPanWithComposer:(id)arg1 startLocation:(struct CGPoint { double x1; double x2; })arg2 endLocation:(struct CGPoint { double x1; double x2; })arg3 duration:(double)arg4;
+ (void)_appLibrarySupport_performRightToLeftPanGestureOnScreenWithDuration:(double)arg1 completion:(id /* block */)arg2;
+ (void)_appLibrarySupport_performTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 fromView:(id)arg2 withCompletion:(id /* block */)arg3;
+ (void)_dismissOverlaysAndResetHomeScreenToPage:(unsigned long long)arg1 animated:(bool)arg2 operation:(id)arg3 completion:(id /* block */)arg4;
+ (bool)_isLibraryDismissalAllowedWithCompletion:(id /* block */)arg1;
+ (bool)_isLibraryPresentationAllowedWithCompletion:(id /* block */)arg1;
+ (id)_libraryViewController;
+ (id)_mainDisplayWindowScene;
+ (id)_mainDisplayWindowScene;
+ (id)appLibraryDismissExpandedPod;
+ (id)appLibraryExpandFirstPod;
+ (id)configureAppLibraryForAllAppsInOnePod;
+ (id)configureAppLibraryForEachAppHavingOwnPod;
+ (id)dismissAppLibraryOverlay;
+ (id)dismissAppLibraryPad:(bool)arg1;
+ (id)dismissAppLibrarySearch;
+ (id)dismissOverlaysAndResetHomeScreenToFirstIconPageAnimated:(bool)arg1;
+ (id)dismissOverlaysAndResetHomeScreenToLastIconPageAnimated:(bool)arg1;
+ (id)dismissOverlaysAndResetHomeScreenToPage:(unsigned long long)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
+ (void)enqueueOperations:(id)arg1;
+ (bool)isLibraryPresented;
+ (id)operationToActivateApplicationWithBundleIdentifier:(id)arg1;
+ (id)operationToActivateNullOffscreenApp;
+ (id)operationToCreateFolderWithName:(id)arg1 containingIconsForBundleIdentifiers:(id)arg2;
+ (id)operationToDismissAppSwitcherAndReturnToSource;
+ (id)operationToDismissBannerNotification;
+ (id)operationToDismissCoverSheet;
+ (id)operationToDismissFloatingDock;
+ (id)operationToDismissPageManagement;
+ (id)operationToFinishTest:(id)arg1;
+ (id)operationToLoadPPTAppSwitcherState;
+ (id)operationToLockInterface;
+ (id)operationToMonitorCoverSheetTransitionWithTestName:(id)arg1 execute:(id /* block */)arg2;
+ (id)operationToOpenFolderWithName:(id)arg1;
+ (id)operationToPresentAppSwitcher;
+ (id)operationToPresentBannerNotification;
+ (id)operationToPresentCoverSheet;
+ (id)operationToPresentFloatingDock;
+ (id)operationToPresentPageManagement;
+ (id)operationToPreventSystemIdle;
+ (id)operationToPublishExampleNotificationsWithNotificationCount:(unsigned long long)arg1 threadCount:(unsigned long long)arg2;
+ (id)operationToRemoveExampleNotifications;
+ (id)operationToRestoreAppSwitcherState;
+ (id)operationToRestoreHomeScreenState;
+ (id)operationToResumeSystemIdle;
+ (id)operationToSaveAppSwitcherState;
+ (id)operationToSaveHomeScreenState;
+ (id)operationToSetAllApplicationsBlockedForScreenTime:(bool)arg1;
+ (id)operationToSetApplicationWithBundleIdentifier:(id)arg1 blockedForScreenTime:(bool)arg2;
+ (id)operationToSetInterfaceOrientation:(long long)arg1;
+ (id)operationToStartTest:(id)arg1;
+ (id)operationToSwipeDownInMiddleOfInterface;
+ (id)operationToSwipeLeftInMiddleOfInterface;
+ (id)operationToSwipeRightInMiddleOfInterface;
+ (id)operationToSwipeUpInMiddleOfInterface;
+ (id)operationToSynthesizeEventsForCommandString:(id)arg1;
+ (id)operationToSynthesizeEventsForEventActions:(id /* block */)arg1;
+ (id)operationToSynthesizeEventsForEventStream:(id)arg1;
+ (id)operationToTerminateApplicationWithBundleIdentifier:(id)arg1;
+ (id)operationToTerminateNullOffscreenApp;
+ (id)operationToTransitionToHomeScreen;
+ (id)operationToUnlockInterface;
+ (id)operationToUnlockInterfaceFinishingUIUnlock:(bool)arg1;
+ (id)operationToUpdateHomeScreenPagesForActiveFocusMode;
+ (id)operationToWaitForNotificationName:(id)arg1 object:(id)arg2 timeout:(double)arg3;
+ (id)operationToWaitForTimeInterval:(double)arg1;
+ (id)performTapAtPointWithBlock:(id /* block */)arg1;
+ (id)presentAppLibrary;
+ (id)presentAppLibrary:(bool)arg1;
+ (id)presentAppLibraryPhone;
+ (id)presentAppLibrarySearchByTappingSearchField;
+ (id)pullToAppLibrarySearch;
+ (id)resetAndPrepareforNextTest;
+ (id)resetAppLibraryToTop;

- (void).cxx_destruct;
- (id)init;
- (id)markFinishedSubTest:(id)arg1 forTestName:(id)arg2;
- (id)markFinishedTest:(id)arg1;
- (id)markStartSubTest:(id)arg1 forTestName:(id)arg2;
- (id)markStartedTest:(id)arg1;
- (void)operationDidFinish;
- (id)operationName;
- (void)operationWillStart;
- (void)setOperationName:(id)arg1;

@end