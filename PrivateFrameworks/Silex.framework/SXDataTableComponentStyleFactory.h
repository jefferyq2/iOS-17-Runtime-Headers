
@interface SXDataTableComponentStyleFactory : NSObject <SXDataTableStyleFactory> {
    SXJSONObjectMerger * _cellStyleMerger;
    SXJSONObjectMerger * _columnStyleMerger;
    unsigned long long  _dataOrientation;
    SXDataRecordStore * _recordStore;
    SXJSONObjectMerger * _rowStyleMerger;
    SXDataTableSelectorValidator * _selectorValidator;
    SXDataTableStyle * _tableStyle;
}

@property (nonatomic, readonly) SXJSONObjectMerger *cellStyleMerger;
@property (nonatomic, readonly) SXJSONObjectMerger *columnStyleMerger;
@property (nonatomic, readonly) unsigned long long dataOrientation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SXDataRecordStore *recordStore;
@property (nonatomic, readonly) SXJSONObjectMerger *rowStyleMerger;
@property (nonatomic, readonly) SXDataTableSelectorValidator *selectorValidator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SXDataTableStyle *tableStyle;

- (void).cxx_destruct;
- (id)cellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)cellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1 usingBaseStyle:(id)arg2;
- (id)cellStyleMerger;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1;
- (id)columnStyleForColumnIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)columnStyleMerger;
- (long long)compareSelector:(id)arg1 withOtherSelector:(id)arg2;
- (unsigned long long)dataOrientation;
- (id)dataTableStyle;
- (id)descriptorForIdentifier:(id)arg1;
- (id)filterDuplicateSequentialStyles:(id)arg1;
- (id)headerCellStyleForIndexPath:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (id)headerColumnStyleForColumnIndex:(unsigned long long)arg1;
- (id)headerRowStyleForRowIndex:(unsigned long long)arg1;
- (id)initWithRecordStore:(id)arg1 tableStyle:(id)arg2 dataOrientation:(unsigned long long)arg3 rowStyleMerger:(id)arg4 columnStyleMerger:(id)arg5 cellStyleMerger:(id)arg6;
- (unsigned long long)isEvenNumber:(long long)arg1;
- (unsigned long long)isOddNumber:(long long)arg1;
- (id)recordStore;
- (id)rowStyleForRowIndex:(unsigned long long)arg1;
- (id)rowStyleForRowIndex:(unsigned long long)arg1 usingBaseStyle:(id)arg2;
- (id)rowStyleMerger;
- (id)selectorValidator;
- (id)sortStylesMatchesBySelectorWeight:(id)arg1;
- (id)styleByMergingStyleMatches:(id)arg1 forBaseStyle:(id)arg2 merger:(id)arg3;
- (id)tableStyle;

@end