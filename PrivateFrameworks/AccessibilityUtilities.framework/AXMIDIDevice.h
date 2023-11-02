
@interface AXMIDIDevice : NSObject <AXMIDIDeviceEntityDelegate> {
    <AXMIDIDeviceProtocol> * _delegate;
    NSMutableSet * _entities;
    unsigned int  _midiDevice;
    NSNumber * _supportsMMC;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AXMIDIDeviceProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSNumber *deviceID;
@property (nonatomic, readonly) NSString *driverName;
@property (nonatomic, retain) NSMutableSet *entities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSNumber *isOffline;
@property (nonatomic, readonly) NSNumber *isPrivate;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic) unsigned int midiDevice;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSNumber *supportsGeneralMIDI;
@property (nonatomic, readonly) NSNumber *supportsMMC;
@property (nonatomic, readonly) NSNumber *uniqueID;

- (void).cxx_destruct;
- (id)_entityForMidiEntity:(unsigned int)arg1 addIfNeeded:(bool)arg2;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)addMidiEntity:(unsigned int)arg1;
- (void)addMidiSource:(unsigned int)arg1;
- (id)delegate;
- (id)description;
- (id)deviceID;
- (id)driverName;
- (id)entities;
- (void)entity:(id)arg1 didAddDestination:(id)arg2;
- (void)entity:(id)arg1 didAddSource:(id)arg2;
- (void)entity:(id)arg1 didRemoveDestination:(id)arg2;
- (void)entity:(id)arg1 didRemoveSource:(id)arg2;
- (id)fullDescription;
- (unsigned long long)hash;
- (id)initWithMIDIDevice:(unsigned int)arg1 delegate:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)isOffline;
- (id)isPrivate;
- (id)manufacturer;
- (unsigned int)midiDevice;
- (id)model;
- (id)name;
- (void)removeMidiDestination:(unsigned int)arg1;
- (void)removeMidiEntity:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)resetAndDetectEntities;
- (void)setDelegate:(id)arg1;
- (void)setEntities:(id)arg1;
- (void)setMidiDevice:(unsigned int)arg1;
- (id)supportsGeneralMIDI;
- (id)supportsGeneralMMC;
- (id)supportsMMC;
- (id)uniqueID;

@end