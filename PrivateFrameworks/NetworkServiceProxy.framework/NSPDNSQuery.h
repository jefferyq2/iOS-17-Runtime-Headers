
@interface NSPDNSQuery : NSObject {
    NSString * _name;
    long long  _recordClass;
    long long  _recordType;
}

@property (readonly) NSString *name;
@property (readonly) long long recordClass;
@property (readonly) long long recordType;

- (void).cxx_destruct;
- (id)copyStateDictionary;
- (id)initWithName:(id)arg1 recordType:(long long)arg2 recordClass:(long long)arg3;
- (id)name;
- (long long)recordClass;
- (long long)recordType;

@end