
@interface _PASSqliteStatement : NSObject <NSCopying> {
    _PASSQLColumnMapping * _columnMapping;
    struct sqlite3_stmt { } * _stmt;
}

@property (nonatomic, readonly) _PASSQLColumnMapping *columnMapping;
@property (nonatomic, readonly) struct sqlite3_stmt { }*stmt;

- (void).cxx_destruct;
- (int)_bindParam:(int)arg1 toObjcObject:(id)arg2 sqliteMethodName:(const char *)arg3;
- (int)_checkBindStatus:(int)arg1 forIndex:(int)arg2;
- (void)accessBlobBytesForColumn:(int)arg1 usingBlock:(id /* block */)arg2;
- (void)accessBlobBytesForColumnAlias:(const char *)arg1 usingBlock:(id /* block */)arg2;
- (void)accessBlobBytesForColumnName:(const char *)arg1 table:(const char *)arg2 usingBlock:(id /* block */)arg3;
- (int)bindNamedParam:(const char *)arg1 toBlock:(id /* block */)arg2;
- (int)bindNamedParam:(const char *)arg1 toDouble:(double)arg2;
- (int)bindNamedParam:(const char *)arg1 toDoubleAsNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toDoubleAsNonnullNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toInt64AsNonnullNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toInteger:(long long)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSArray:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSDictionary:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSIndexSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSOrderedSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSSet:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNSString:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNonnullNSData:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNonnullNSNumber:(id)arg2;
- (int)bindNamedParam:(const char *)arg1 toNonnullNSString:(id)arg2;
- (int)bindNamedParamToNull:(const char *)arg1;
- (int)bindParam:(int)arg1 toBlock:(id /* block */)arg2;
- (int)bindParam:(int)arg1 toDouble:(double)arg2;
- (int)bindParam:(int)arg1 toDoubleAsNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toDoubleAsNonnullNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toInt64:(long long)arg2;
- (int)bindParam:(int)arg1 toInt64AsNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toInt64AsNonnullNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toInteger:(long long)arg2;
- (int)bindParam:(int)arg1 toNSArray:(id)arg2;
- (int)bindParam:(int)arg1 toNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNSDictionary:(id)arg2;
- (int)bindParam:(int)arg1 toNSIndexSet:(id)arg2;
- (int)bindParam:(int)arg1 toNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toNSOrderedSet:(id)arg2;
- (int)bindParam:(int)arg1 toNSSet:(id)arg2;
- (int)bindParam:(int)arg1 toNSString:(id)arg2;
- (int)bindParam:(int)arg1 toNonnullNSData:(id)arg2;
- (int)bindParam:(int)arg1 toNonnullNSNumber:(id)arg2;
- (int)bindParam:(int)arg1 toNonnullNSString:(id)arg2;
- (int)bindParamToNull:(int)arg1;
- (id)columnMapping;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)doubleAsNonnullNSNumberForColumn:(int)arg1;
- (id)doubleAsNonnullNSNumberForColumnAlias:(const char *)arg1;
- (id)doubleAsNonnullNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getDoubleAsNSNumberForColumn:(int)arg1;
- (id)getDoubleAsNSNumberForColumnAlias:(const char *)arg1;
- (id)getDoubleAsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (double)getDoubleForColumn:(int)arg1;
- (double)getDoubleForColumnAlias:(const char *)arg1;
- (double)getDoubleForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getInt64AsNSNumberForColumn:(int)arg1;
- (id)getInt64AsNSNumberForColumnAlias:(const char *)arg1;
- (id)getInt64AsNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getInt64ForColumn:(int)arg1;
- (long long)getInt64ForColumnAlias:(const char *)arg1;
- (long long)getInt64ForColumnName:(const char *)arg1 table:(const char *)arg2;
- (long long)getIntegerForColumn:(int)arg1;
- (long long)getIntegerForColumnAlias:(const char *)arg1;
- (long long)getIntegerForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSDataForColumn:(int)arg1;
- (id)getNSDataForColumnAlias:(const char *)arg1;
- (id)getNSDataForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSNumberForColumn:(int)arg1;
- (id)getNSNumberForColumnAlias:(const char *)arg1;
- (id)getNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)getNSStringForColumn:(int)arg1;
- (id)getNSStringForColumnAlias:(const char *)arg1;
- (id)getNSStringForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)init;
- (id)initWithStatementPointer:(struct sqlite3_stmt { }*)arg1;
- (id)initWithStatementPointer:(struct sqlite3_stmt { }*)arg1 columnMapping:(id)arg2;
- (id)int64AsNonnullNSNumberForColumn:(int)arg1;
- (id)int64AsNonnullNSNumberForColumnAlias:(const char *)arg1;
- (id)int64AsNonnullNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (bool)isColumnNull:(int)arg1;
- (bool)isNullForColumnAlias:(const char *)arg1;
- (bool)isNullForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)nonnullNSDataForColumn:(int)arg1;
- (id)nonnullNSDataForColumnAlias:(const char *)arg1;
- (id)nonnullNSDataForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)nonnullNSNumberForColumn:(int)arg1;
- (id)nonnullNSNumberForColumnAlias:(const char *)arg1;
- (id)nonnullNSNumberForColumnName:(const char *)arg1 table:(const char *)arg2;
- (id)nonnullNSStringForColumn:(int)arg1;
- (id)nonnullNSStringForColumnAlias:(const char *)arg1;
- (id)nonnullNSStringForColumnName:(const char *)arg1 table:(const char *)arg2;
- (void)prepareForRowDeserialization;
- (void)prepareToRunQuery;
- (struct sqlite3_stmt { }*)stmt;

@end