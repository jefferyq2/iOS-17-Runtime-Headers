
@interface NWLinkConnection : NSObject {
    IDSCapsuleParser * _capsuleParser;
    unsigned short  _channelNumber;
    NSMutableSet * _children;
    NSObject<OS_nw_connection> * _connection;
    unsigned long long  _connectionID;
    NSObject<OS_nw_content_context> * _contentContext;
    unsigned long long  _disconnectionState;
    bool  _hasQUICStarted;
    bool  _hasRequiredInterface;
    bool  _ignoreCancel;
    unsigned int  _interfaceIndex;
    bool  _isH2Connection;
    NSObject<OS_nw_endpoint> * _localEndpoint;
    unsigned int  _localQUICConnectionID;
    unsigned int  _messageType;
    NSString * _name;
    NWLinkConnection * _parent;
    bool  _peelOffNewConnection;
    NSString * _protocolStackDescription;
    NSObject<OS_nw_parameters> * _quicPodParamaters;
    NSObject<OS_nw_endpoint> * _remoteEndpoint;
    double  _scheduledDisconnectTime;
    NSString * _sessionID;
    bool  _shouldTreatNextTryAsFirstTry;
    unsigned long long  _state;
    bool  _supportsNAT64;
    unsigned long long  _transactionID;
    unsigned long long  _type;
}

@property (nonatomic, retain) IDSCapsuleParser *capsuleParser;
@property (nonatomic) unsigned short channelNumber;
@property (nonatomic, retain) NSMutableSet *children;
@property (nonatomic, retain) NSObject<OS_nw_connection> *connection;
@property (nonatomic, readonly) unsigned long long connectionID;
@property (nonatomic, retain) NSObject<OS_nw_content_context> *contentContext;
@property (nonatomic) unsigned long long disconnectionState;
@property (readonly) bool hasDisconnected;
@property (readonly) bool hasFailed;
@property (nonatomic) bool hasQUICStarted;
@property (nonatomic) bool hasRequiredInterface;
@property (nonatomic) bool ignoreCancel;
@property (nonatomic, readonly) unsigned int interfaceIndex;
@property (readonly) bool isConnected;
@property (nonatomic) bool isH2Connection;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *localEndpoint;
@property (nonatomic) unsigned int localQUICConnectionID;
@property (nonatomic) unsigned int messageType;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) NWLinkConnection *parent;
@property (nonatomic) bool peelOffNewConnection;
@property (nonatomic, retain) NSString *protocolStackDescription;
@property (nonatomic, retain) NSObject<OS_nw_parameters> *quicPodParamaters;
@property (nonatomic, readonly) NSObject<OS_nw_endpoint> *remoteEndpoint;
@property (nonatomic) double scheduledDisconnectTime;
@property (nonatomic, copy) NSString *sessionID;
@property (nonatomic) bool shouldTreatNextTryAsFirstTry;
@property (nonatomic) unsigned long long state;
@property (nonatomic) bool supportsNAT64;
@property (nonatomic) unsigned long long transactionID;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)capsuleParser;
- (unsigned short)channelNumber;
- (id)children;
- (id)connection;
- (unsigned long long)connectionID;
- (id)contentContext;
- (unsigned long long)disconnectionState;
- (bool)hasDisconnected;
- (bool)hasFailed;
- (bool)hasQUICStarted;
- (bool)hasRequiredInterface;
- (bool)ignoreCancel;
- (id)initWithBaseNWLinkConnection:(id)arg1 type:(unsigned long long)arg2;
- (id)initWithType:(unsigned long long)arg1 interfaceIndex:(unsigned int)arg2 localEndpoint:(id)arg3 remoteEndpoint:(id)arg4;
- (id)initWithType:(unsigned long long)arg1 interfaceIndex:(unsigned int)arg2 localEndpoint:(id)arg3 remoteEndpoint:(id)arg4 isH2Connection:(bool)arg5;
- (unsigned int)interfaceIndex;
- (bool)isConnected;
- (bool)isH2Connection;
- (id)localEndpoint;
- (unsigned int)localQUICConnectionID;
- (unsigned int)messageType;
- (id)name;
- (id)parent;
- (bool)peelOffNewConnection;
- (id)protocolStackDescription;
- (id)quicPodParamaters;
- (id)remoteEndpoint;
- (double)scheduledDisconnectTime;
- (id)sessionID;
- (void)setCapsuleParser:(id)arg1;
- (void)setChannelNumber:(unsigned short)arg1;
- (void)setChildren:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setContentContext:(id)arg1;
- (void)setDisconnectionState:(unsigned long long)arg1;
- (void)setHasQUICStarted:(bool)arg1;
- (void)setHasRequiredInterface:(bool)arg1;
- (void)setIgnoreCancel:(bool)arg1;
- (void)setIsH2Connection:(bool)arg1;
- (void)setLocalQUICConnectionID:(unsigned int)arg1;
- (void)setMessageType:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setParent:(id)arg1;
- (void)setPeelOffNewConnection:(bool)arg1;
- (void)setProtocolStackDescription:(id)arg1;
- (void)setQuicPodParamaters:(id)arg1;
- (void)setScheduledDisconnectTime:(double)arg1;
- (void)setSessionID:(id)arg1;
- (void)setShouldTreatNextTryAsFirstTry:(bool)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)setSupportsNAT64:(bool)arg1;
- (void)setTransactionID:(unsigned long long)arg1;
- (bool)shouldTreatNextTryAsFirstTry;
- (unsigned long long)state;
- (bool)supportsNAT64;
- (unsigned long long)transactionID;
- (unsigned long long)type;

@end