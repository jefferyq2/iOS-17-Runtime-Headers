
@interface SXTextComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    <SXDOMObjectProviding> * _DOMObjectProvider;
    <SXTextComponentLayoutHosting> * _textComponentLayoutHosting;
    <SXTextSourceFactory> * _textSourceFactory;
}

@property (nonatomic, readonly) <SXDOMObjectProviding> *DOMObjectProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int role;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <SXTextComponentLayoutHosting> *textComponentLayoutHosting;
@property (nonatomic, readonly) <SXTextSourceFactory> *textSourceFactory;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)DOMObjectProvider;
- (id)initWithDOMObjectProvider:(id)arg1 textComponentLayoutHosting:(id)arg2 textSourceFactory:(id)arg3;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)textComponentLayoutHosting;
- (id)textSourceFactory;
- (id)type;

@end