
@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol> {
    TUAutocompleteResultPartitioner * _autocompleteResultPartitioner;
    CNAutocompleteStore * _autocompleteStore;
    bool  _cancelled;
    id /* block */  _completion;
    <CNAutocompleteCancelable> * _fetchRequest;
    NSObject<OS_dispatch_queue> * _queue;
    bool  _searchComplete;
    TUSearchController * _searchController;
}

@property (nonatomic, retain) TUAutocompleteResultPartitioner *autocompleteResultPartitioner;
@property (nonatomic, retain) CNAutocompleteStore *autocompleteStore;
@property (getter=isCancelled, nonatomic) bool cancelled;
@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) <CNAutocompleteCancelable> *fetchRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (getter=isSearchComplete, nonatomic) bool searchComplete;
@property TUSearchController *searchController;
@property (readonly) TUSearchResults *searchResults;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanup;
- (void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2;
- (void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2;
- (void)autocompleteFetchDidFinish:(id)arg1;
- (id)autocompleteResultPartitioner;
- (id)autocompleteStore;
- (void)cancelSearch;
- (id /* block */)completion;
- (void)dealloc;
- (id)fetchRequest;
- (id)init;
- (bool)isCancelled;
- (bool)isSearchComplete;
- (id)queue;
- (id)searchController;
- (void)searchForString:(id)arg1 completion:(id /* block */)arg2;
- (id)searchResults;
- (void)setAutocompleteResultPartitioner:(id)arg1;
- (void)setAutocompleteStore:(id)arg1;
- (void)setCancelled:(bool)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setSearchComplete:(bool)arg1;
- (void)setSearchController:(id)arg1;

@end