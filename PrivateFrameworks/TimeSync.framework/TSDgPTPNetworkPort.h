
@interface TSDgPTPNetworkPort : TSDgPTPPort {
    bool  _asCapable;
    unsigned long long  _asyncCallbackRefcon;
    NSPointerArray * _clients;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _clientsLock;
    IODConnection * _connection;
    NSString * _destinationAddressString;
    bool  _enabled;
    bool  _hasLocalFrequencyStabilityLower;
    bool  _hasLocalFrequencyStabilityUpper;
    bool  _hasLocalFrequencyToleranceLower;
    bool  _hasLocalFrequencyToleranceUpper;
    bool  _hasRemoteFrequencyStabilityLower;
    bool  _hasRemoteFrequencyStabilityUpper;
    bool  _hasRemoteFrequencyToleranceLower;
    bool  _hasRemoteFrequencyToleranceUpper;
    NSString * _interfaceName;
    BOOL  _localAnnounceLogMeanInterval;
    int  _localFrequencyStabilityLower;
    int  _localFrequencyStabilityUpper;
    int  _localFrequencyToleranceLower;
    int  _localFrequencyToleranceUpper;
    unsigned char  _localLinkType;
    unsigned char  _localOscillatorType;
    BOOL  _localSyncLogMeanInterval;
    unsigned char  _localTimestampingMode;
    unsigned int  _maximumPropagationDelay;
    unsigned int  _maximumRawDelay;
    unsigned int  _minimumPropagationDelay;
    unsigned int  _minimumRawDelay;
    unsigned long long  _overridenReceiveClockIdentity;
    bool  _overridenReceiveMatching;
    unsigned short  _overridenReceivePortNumber;
    unsigned int  _propagationDelay;
    unsigned int  _propagationDelayLimit;
    BOOL  _remoteAnnounceLogMeanInterval;
    unsigned long long  _remoteClockIdentity;
    int  _remoteFrequencyStabilityLower;
    int  _remoteFrequencyStabilityUpper;
    int  _remoteFrequencyToleranceLower;
    int  _remoteFrequencyToleranceUpper;
    bool  _remoteIsSameDevice;
    unsigned char  _remoteLinkType;
    unsigned char  _remoteOscillatorType;
    unsigned short  _remotePortNumber;
    BOOL  _remoteSyncLogMeanInterval;
    unsigned char  _remoteTimestampingMode;
    NSString * _sourceAddressString;
}

@property (getter=isASCapable, nonatomic) bool asCapable;
@property (nonatomic, readonly) IODConnection *connection;
@property (nonatomic, copy) NSString *destinationAddressString;
@property (nonatomic) bool enabled;
@property (nonatomic) bool hasLocalFrequencyStabilityLower;
@property (nonatomic) bool hasLocalFrequencyStabilityUpper;
@property (nonatomic) bool hasLocalFrequencyToleranceLower;
@property (nonatomic) bool hasLocalFrequencyToleranceUpper;
@property (nonatomic) bool hasRemoteFrequencyStabilityLower;
@property (nonatomic) bool hasRemoteFrequencyStabilityUpper;
@property (nonatomic) bool hasRemoteFrequencyToleranceLower;
@property (nonatomic) bool hasRemoteFrequencyToleranceUpper;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic) BOOL localAnnounceLogMeanInterval;
@property (nonatomic) int localFrequencyStabilityLower;
@property (nonatomic) int localFrequencyStabilityUpper;
@property (nonatomic) int localFrequencyToleranceLower;
@property (nonatomic) int localFrequencyToleranceUpper;
@property (nonatomic) unsigned char localLinkType;
@property (nonatomic) unsigned char localOscillatorType;
@property (nonatomic) BOOL localSyncLogMeanInterval;
@property (nonatomic) unsigned char localTimestampingMode;
@property (nonatomic) unsigned int maximumPropagationDelay;
@property (nonatomic) unsigned int maximumRawDelay;
@property (nonatomic) unsigned int minimumPropagationDelay;
@property (nonatomic) unsigned int minimumRawDelay;
@property (nonatomic) unsigned long long overridenReceiveClockIdentity;
@property (nonatomic) bool overridenReceiveMatching;
@property (nonatomic) unsigned short overridenReceivePortNumber;
@property (nonatomic) unsigned int propagationDelay;
@property (nonatomic) unsigned int propagationDelayLimit;
@property (nonatomic) BOOL remoteAnnounceLogMeanInterval;
@property (nonatomic) unsigned long long remoteClockIdentity;
@property (nonatomic) int remoteFrequencyStabilityLower;
@property (nonatomic) int remoteFrequencyStabilityUpper;
@property (nonatomic) int remoteFrequencyToleranceLower;
@property (nonatomic) int remoteFrequencyToleranceUpper;
@property (nonatomic) bool remoteIsSameDevice;
@property (nonatomic) unsigned char remoteLinkType;
@property (nonatomic) unsigned char remoteOscillatorType;
@property (nonatomic) unsigned short remotePortNumber;
@property (nonatomic) BOOL remoteSyncLogMeanInterval;
@property (nonatomic) unsigned char remoteTimestampingMode;
@property (nonatomic, copy) NSString *sourceAddressString;

