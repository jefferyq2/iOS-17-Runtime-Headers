
@interface STPerson : STSiriModelObject <AFTranscriptionType> {
    NSSet * _contactHandles;
    NSString * _fullName;
}

@property (nonatomic, copy) NSSet *contactHandles;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *fullName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactHandles;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fullName;
- (id)initWithCoder:(id)arg1;
- (void)setContactHandles:(id)arg1;
- (void)setFullName:(id)arg1;

@end