
@interface TMLFunction : NSObject <TMLModelSerialize> {
    NSString * _functionBody;
    NSString * _functionName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *functionBody;
@property (nonatomic, readonly) NSString *functionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;

- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor {} *x1; unsigned int x2; struct ProtobufCMessageUnknownField {} *x3; }*)arg1;
- (id)functionBody;
- (id)functionName;
- (id)initWithName:(id)arg1 body:(id)arg2;

@end