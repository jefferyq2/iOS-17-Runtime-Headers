
@protocol GEOMapServiceWiFiQualityLocationSearchTicket <GEOMapServiceThrottlableTicket>

@required

- (void)cancelLocationSearch;
- (void)submitLocationSearchWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*

@end