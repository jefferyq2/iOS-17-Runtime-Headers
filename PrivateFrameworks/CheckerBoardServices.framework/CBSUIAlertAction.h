
@interface CBSUIAlertAction : NSObject <NSSecureCoding> {
    id /* block */  _handler;
    long long  _style;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic) long long style;
@property (nonatomic, retain) NSString *title;

+ (id)alertActionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id /* block */)handler;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
- (void)setHandler:(id /* block */)arg1;
- (void)setStyle:(long long)arg1;
- (void)setTitle:(id)arg1;
- (long long)style;
- (id)title;

@end