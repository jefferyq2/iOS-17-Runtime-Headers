
@interface GKTurnBasedMatchInternal : GKInternalRepresentation {
    NSString * _bundleID;
    NSString * _bundleVersion;
    NSDate * _creationDate;
    BOOL  _currentParticipant;
    GKPlayerInternal * _currentPlayer;
    NSDate * _deletionDate;
    NSArray * _exchanges;
    GKGameInternal * _game;
    NSDate * _lastTurnDate;
    NSString * _lastTurnPlayerID;
    NSDictionary * _localizableMessage;
    NSData * _matchData;
    NSString * _matchDataVersion;
    NSString * _matchID;
    unsigned char  _maxPlayers;
    NSString * _message;
    unsigned char  _minPlayers;
    NSArray * _participants;
    long long  _platform;
    NSString * _reason;
    NSString * _shortBundleVersion;
    unsigned int  _state;
    NSString * _status;
    unsigned int  _turnNumber;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, retain) NSDate *creationDate;
@property (nonatomic) BOOL currentParticipant;
@property (nonatomic, retain) GKPlayerInternal *currentPlayer;
@property (nonatomic, retain) NSDate *deletionDate;
@property (nonatomic, retain) NSArray *exchanges;
@property (nonatomic, retain) GKGameInternal *game;
@property (nonatomic, retain) NSDate *lastTurnDate;
@property (nonatomic, retain) NSString *lastTurnPlayerID;
@property (nonatomic, retain) NSDictionary *localizableMessage;
@property (nonatomic, retain) NSData *matchData;
@property (nonatomic, retain) NSString *matchDataVersion;
@property (nonatomic, retain) NSString *matchID;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic, retain) NSString *message;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic, retain) NSArray *participants;
@property (nonatomic) long long platform;
@property (nonatomic, retain) NSString *reason;
@property (nonatomic, retain) NSString *shortBundleVersion;
@property (nonatomic) unsigned int state;
@property (nonatomic, retain) NSString *status;
@property (nonatomic) unsigned int turnNumber;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (long long)activeExchangeCount;
- (id)bundleID;
- (id)bundleVersion;
- (id)creationDate;
- (BOOL)currentParticipant;
- (id)currentPlayer;
- (id)deletionDate;
- (id)descriptionSubstitutionMap;
- (id)exchanges;
- (id)game;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)lastTurnDate;
- (id)lastTurnPlayerID;
- (long long)localPlayerParticipantIndex;
- (id)localizableMessage;
- (id)matchData;
- (id)matchDataVersion;
- (id)matchID;
- (unsigned char)maxPlayers;
- (id)message;
- (unsigned char)minPlayers;
- (id)participants;
- (long long)platform;
- (long long)previousParticipantIndex;
- (id)reason;
- (void)setBundleID:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setCurrentParticipant:(BOOL)arg1;
- (void)setCurrentPlayer:(id)arg1;
- (void)setDeletionDate:(id)arg1;
- (void)setExchanges:(id)arg1;
- (void)setGame:(id)arg1;
- (void)setLastTurnDate:(id)arg1;
- (void)setLastTurnPlayerID:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setMatchData:(id)arg1;
- (void)setMatchDataVersion:(id)arg1;
- (void)setMatchID:(id)arg1;
- (void)setMaxPlayers:(unsigned char)arg1;
- (void)setMessage:(id)arg1;
- (void)setMinPlayers:(unsigned char)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPlatform:(long long)arg1;
- (void)setReason:(id)arg1;
- (void)setShortBundleVersion:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setStatus:(id)arg1;
- (void)setTurnNumber:(unsigned int)arg1;
- (id)shortBundleVersion;
- (unsigned int)state;
- (id)status;
- (unsigned int)turnNumber;

@end