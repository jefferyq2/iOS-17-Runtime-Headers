
@interface CRKIfaddrs : NSObject {
    struct ifaddrs { struct ifaddrs {} *x1; char *x2; unsigned int x3; struct sockaddr {} *x4; struct sockaddr {} *x5; struct sockaddr {} *x6; void *x7; } * mIfaddrs;
}

@property (nonatomic, readonly, copy) NSString *IPAddress;
@property (getter=isInternetInterface, nonatomic, readonly) bool internetInterface;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) CRKIfaddrs *next;

- (id)IPAddress;
- (id)initWithIfaddrs:(struct ifaddrs { struct ifaddrs {} *x1; char *x2; unsigned int x3; struct sockaddr {} *x4; struct sockaddr {} *x5; struct sockaddr {} *x6; void *x7; }*)arg1;
- (bool)isInternetInterface;
- (id)name;
- (id)next;

@end