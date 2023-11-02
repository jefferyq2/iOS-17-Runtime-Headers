
@interface _MSPContainerEdit : NSObject <MSPContainerEdit>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)ifAddition:(id /* block */)arg1 ifRemoval:(id /* block */)arg2 ifReplacement:(id /* block */)arg3 ifContentUpdate:(id /* block */)arg4 ifReplacedEntirely:(id /* block */)arg5;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(id /* block */)arg2;

@end