
@interface NNMKProtoMailbox : PBCodable <NSCopying> {
    NSString * _accountId;
    NSString * _customName;
    unsigned int  _filterType;
    struct { 
        unsigned int filterType : 1; 
        unsigned int type : 1; 
        unsigned int syncEnabled : 1; 
        unsigned int syncRequested : 1; 
    }  _has;
    NSString * _mailboxId;
    bool  _syncEnabled;
    bool  _syncRequested;
    unsigned int  _type;
    NSString * _url;
}

@property (nonatomic, retain) NSString *accountId;
@property (nonatomic, retain) NSString *customName;
@property (nonatomic) unsigned int filterType;
@property (nonatomic, readonly) bool hasAccountId;
@property (nonatomic, readonly) bool hasCustomName;
@property (nonatomic) bool hasFilterType;
@property (nonatomic, readonly) bool hasMailboxId;
@property (nonatomic) bool hasSyncEnabled;
@property (nonatomic) bool hasSyncRequested;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUrl;
@property (nonatomic, retain) NSString *mailboxId;
@property (nonatomic) bool syncEnabled;
@property (nonatomic) bool syncRequested;
@property (nonatomic) unsigned int type;
@property (nonatomic, retain) NSString *url;

+ (id)protoMailboxFromMailbox:(id)arg1;

- (void).cxx_destruct;
- (id)accountId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customName;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)filterType;
- (bool)hasAccountId;
- (bool)hasCustomName;
- (bool)hasFilterType;
- (bool)hasMailboxId;
- (bool)hasSyncEnabled;
- (bool)hasSyncRequested;
- (bool)hasType;
- (bool)hasUrl;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)mailbox;
- (id)mailboxId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccountId:(id)arg1;
- (void)setCustomName:(id)arg1;
- (void)setFilterType:(unsigned int)arg1;
- (void)setHasFilterType:(bool)arg1;
- (void)setHasSyncEnabled:(bool)arg1;
- (void)setHasSyncRequested:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMailboxId:(id)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setSyncRequested:(bool)arg1;
- (void)setType:(unsigned int)arg1;
- (void)setUrl:(id)arg1;
- (bool)syncEnabled;
- (bool)syncRequested;
- (unsigned int)type;
- (id)url;
- (void)writeTo:(id)arg1;

@end