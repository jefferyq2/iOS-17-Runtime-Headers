
@interface IKDOMXPathResult : IKJSObject <IKJSDOMXPathResult> {
    NSArray * _nodes;
    long long  _type;
}

@property (nonatomic, readonly) bool booleanValue;
@property (nonatomic, readonly) bool invalidIteratorState;
@property (nonatomic, copy) NSArray *nodes;
@property (nonatomic, readonly) long long numberValue;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) IKDOMNode *singleNodeValue;
@property (nonatomic, readonly) long long snapshotLength;
@property (nonatomic, readonly) NSString *stringValue;
@property long long type;

- (void).cxx_destruct;
- (bool)booleanValue;
- (id)initWithAppContext:(id)arg1 type:(long long)arg2 nodes:(id)arg3;
- (bool)invalidIteratorState;
- (id)iterateNext;
- (id)nodes;
- (long long)numberValue;
- (long long)resultType;
- (void)setNodes:(id)arg1;
- (void)setType:(long long)arg1;
- (id)singleNodeValue;
- (id)snapshotItem:(long long)arg1;
- (long long)snapshotLength;
- (id)stringValue;
- (long long)type;

@end