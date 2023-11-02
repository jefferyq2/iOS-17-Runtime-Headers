
@interface NUAdjustment : NSObject <NUIdentifiable> {
    NUIdentifier * _identifier;
    NUAdjustmentSchema * _schema;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NUIdentifier *identifier;
@property (nonatomic, readonly) NUAdjustmentSchema *schema;
@property (nonatomic, readonly) NSDictionary *settings;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithAdjustmentSchema:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAdjustment:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reset;
- (id)schema;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)settings;

// Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging

- (bool)isEnabled;

@end