+ (id)diagnosticInfoForService:(id)arg1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)arg1;

- (void).cxx_destruct;
- (id)_destinationAddressString;
- (bool)_enabled;
- (void)_handleNotification:(int)arg1 withArg1:(unsigned long long)arg2 arg2:(unsigned long long)arg3 arg3:(unsigned long long)arg4 arg4:(unsigned long long)arg5 arg5:(unsigned long long)arg6 arg6:(unsigned long long)arg7;
- (void)_handleRefreshConnection;
- (bool)_hasLocalFrequencyStabilityLower;
- (bool)_hasLocalFrequencyStabilityUpper;
- (bool)_hasLocalFrequencyToleranceLower;
- (bool)_hasLocalFrequencyToleranceUpper;
- (bool)_hasRemoteFrequencyStabilityLower;
- (bool)_hasRemoteFrequencyStabilityUpper;
- (bool)_hasRemoteFrequencyToleranceLower;
- (bool)_hasRemoteFrequencyToleranceUpper;
- (id)_interfaceName;
- (bool)_isASCapable;
- (BOOL)_localAnnounceLogMeanInterval;
- (int)_localFrequencyStabilityLower;
- (int)_localFrequencyStabilityUpper;
- (int)_localFrequencyToleranceLower;
- (int)_localFrequencyToleranceUpper;
- (unsigned char)_localLinkType;
- (unsigned char)_localOscillatorType;
- (BOOL)_localSyncLogMeanInterval;
- (unsigned char)_localTimestampingMode;
- (unsigned int)_maximumPropagationDelay;
- (unsigned int)_maximumRawDelay;
- (unsigned int)_minimumPropagationDelay;
- (unsigned int)_minimumRawDelay;
- (unsigned long long)_overridenReceiveClockIdentity;
- (bool)_overridenReceiveMatching;
- (unsigned short)_overridenReceivePortNumber;
- (unsigned int)_propagationDelay;
- (unsigned int)_propagationDelayLimit;
- (BOOL)_remoteAnnounceLogMeanInterval;
- (unsigned long long)_remoteClockIdentity;
- (int)_remoteFrequencyStabilityLower;
- (int)_remoteFrequencyStabilityUpper;
- (int)_remoteFrequencyToleranceLower;
- (int)_remoteFrequencyToleranceUpper;
- (bool)_remoteIsSameDevice;
- (unsigned char)_remoteLinkType;
- (unsigned char)_remoteOscillatorType;
- (unsigned short)_remotePortNumber;
- (BOOL)_remoteSyncLogMeanInterval;
- (unsigned char)_remoteTimestampingMode;
- (id)_sourceAddressString;
- (void)addClient:(id)arg1;
- (id)connection;
- (bool)deregisterAsyncCallbackError:(id*)arg1;
- (id)destinationAddressString;
- (bool)disablePortError:(id*)arg1;
- (bool)enablePortError:(id*)arg1;
- (bool)enabled;
- (bool)getCurrentPortInfo:(struct { int x1; int x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned char x6; unsigned long long x7; unsigned short x8; }*)arg1 error:(id*)arg2;
- (bool)hasLocalFrequencyStabilityLower;
- (bool)hasLocalFrequencyStabilityUpper;
- (bool)hasLocalFrequencyToleranceLower;
- (bool)hasLocalFrequencyToleranceUpper;
- (bool)hasRemoteFrequencyStabilityLower;
- (bool)hasRemoteFrequencyStabilityUpper;
- (bool)hasRemoteFrequencyToleranceLower;
- (bool)hasRemoteFrequencyToleranceUpper;
- (id)initWithService:(id)arg1 pid:(int)arg2;
- (id)interfaceName;
- (bool)isASCapable;
- (BOOL)localAnnounceLogMeanInterval;
- (int)localFrequencyStabilityLower;
- (int)localFrequencyStabilityUpper;
- (int)localFrequencyToleranceLower;
- (int)localFrequencyToleranceUpper;
- (unsigned char)localLinkType;
- (unsigned char)localOscillatorType;
- (BOOL)localSyncLogMeanInterval;
- (unsigned char)localTimestampingMode;
- (unsigned int)maximumPropagationDelay;
- (unsigned int)maximumRawDelay;
- (unsigned int)minimumPropagationDelay;
- (unsigned int)minimumRawDelay;
- (bool)overrideReceiveMatchingWithRemoteClockIdentity:(unsigned long long)arg1 remotePortNumber:(unsigned short)arg2 error:(id*)arg3;
- (unsigned long long)overridenReceiveClockIdentity;
- (bool)overridenReceiveMatching;
- (unsigned short)overridenReceivePortNumber;
- (unsigned int)propagationDelay;
- (unsigned int)propagationDelayLimit;
- (id)propertiesForXPC;
- (bool)registerAsyncCallbackError:(id*)arg1;
- (BOOL)remoteAnnounceLogMeanInterval;
- (unsigned long long)remoteClockIdentity;
- (int)remoteFrequencyStabilityLower;
- (int)remoteFrequencyStabilityUpper;
- (int)remoteFrequencyToleranceLower;
- (int)remoteFrequencyToleranceUpper;
- (bool)remoteIsSameDevice;
- (unsigned char)remoteLinkType;
- (unsigned char)remoteOscillatorType;
- (unsigned short)remotePortNumber;
- (BOOL)remoteSyncLogMeanInterval;
- (unsigned char)remoteTimestampingMode;
- (void)removeClient:(id)arg1;
- (bool)requestRemoteMessageIntervalsWithPDelayMessageInterval:(BOOL)arg1 syncMessageInterval:(BOOL)arg2 announceMessageInterval:(BOOL)arg3 error:(id*)arg4;
- (bool)restoreReceiveMatchingError:(id*)arg1;
- (void)serviceTerminated;
- (void)setAsCapable:(bool)arg1;
- (void)setDestinationAddressString:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setHasLocalFrequencyStabilityLower:(bool)arg1;
- (void)setHasLocalFrequencyStabilityUpper:(bool)arg1;
- (void)setHasLocalFrequencyToleranceLower:(bool)arg1;
- (void)setHasLocalFrequencyToleranceUpper:(bool)arg1;
- (void)setHasRemoteFrequencyStabilityLower:(bool)arg1;
- (void)setHasRemoteFrequencyStabilityUpper:(bool)arg1;
- (void)setHasRemoteFrequencyToleranceLower:(bool)arg1;
- (void)setHasRemoteFrequencyToleranceUpper:(bool)arg1;
- (void)setLocalAnnounceLogMeanInterval:(BOOL)arg1;
- (void)setLocalFrequencyStabilityLower:(int)arg1;
- (void)setLocalFrequencyStabilityUpper:(int)arg1;
- (void)setLocalFrequencyToleranceLower:(int)arg1;
- (void)setLocalFrequencyToleranceUpper:(int)arg1;
- (void)setLocalLinkType:(unsigned char)arg1;
- (void)setLocalOscillatorType:(unsigned char)arg1;
- (void)setLocalSyncLogMeanInterval:(BOOL)arg1;
- (void)setLocalTimestampingMode:(unsigned char)arg1;
- (void)setMaximumPropagationDelay:(unsigned int)arg1;
- (void)setMaximumRawDelay:(unsigned int)arg1;
- (void)setMinimumPropagationDelay:(unsigned int)arg1;
- (void)setMinimumRawDelay:(unsigned int)arg1;
- (void)setOverridenReceiveClockIdentity:(unsigned long long)arg1;
- (void)setOverridenReceiveMatching:(bool)arg1;
- (void)setOverridenReceivePortNumber:(unsigned short)arg1;
- (void)setPropagationDelay:(unsigned int)arg1;
- (void)setPropagationDelayLimit:(unsigned int)arg1;
- (void)setRemoteAnnounceLogMeanInterval:(BOOL)arg1;
- (void)setRemoteClockIdentity:(unsigned long long)arg1;
- (void)setRemoteFrequencyStabilityLower:(int)arg1;
- (void)setRemoteFrequencyStabilityUpper:(int)arg1;
- (void)setRemoteFrequencyToleranceLower:(int)arg1;
- (void)setRemoteFrequencyToleranceUpper:(int)arg1;
- (void)setRemoteIsSameDevice:(bool)arg1;
- (void)setRemoteLinkType:(unsigned char)arg1;
- (void)setRemoteOscillatorType:(unsigned char)arg1;
- (void)setRemotePortNumber:(unsigned short)arg1;
- (void)setRemoteSyncLogMeanInterval:(BOOL)arg1;
- (void)setRemoteTimestampingMode:(unsigned char)arg1;
- (void)setSourceAddressString:(id)arg1;
- (id)sourceAddressString;
- (void)updateProperties;

@end