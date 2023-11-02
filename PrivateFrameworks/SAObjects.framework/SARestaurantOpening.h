
@interface SARestaurantOpening : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSURL *bookingId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAUIAppPunchOut *makeReservationPunchOut;
@property (nonatomic, copy) NSNumber *partySize;
@property (readonly) Class superclass;
@property (nonatomic, retain) SACalendar *timeSlot;

+ (id)opening;
+ (id)openingWithDictionary:(id)arg1 context:(id)arg2;

- (id)bookingId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)makeReservationPunchOut;
- (id)partySize;
- (void)setBookingId:(id)arg1;
- (void)setMakeReservationPunchOut:(id)arg1;
- (void)setPartySize:(id)arg1;
- (void)setTimeSlot:(id)arg1;
- (id)timeSlot;

@end