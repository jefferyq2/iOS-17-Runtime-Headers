
@interface _HKCFGExpression : NSObject {
    bool  _isPrivate;
}

@property (nonatomic) bool isPrivate;

- (id)_label;
- (unsigned long long)_minimumLength;
- (void)_tryNodesWithContext:(id)arg1 solutionTest:(id /* block */)arg2;
- (bool)isPrivate;
- (void)setIsPrivate:(bool)arg1;

@end