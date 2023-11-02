
@interface ICQDaemonOfferCriteria : NSObject {
    NSDictionary * _serverDict;
}

@property (nonatomic, readonly) NSDictionary *serverDictionary;

- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (bool)isSatisfiedByConditions:(id)arg1;
- (id)serverDictionary;

@end