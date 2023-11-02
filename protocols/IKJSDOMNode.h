
@protocol IKJSDOMNode <JSExport>

@required

- (IKDOMNode *)appendChild:(IKDOMNode *)arg1;
- (IKDOMNodeList *)childNodes;
- (IKDOMNode *)cloneNode:(bool)arg1;
- (bool)contains:(IKDOMNode *)arg1;
- (JSValue *)dataItem;
- (IKDOMNode *)firstChild;
- (IKJSObject *)getFeature:(NSString *)arg1 :(NSString *)arg2;
- (bool)hasChildNodes;
- (IKDOMNode *)insertBefore:(IKDOMNode *)arg1 :(IKDOMNode *)arg2;
- (bool)isEqualNode:(IKDOMNode *)arg1;
- (bool)isSameNode:(IKDOMNode *)arg1;
- (IKDOMNode *)lastChild;
- (IKDOMNode *)nextSibling;
- (NSString *)nodeName;
- (long long)nodeType;
- (NSString *)nodeValue;
- (IKDOMDocument *)ownerDocument;
- (IKDOMNode *)parentNode;
- (IKDOMNode *)previousSibling;
- (IKDOMNode *)removeChild:(IKDOMNode *)arg1;
- (IKDOMNode *)replaceChild:(IKDOMNode *)arg1 :(IKDOMNode *)arg2;
- (void)setDataItem:(JSValue *)arg1;
- (void)setNodeValue:(NSString *)arg1;
- (void)setTextContent:(NSString *)arg1;
- (NSString *)textContent;

@end