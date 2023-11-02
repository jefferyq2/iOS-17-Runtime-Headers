
@interface IDSKVDeleteContext : NSObject {
    unsigned long long  _rowIDCutoff;
    BOOL  _valueType;
}

@property (nonatomic) unsigned long long rowIDCutoff;
@property (nonatomic) BOOL valueType;

- (unsigned long long)rowIDCutoff;
- (void)setRowIDCutoff:(unsigned long long)arg1;
- (void)setValueType:(BOOL)arg1;
- (BOOL)valueType;

@end