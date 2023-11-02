
@interface VUINowPlayingHybridFeature : NSObject <VUINowPlayingHybridFeature> {
    unsigned long long  _activationType;
    bool  _active;
    bool  _autoRemove;
    double  _duration;
    bool  _skippable;
    double  _startTime;
    unsigned long long  _type;
    id  _userInfo;
}

@property (nonatomic) unsigned long long activationType;
@property (getter=isActive, nonatomic) bool active;
@property (getter=shouldAutoRemove, nonatomic) bool autoRemove;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (readonly) unsigned long long hash;
@property (getter=isSkippable, nonatomic) bool skippable;
@property (nonatomic) double startTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) id userInfo;

- (void).cxx_destruct;
- (unsigned long long)activationType;
- (id)description;
- (double)duration;
- (unsigned long long)hash;
- (id)init;
- (id)initWithType:(unsigned long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (bool)isActive;
- (bool)isEqual:(id)arg1;
- (bool)isSkippable;
- (void)setActivationType:(unsigned long long)arg1;
- (void)setActive:(bool)arg1;
- (void)setAutoRemove:(bool)arg1;
- (void)setSkippable:(bool)arg1;
- (void)setStartTime:(double)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (bool)shouldAutoRemove;
- (double)startTime;
- (unsigned long long)type;
- (id)userInfo;

@end