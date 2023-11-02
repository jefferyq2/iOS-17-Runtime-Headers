
@interface _CNUIUserActionURLItem : CNUIUserActionItem {
    bool  _isSensitive;
    CNFuture * _url;
}

@property (nonatomic, readonly) bool isSensitive;
@property (nonatomic, readonly) CNFuture *url;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 group:(long long)arg5 options:(unsigned long long)arg6;
- (id)initWithType:(id)arg1 contactProperty:(id)arg2 bundleIdentifier:(id)arg3 url:(id)arg4 isSensitive:(bool)arg5 group:(long long)arg6 options:(unsigned long long)arg7;
- (bool)isEqual:(id)arg1;
- (bool)isSensitive;
- (id)performActionWithContext:(id)arg1;
- (id)performActionWithContext:(id)arg1 shouldCurateIfPerformed:(bool)arg2;
- (id)url;

@end