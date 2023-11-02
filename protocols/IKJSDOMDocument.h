
@protocol IKJSDOMDocument <JSExport>

@required

- (IKDOMNode *)adoptNode:(IKDOMNode *)arg1;
- (IKDOMCDATASection *)createCDATASection:(NSString *)arg1;
- (IKDOMComment *)createComment:(NSString *)arg1;
- (IKDOMDocumentFragment *)createDocumentFragment;
- (IKDOMElement *)createElement:(NSString *)arg1;
- (IKDOMText *)createTextNode:(NSString *)arg1;
- (IKDOMElement *)documentElement;
- (NSString *)documentURI;
- (IKDOMElement *)getElementById:(NSString *)arg1;
- (IKDOMNodeList *)getElementsByTagName:(NSString *)arg1;
- (IKDOMImplementation *)implementation;
- (NSString *)inputEncoding;
- (IKJSNavigationDocument *)navigationDocument;
- (void)setDocumentURI:(NSString *)arg1;
- (void)setNeedsUpdate;
- (void)setStrictErrorChecking:(bool)arg1;
- (void)setXmlStandalone:(bool)arg1;
- (void)setXmlVersion:(NSString *)arg1;
- (bool)strictErrorChecking;
- (NSString *)xmlEncoding;
- (bool)xmlStandalone;
- (NSString *)xmlVersion;

@end