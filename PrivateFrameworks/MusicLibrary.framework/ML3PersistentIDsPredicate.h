
@interface ML3PersistentIDsPredicate : ML3Predicate {
    NSArray * _persistentIDs;
    bool  _shouldContain;
}

@property (nonatomic, readonly) bool shouldContain;

+ (id)predicateWithPersistentIDs:(const long long*)arg1 count:(unsigned long long)arg2 shouldContain:(bool)arg3;
+ (id)predicateWithPersistentIDs:(id)arg1 shouldContain:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)databaseStatementParameters;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentIDs:(id)arg1 shouldContain:(bool)arg2;
- (bool)isEqual:(id)arg1;
- (bool)shouldContain;

@end