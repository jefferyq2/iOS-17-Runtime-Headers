
@interface WFShortcutsV5CustomModificationsStep : NSObject <WFProgressiveMigrationCustomModificationsStep>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)performModificationsWithContext:(id)arg1 error:(id*)arg2;

@end