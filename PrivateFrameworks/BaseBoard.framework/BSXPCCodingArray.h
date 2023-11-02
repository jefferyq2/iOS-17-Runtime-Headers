
@interface BSXPCCodingArray : NSObject <BSDescriptionProviding, BSXPCCoding, NSFastEnumeration> {
    NSArray * _array;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)array;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithArray:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end