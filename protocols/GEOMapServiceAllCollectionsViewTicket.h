
@protocol GEOMapServiceAllCollectionsViewTicket <GEOMapServiceCancellableTicket>

@required

- (void)cancel;
- (void)submitWithHandler:(void *)arg1 networkActivity:(void *)arg2; // needs 2 arg types, found 14: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, GEOAllCollectionsViewResult *, NSArray *, NSError *, void*, id /* block */, void*, void, id /* block */, bool, void*
- (GEOMapServiceTraits *)traits;

@end