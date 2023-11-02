
@interface CNDraggingContact : NSObject {
    NSURL * _cachedFileURLRepresentation;
    CNContact * _contact;
    CNContactStore * _contactStore;
}

@property (nonatomic, retain) NSURL *cachedFileURLRepresentation;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, retain) CNContactStore *contactStore;

+ (id)availableDataRepresentationTypes;
+ (id)os_log;

- (void).cxx_destruct;
- (id)cachedFileURLRepresentation;
- (void)cleanupFileURLRepresentation;
- (id)contact;
- (id)contactStore;
- (id)dataRepresentationForType:(id)arg1;
- (id)fetchContactWithKeys:(id)arg1;
- (id)fileNameForContact:(id)arg1;
- (id)fileURLRepresentation;
- (id)initWithContact:(id)arg1 contactStore:(id)arg2;
- (id)serializeContactToVCard:(id)arg1;
- (void)setCachedFileURLRepresentation:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactStore:(id)arg1;

@end