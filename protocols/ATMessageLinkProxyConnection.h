
@protocol ATMessageLinkProxyConnection <NSObject>

@required

- (void)addRequestHandler:(void *)arg1 forDataClass:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: <ATMessageLinkRequestHandler> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)connectWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeRequestHandlerForDataClass:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)sendRequest:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: ATRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, ATResponse *, NSError *, void*
- (void)sendResponse:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: ATResponse *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end