
@interface _SRUIFDataStoreEntry : NSObject {
    long long  _type;
    id  _value;
}

@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)_propertyListStringForType;
- (long long)_typeForPropertyListString:(id)arg1;
- (id)_valueForPropertyListRepresentation:(id)arg1 type:(long long)arg2;
- (id)_valuePropertyListRepresentation;
- (id)initWithPropertyListRepresentation:(id)arg1 error:(id*)arg2;
- (id)initWithType:(long long)arg1 value:(id)arg2;
- (id)propertyListRepresentation;
- (long long)type;
- (id)value;

@end