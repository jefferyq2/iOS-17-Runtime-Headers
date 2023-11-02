
@interface HFServiceGroupBuilder : HFItemBuilder <HFServiceLikeBuilder> {
    bool  _hasSetIcon;
    bool  _hasSetRoom;
    <HFIconDescriptor> * _iconDescriptor;
    NSString * _name;
    HFRoomBuilder * _roomBuilder;
    HFMutableSetDiff * _serviceUUIDs;
    bool  isFavorite;
    bool  showInHomeDashboard;
}

@property (nonatomic, readonly) NSArray *availableIconDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasSetIcon;
@property (nonatomic) bool hasSetRoom;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <HFIconDescriptor> *iconDescriptor;
@property (nonatomic) bool isFavorite;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) NSString *originalName;
@property (nonatomic, readonly) NSString *primaryServiceType;
@property (nonatomic, retain) HFRoomBuilder *room;
@property (nonatomic, retain) HFRoomBuilder *roomBuilder;
@property (nonatomic, readonly) HMServiceGroup *serviceGroup;
@property (nonatomic, readonly) HFMutableSetDiff *serviceUUIDs;
@property (nonatomic, readonly) NSArray *services;
@property (nonatomic) bool showInHomeDashboard;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsFavoriting;

+ (Class)homeKitRepresentationClass;

- (void).cxx_destruct;
- (id)_createServiceGroup;
- (id)_mostCommonIconDescriptor;
- (id)_performValidation;
- (id)_rooms;
- (bool)_supportsCustomIcons;
- (id)_updateIcon;
- (id)_updateName;
- (id)_updateRooms;
- (id)_updateServices;
- (id)_updateValueForContextType:(unsigned long long)arg1;
- (id)accessories;
- (void)addService:(id)arg1;
- (id)availableIconDescriptors;
- (id)commitItem;
- (bool)hasSetIcon;
- (bool)hasSetRoom;
- (id)iconDescriptor;
- (id)initWithExistingObject:(id)arg1 inHome:(id)arg2;
- (bool)isFavorite;
- (id)name;
- (id)originalName;
- (id)primaryServiceType;
- (id)removeItemFromHome;
- (void)removeService:(id)arg1;
- (id)room;
- (id)roomBuilder;
- (id)serviceGroup;
- (id)serviceUUIDs;
- (id)services;
- (void)setHasSetIcon:(bool)arg1;
- (void)setHasSetRoom:(bool)arg1;
- (void)setIconDescriptor:(id)arg1;
- (void)setIsFavorite:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setRoom:(id)arg1;
- (void)setRoomBuilder:(id)arg1;
- (void)setServiceGroup:(id)arg1;
- (void)setShowInHomeDashboard:(bool)arg1;
- (bool)shouldAllowAddingService:(id)arg1;
- (bool)showInHomeDashboard;
- (bool)supportsFavoriting;

@end