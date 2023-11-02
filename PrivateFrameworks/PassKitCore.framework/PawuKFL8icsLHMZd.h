
@interface PawuKFL8icsLHMZd : NSObject {
    NSString * _emailAddress;
    NSString * _firstName;
    NSString * _fullName;
    NSString * _lastName;
    NSString * _phoneNumber;
    unsigned long long  _source;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSString *emailAddress;
@property (nonatomic, retain) NSString *firstName;
@property (nonatomic, retain) NSString *fullName;
@property (nonatomic, retain) NSString *lastName;
@property (nonatomic, retain) NSString *phoneNumber;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)emailAddress;
- (id)firstName;
- (id)fullName;
- (id)initWithEmailAddress:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithFirstName:(id)arg1 lastName:(id)arg2 source:(unsigned long long)arg3;
- (id)initWithFullName:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithPhoneNumber:(id)arg1 source:(unsigned long long)arg2;
- (id)initWithSource:(unsigned long long)arg1;
- (id)lastName;
- (id)phoneNumber;
- (void)setEmailAddress:(id)arg1;
- (void)setFirstName:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setPhoneNumber:(id)arg1;
- (void)setSource:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)source;
- (unsigned long long)type;

@end