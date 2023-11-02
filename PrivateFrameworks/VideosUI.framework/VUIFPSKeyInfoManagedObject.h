
@interface VUIFPSKeyInfoManagedObject : NSManagedObject

@property (nonatomic) bool allowsManualRenewal;
@property (nonatomic, copy) NSString *contentID;
@property (nonatomic, copy) NSDate *expirationDate;
@property (nonatomic) bool isInvalid;
@property (nonatomic) bool isLowValue;
@property (nonatomic, retain) NSData *keyData;
@property (nonatomic, copy) NSURL *keyURI;
@property (nonatomic, copy) NSNumber *playbackDuration;
@property (nonatomic, copy) NSDate *playbackExpirationStartDate;
@property (nonatomic, copy) NSDate *renewalDate;
@property (nonatomic, copy) NSNumber *renewalInterval;
@property (nonatomic, copy) NSDate *retrievalDate;
@property (nonatomic, retain) VUIVideoManagedObject *video;

- (void)populateFromKeyRequest:(id)arg1 video:(id)arg2;

@end