
@protocol FCAssetKeyManagerType

@required

- (NSData *)cachedWrappingKeyWithID:(NSData *)arg1;
- (void)clearUnauthorizedAssetKeys;
- (void)eraseAllKeys;
- (void)fetchWrappingKeyWithID:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*

@end