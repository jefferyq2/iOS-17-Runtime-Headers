
@interface NTKCompanionFaceRenderer : NSObject {
    NTKFace * _currentFace;
    id /* block */  _faceBatchCompletionHandler;
    NSMutableArray * _pendingTaskList;
    bool  _queueActive;
    NTKFaceSnapshottingWindow * _window;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) NTKFace *currentFace;
@property (nonatomic, copy) id /* block */ faceBatchCompletionHandler;
@property (nonatomic, retain) NSMutableArray *pendingTaskList;
@property (getter=isQueueActive, nonatomic) bool queueActive;

+ (id)_snapshotNameForFace:(id)arg1 detailMode:(long long)arg2;
+ (id)_storagePath;
+ (id)snapshotPathForFace:(id)arg1 detailMode:(long long)arg2;

- (void).cxx_destruct;
- (void)_notifyFinishedFaceBatchIfNeeded;
- (void)_startNextWorkItem;
- (id)currentFace;
- (id /* block */)faceBatchCompletionHandler;
- (id)init;
- (bool)isQueueActive;
- (id)pendingTaskList;
- (void)requestSnapshotOfFace:(id)arg1 completion:(id /* block */)arg2;
- (void)setCurrentFace:(id)arg1;
- (void)setFaceBatchCompletionHandler:(id /* block */)arg1;
- (void)setPendingTaskList:(id)arg1;
- (void)setQueueActive:(bool)arg1;

@end