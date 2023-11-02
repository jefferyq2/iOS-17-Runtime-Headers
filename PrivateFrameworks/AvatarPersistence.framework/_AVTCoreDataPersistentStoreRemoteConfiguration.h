
@interface _AVTCoreDataPersistentStoreRemoteConfiguration : NSObject <AVTCoreDataPersistentStoreConfiguration> {
    NSPersistentContainer * _container;
    <AVTAvatarsDaemon> * _daemonClient;
    <AVTUILogger> * _logger;
}

@property (nonatomic, readonly) NSPersistentContainer *container;
@property (nonatomic, readonly) <AVTAvatarsDaemon> *daemonClient;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (readonly) Class superclass;

+ (id)createContainerForRemoteConfiguration;

- (void).cxx_destruct;
- (id)container;
- (id)createManagedObjectContext;
- (id)daemonClient;
- (id)initWithDaemonClient:(id)arg1 environment:(id)arg2;
- (id)logger;
- (id)persistentStoreCoordinator;
- (bool)setupIfNeeded:(id*)arg1;
- (id)storeDescription;

@end