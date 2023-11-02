
@protocol _CDInteractionQuerying

@required

- (void)countContactsUsingPredicate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)countContactsUsingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (void)countInteractionsUsingPredicate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSPredicate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long, NSError *, void*
- (unsigned long long)countInteractionsUsingPredicate:(NSPredicate *)arg1 error:(id*)arg2;
- (void)queryContactsUsingPredicate:(void *)arg1 sortDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)queryContactsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3;
- (void)queryInteractionsUsingPredicate:(void *)arg1 sortDescriptors:(void *)arg2 limit:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: NSPredicate *, NSArray *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (NSArray *)queryInteractionsUsingPredicate:(NSPredicate *)arg1 sortDescriptors:(NSArray *)arg2 limit:(unsigned long long)arg3 error:(id*)arg4;

@end