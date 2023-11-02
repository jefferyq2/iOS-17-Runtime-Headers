
@interface CoreDAVOrderedAction : CoreDAVAction {
    int  _absoluteOrder;
    NSURL * _priorURL;
}

@property (nonatomic, readonly) int absoluteOrder;
@property (nonatomic, retain) NSURL *priorURL;

- (void).cxx_destruct;
- (int)absoluteOrder;
- (id)description;
- (id)initWithAction:(int)arg1 context:(id)arg2 absoluteOrder:(int)arg3;
- (id)priorURL;
- (void)setPriorURL:(id)arg1;

@end