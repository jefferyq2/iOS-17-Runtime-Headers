
@interface WBSCyclerMoveBookmarkOperation : NSObject <WBSCyclerContextualOperation>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)executeWithContext:(id)arg1 completionHandler:(id /* block */)arg2;

@end